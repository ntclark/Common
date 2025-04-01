/*
Copyright 2025 EnVisioNate LLC

Permission is hereby granted, free of charge, to any person obtaining a 
copy of this software and associated documentation files (the “Software”), 
to deal in the Software without restriction, including without limitation 
the rights to use, copy, modify, merge, publish, distribute, sublicense, 
and/or sell copies of the Software, and to permit persons to whom the 
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included 
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, 
INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR 
A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR 
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, 
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT 
OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

This is the MIT License
*/

#include <windows.h>

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <tchar.h>

#include "general.h"

#include "utils.h"
#include "Variable_i.h"
#include "Evaluator_i.h"

   LONG isLessConventional(double a,double b) { return a < b ? TRUE : FALSE ; }
   LONG isLessBackward(double a,double b)     { return a > b ? TRUE : FALSE ; }

   static double degToRad = 0.0;
   static double piOver2 = 0.0;

   double eval(IEvaluator *pEvaluator,char *v) {
   double d;
   pEvaluator -> Evaluate_szExpression(v,&d);
   return d;
   }


   double evalBSTR(IEvaluator *pEvaluator,BSTR bstr) {
   double d;
   pEvaluator -> Evaluate_bstrExpression(bstr,&d);
   return d;
   }


   double evalConsume(IEvaluator *pEvaluator,char *v) {
   double d;
   pEvaluator -> Consume_szExpression(v,&d);
   return d;
   }


   int adjustRange(double *minVal,double *maxVal) {
   long k;
   USHORT doneAdjust;
   double goal2,goal,step,start,test,end,temp;
 
   goal2 = 0.95;
   if ( (*maxVal) != 0.0 ) {
      doneAdjust = FALSE;
      goal = pow(0.5,10.0);
      step = 0.5;
      k = (long)log10(fabs(*maxVal));
      *maxVal *= pow(10.0,(double)-k);
      start = (long)(*maxVal);
      if ( (*maxVal) > 0.0 ) {
         if ( start == 0.0 ) start = step;
         end = (*maxVal)/goal2;
      }
      else {
         start -= 1.0;
         end = (*maxVal) * goal2;
      }
      while ( !doneAdjust && step > goal ) {
         for( test = start; test <= end; test += step ) {
            if ( doneAdjust ) break;
            if ( (*maxVal) > 0.0 )
               temp = (*maxVal)/test;
            else
               temp = test/(*maxVal);
            if ( temp <= 1.0 && temp >= goal2 ) {
               doneAdjust = TRUE;
               *maxVal = test * pow(10.0,(double)k);
            }
         }
         step /= 2.0;
      }
      if ( !doneAdjust ) *maxVal *= pow(10.0,(double)k);
   }
 
   if ( (*minVal) != 0.0 ) {
      k = (long)log10(fabs(*minVal));
      *minVal *= pow(10.0,(double)-k);
      doneAdjust = FALSE;
      step = -0.5;
      start = (long)*minVal;
      if ( (*minVal) > 0.0 ) {
         start += 1.0;
         end = (*minVal) + goal2;
      }
      else {
         if ( start == 0.0 ) start = step;
         end = (*minVal)/goal2;
      }
      while ( !doneAdjust && fabs(step) > goal ) {
         for( test = start; test >= end; test += step ) {
            if ( doneAdjust ) break;
            if ( (*minVal) > 0.0 ) 
               temp = test /(*minVal);
            else
               temp = (*minVal)/test;
            if ( temp < 1.0 && temp >= goal2 ) {
               doneAdjust = TRUE;
               *minVal = test * pow(10.0,(double)k);
            }
         }
         step /= 2.0;
      }
      if ( !doneAdjust ) *minVal *= pow(10.0,(double)k);
   }
 
   return TRUE;
   }
 

   int MxM(double *a,double *b,double *c) {
   double d[3][3];
   int i,j,k;
   for ( i = 0; i < 3; i++ ) {
      for ( j = 0; j < 3; j++ ) {
         d[i][j] = 0.0;
         for ( k = 0; k < 3; k++ ) {
            d[i][j] = d[i][j] + a[i * 3 + k] * b[k * 3 + j];
         }
      }
   }
   for ( i = 0; i < 3; i++ ) {
      for ( j = 0; j < 3; j++ ) {
         c[i * 3 + j] = d[i][j];
      }
   }
   return TRUE;
   }
 

   // This should be same as above
   int MxM_old(double *a,double *b,double *c) {
   double d[9];
   int i,j,k;
   for ( i = 0; i < 3; i++ ) {
      for ( j = 0; j < 3; j++ ) {
         d[i * 3 + j] = 0.0;
         for ( k = 0; k < 3; k++ ) {
            d[i * 3 + j] = d[i * 3 + j] + a[i * 3 + k] * b[k * 3 + j];
         }
      }
   }
   for ( i = 0; i < 3; i++ ) {
      for ( j = 0; j < 3; j++ ) {
         c[i * 3 + j] = d[i * 3 + j];
      }
   }
   return TRUE;
   }
 
 
   int MxScalar(double *a,double scalar,double *b) {
   double c[9];
   int i,j;
   for ( i = 0; i < 3; i++ ) {
      for ( j = 0; j < 3; j++ ) {
         c[i * 3 + j] = scalar * a[i * 3 + j];
      }
   }
   for ( i = 0; i < 3; i++ ) {
      for ( j = 0; j < 3; j++ ) {
         b[i * 3 + j] = c[i * 3 + j];
      }
   }
   return TRUE;
   }


   int MplusM(double *a,double *b,double *c) {
   double d[9];
   int i,j;
   for ( i = 0; i < 3; i++ ) {
      for ( j = 0; j < 3; j++ ) {
         d[i * 3 + j] = a[i * 3 + j] + b[i * 3 + j];
      }
   }
   for ( i = 0; i < 3; i++ ) {
      for ( j = 0; j < 3; j++ ) {
         c[i * 3 + j] = d[i * 3 + j];
      }
   }
   return TRUE;
   }


   int MTxM(double a[3][3],double b[3][3],double c[3][3]) {
   double d[3][3];
   int i,j,k;
   for ( i = 0; i < 3; i++ ) {
      for ( j = 0; j < 3; j++ ) {
         d[i][j] = 0.0;
         for ( k = 0; k < 3; k++ ) {
            d[i][j] = d[i][j] + a[k][i] * b[k][j];
         }
      }
   }
   for ( i = 0; i < 3; i++ ) {
      for ( j = 0; j < 3; j++ ) {
         c[i][j] = d[i][j];
      }
   }
   return TRUE;
   }
 

   int MxPoint(double *M,DataPoint* dpSource,DataPoint* dpTarget) {
   double source[] = {dpSource -> x,dpSource -> y,dpSource -> z};
   double target[3];
   int rc = MxV(M,source,target);
   dpTarget -> x = target[0];
   dpTarget -> y = target[1];
   dpTarget -> z = target[2];
   return rc;

   }


   int MxV(double *a,double *b,double *c) {
   double d[3];
   int i;
   for ( i = 0; i < 3; i++ ) d[i] = a[i * 3]*b[0] + a[i * 3 + 1]*b[1] + a[i * 3 + 2]*b[2];
   for ( i = 0; i < 3; i++ ) c[i] = d[i];
   return TRUE;
   }
 

   int M4xV(double *a,double *b,double *c) {
   double d[4];
   int i;
   for ( i = 0; i < 4; i++ ) d[i] = a[i * 4]*b[0] + a[i * 4 + 1]*b[1] + a[i * 4 + 2]*b[2] + a[i * 4 + 3]*b[3];
   for ( i = 0; i < 4; i++ ) c[i] = d[i];
   return TRUE;
   }
 
   int MTxV(double *a,double *b,double *c) {
   double d[3];
   int i;
   for ( i = 0; i < 3; i++ ) d[i] = a[0 * 3 + i]*b[0] + a[1 * 3 + i]*b[1] + a[2 * 3 + i]*b[2];
   for ( i = 0; i < 3; i++ ) c[i] = d[i];
   return TRUE;
   }
 
   int VxV(double *a,double *b,double *c) {
   double d[3];
   d[0] =  ( a[1]*b[2] - a[2]*b[1] );
   d[1] = -( a[0]*b[2] - a[2]*b[0] );
   d[2] =  ( a[0]*b[1] - a[1]*b[0] );
   c[0] = d[0];
   c[1] = d[1];
   c[2] = d[2];
   return TRUE;
   }
 
   int VplusV(double *a,double *b,double *c) {
   c[0] = a[0] + b[0];
   c[1] = a[1] + b[1];
   c[2] = a[2] + b[2];
   return TRUE;
   }

   int VminusV(double *a,double *b,double *c) {
   c[0] = a[0] - b[0];
   c[1] = a[1] - b[1];
   c[2] = a[2] - b[2];
   return TRUE;
   }

   int VplusV(DataPoint *pDP1,DataPoint *pDP2,DataPoint *pResult) {
   pResult -> x = pDP1 -> x + pDP2 -> x;
   pResult -> y = pDP1 -> y + pDP2 -> y;
   pResult -> z = pDP1 -> z + pDP2 -> z;
   return TRUE;
   }

   int VminusV(DataPoint *pDP1,DataPoint *pDP2,DataPoint *pResult) {
   pResult -> x = pDP1 -> x - pDP2 -> x;
   pResult -> y = pDP1 -> y - pDP2 -> y;
   pResult -> z = pDP1 -> z - pDP2 -> z;
   return TRUE;
   }

   int VxV(float *a,float *b,float *c) {
   float d[3];
   d[0] =  ( a[1]*b[2] - a[2]*b[1] );
   d[1] = -( a[0]*b[2] - a[2]*b[0] );
   d[2] =  ( a[0]*b[1] - a[1]*b[0] );
   c[0] = d[0];
   c[1] = d[1];
   c[2] = d[2];
   return TRUE;
   }

   int VplusV(float *a,float *b,float *c) {
   c[0] = a[0] + b[0];
   c[1] = a[1] + b[1];
   c[2] = a[2] + b[2];
   return TRUE;
   }

   int VminusV(float *a,float *b,float *c) {
   c[0] = a[0] - b[0];
   c[1] = a[1] - b[1];
   c[2] = a[2] - b[2];
   return TRUE;
   }

   int VxV(DataPoint *pA,DataPoint *pB,DataPoint *pResult) {
   DataPoint d;
   d.x =  ( pA -> y * pB -> z - pA -> z * pB -> y );
   d.y = -( pA -> x * pB -> z - pA -> z * pB -> x );
   d.z =  ( pA -> x * pB -> y - pA -> y * pB -> x );
   pResult -> x = d.x;
   pResult -> y = d.y;
   pResult -> z = d.z;
   return TRUE;
   }
 
   int unitVector(double *a,double *b) {
   double mag = sqrtl(a[0]*a[0] + a[1]*a[1] + a[2]*a[2]);
   b[0] = a[0]/mag;
   b[1] = a[1]/mag;          
   b[2] = a[2]/mag;
   return TRUE;
   }
 
   int unitVector(float *a,float *b) {
   float mag = sqrtf(a[0]*a[0] + a[1]*a[1] + a[2]*a[2]);
   b[0] = a[0]/mag;
   b[1] = a[1]/mag;          
   b[2] = a[2]/mag;
   return TRUE;
   }

   int unitVector(DataPoint *pA,DataPoint *pResult) {
   double mag = sqrtl(pA -> x * pA -> x + pA -> y * pA -> y + pA -> z * pA -> z);
   pResult -> x = pA -> x / mag;
   pResult -> y = pA -> y / mag;          
   pResult -> z = pA -> z / mag;
   return TRUE;
   }

   int unitPoint(DataPoint *a,DataPoint *b) {
   double mag = sqrtl(a -> x * a -> x + a -> y * a -> y + a -> z * a -> z);
   b -> x = a -> x / mag;
   b -> y = a -> y / mag;
   b -> z = a -> z / mag;
   return TRUE;
   }

   double radiansFromXY(double x,double y) {

   if ( 0.0 == piOver2 )
      piOver2 = 2.0 * atan(1.0);

   if ( 0.0 == x )
      return piOver2;

   if ( 1.0 == x ) 
      return 0.0;

   double radians = atan(y / x);

   if ( x < 0.0 && y > 0.0 )
      return radians + 2.0 * piOver2;

   if ( x < 0.0 && y < 0.0 )
      return radians + 2.0 * piOver2;

   if ( x > 0.0 && y < 0.0 )
      return radians + 4.0 * piOver2;

   return radians;
   }

// NOTE.  The (x,y,z) coordinate system is assumed to be right-handed.
// Coordinate axis rotation matrices are of the form
//   RX =    1       0       0
//           0     cos(t) -sin(t)
//           0     sin(t)  cos(t)
// where t > 0 indicates a counterclockwise rotation in the yz-plane
//   RY =  cos(t)    0     sin(t)
//           0       1       0
//        -sin(t)    0     cos(t)
// where t > 0 indicates a counterclockwise rotation in the zx-plane
//   RZ =  cos(t) -sin(t)    0
//         sin(t)  cos(t)    0
//           0       0       1
// where t > 0 indicates a counterclockwise rotation in the xy-plane.


   int rotateMatrix(char axis,double angle,double *output) {
   if ( degToRad == 0.0 )
      degToRad = 4.0 * atanl(1.0) / 180.0;
   double sinAngle,cosAngle;

   sinAngle = sin(degToRad * angle);
   cosAngle = cos(degToRad * angle);

   switch ( axis ) {
   case 'x':
   case 'X':
      output[0] = 1.0;
      output[1] = 0.0;
      output[2] = 0.0;
      output[3] = 0.0;
      output[4] = cosAngle;
      output[5] = -sinAngle;
      output[6] = 0.0;
      output[7] = sinAngle;
      output[8] = cosAngle;
      break;
 
   case 'y':
   case 'Y':
      output[0] = cosAngle;
      output[1] = 0.0;
      output[2] = sinAngle;
      output[3] = 0.0;
      output[4] = 1.0;
      output[5] = 0.0;
      output[6] = -sinAngle;
      output[7] = 0.0;
      output[8] = cosAngle;
      break;
 
   case 'z':
   case 'Z':
      output[0] = cosAngle;
      output[1] = -sinAngle;
      output[2] = 0.0;
      output[3] = sinAngle;
      output[4] = cosAngle;
      output[5] = 0.0;
      output[6] = 0.0;
      output[7] = 0.0;
      output[8] = 1.0;
      break;
 
   case 't':
   case 'T':
      output[0] = cosAngle;
      output[1] = -sinAngle;
      output[2] = 0.0;
      output[3] = sinAngle;
      output[4] = cosAngle;
      output[5] = 0.0;
      output[6] = 0.0;
      output[7] = 0.0;
      output[8] = 1.0;
      break;
   }
   return TRUE;
   }
 
 
   int rotateMatrixVector(double angle,double *vector,double *output) {
   if ( degToRad == 0.0 )
      degToRad = 4.0 * atanl(1.0) / 180.0;

   double uv[] = {vector[0],vector[1],vector[2]};

   unitVector(uv,uv);

    // Let (x,y,z) be the unit-length axis and let A be an angle of rotation.
    // The rotation matrix is R = I + sin(A)*P + (1-cos(A))*P^2 where
    // I is the identity and
    //
    //       +-        -+
    //   P = |  0 -z +y |
    //       | +z  0 -x |
    //       | -y +x  0 |
    //       +-        -+
    //

   double P[] = {0.0,-uv[2],uv[1],uv[2],0.0,-uv[0],-uv[1],uv[0],0.0};
   double I[] = {1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0};
   double P2[9];

   MxM(P,P,P2);
   
   MxScalar(P,sin(angle * degToRad),P);
   MxScalar(P2,1.0 - cos(angle * degToRad),P2);

   MplusM(I,P,P);
   MplusM(P,P2,output);

   return TRUE;
   }

   int shearMatrix(char axis,double ratio,double *output) {

   output[0] = 1.0;
   output[1] = 0.0;
   output[2] = 0.0;
   output[3] = 0.0;
   output[4] = 1.0;
   output[5] = 0.0;
   output[6] = 0.0;
   output[7] = 0.0;
   output[8] = 1.0;

   switch ( axis ) {
   case 'x':
   case 'X':
      output[1] = ratio;
      break;
 
   case 'y':
   case 'Y':
      output[1 * 3] = ratio;
      break;
 
   case 'z':
   case 'Z':
//      output[0] = cosAngle;
      break;
   }
   return TRUE;
   }
 
 
   int viewToScreen(double viewVector[],double theta,double *transformer) {
   USHORT k;
   double viewUnit[3];
   double xPlot[3],yPlot[3];
   double zUnit[3] = {0.0,0.0,1.0};
   double magnitude;
 
   magnitude = sqrtl(viewVector[0]*viewVector[0] + 
                     viewVector[1]*viewVector[1] + 
                     viewVector[2]*viewVector[2]);
   viewUnit[0] = viewVector[0]/magnitude;
   viewUnit[1] = viewVector[1]/magnitude;
   viewUnit[2] = viewVector[2]/magnitude;
 
   if ( viewUnit[0] != 0.0 || viewUnit[1] != 0.0 ) {
      VxV(zUnit,viewUnit,xPlot);
      unitVector(xPlot,xPlot);
      VxV(viewUnit,xPlot,yPlot);
      unitVector(yPlot,yPlot);
   } else {
      if ( viewUnit[2] == 1.0 ) {
         for ( k = 0; k < 3; k++ ) xPlot[k] = 0.0;
         xPlot[1] = 1.0;
         for ( k = 0; k < 3; k++ ) yPlot[k] = 0.0;
         yPlot[0] = -1.0;
         for ( k = 0; k < 3; k++ ) viewUnit[k] = 0.0;
         viewUnit[2] = 1.0;
      } else {
         for ( k = 0; k < 3; k++ ) xPlot[k] = 0.0;
         xPlot[1] = 1.0;
         for ( k = 0; k < 3; k++ ) yPlot[k] = 0.0;
         yPlot[0] = 1.0;
         for ( k = 0; k < 3; k++ ) viewUnit[k] = 0.0;
         viewUnit[2] = -1.0;
      }
   }
 
   for ( k = 0; k < 3; k++ ) {
      transformer[k] = xPlot[k];
      transformer[1 * 3 + k] = yPlot[k];
      transformer[2 * 3 + k] = viewUnit[k];
   }
  
   if ( theta != 0.0 ) {
      double t[9];
      rotateMatrix('T',theta,t);
      MxM(t,transformer,transformer);
   }
  
   return TRUE;
   }
 
   double magnitude(double *v) {
   return sqrtl(v[0]*v[0] + v[1]*v[1] + v[2]*v[2]);
   }
 
 
   int viewVectorFromRotations(double *rotAngles,double *viewVector) {
   double v[3] = {0.0,0.0,1.0};
   double r[9];
   double w[9] = {1.0,0.0,0.0,
                  0.0,1.0,0.0,
                  0.0,0.0,1.0};
 
   rotateMatrix('X',rotAngles[0],r);
   MxM(r,w,w);
   rotateMatrix('Z',rotAngles[2],r);
   MxM(r,w,w);
   rotateMatrix('Y',rotAngles[1],r);
   MxM(r,w,w);
 
   if ( rotAngles[3] != 0.0 ) {
      rotateMatrix('T',rotAngles[3],r);
      MxM(r,w,w);
   }
  
   MxV(w,v,viewVector);
 
   return TRUE;
   }
 
 
   int Solve(double *matrix,double *vector,double *solution,LONG size) {
   double pivot,swap;
   double *work = new double[size * (size + 1)];
   LONG k,ks,rectangle,row,column,first,trial;
 
   rectangle = size + 1;
   for ( row = 0; row < size; row++ ) {
      for ( column = 0; column < size; column++ )
         work[row * rectangle + column] = matrix[row * size + column];
      work[row * rectangle + size] = vector[row];
   }
 
   for ( first = 0; first < size; first++ ) {
      if ( work[first * rectangle + first] == 0.0 ) {
         trial = first + 1;
         while ( work[first * rectangle + first] == 0.0 ) {
            if ( trial > size ) {
               delete[] work;
               return FALSE;
            }
            if ( work[trial * rectangle + trial] != 0.0 ) {
               for ( ks = 0; ks < rectangle; ks++ ) {
                  swap = work[first * rectangle + ks];
                  work[first * rectangle + ks] = work[trial * rectangle + ks];
                  work[trial * rectangle + ks] = swap;
               }
            }
            else trial++;
         }
      }
      for ( row = first + 1; row < size; row++ ) {
         pivot = work[row * rectangle + first] / work[first * rectangle + first];
         if ( pivot != 0.0 ) {
            for ( column = first; column < rectangle; column++ )
               work[row * rectangle + column] -= pivot * work[first * rectangle + column];
         }
      }
   }
 
   for ( k = 0; k < size; k++ ) 
      solution[k] = 0.0;
 
   for ( row = size - 1; row > -1; row-- ) {
      solution[row] = work[row * rectangle + size];
      for ( column = row + 1; column < size; column++ )
         solution[row] -= work[row * rectangle + column] * solution[column];
      solution[row] = solution[row] / work[row * rectangle + row];
   }
 
   delete [] work;

   return TRUE;
   }
 
 
   int SolveOld(double *matrix,double *vector,double *solution,LONG size) {
   double *work = new double[size * (size + 1)];
   int ks,rectangle,row,column,first,trial;
   double pivot,swap;
 
   memset(work,0,sizeof(double) * size * (size + 1));
   rectangle = size + 1;
   for ( row = 1; row <= size; row++ ) {
      work[row - 1,size] = vector[row - 1];
      for ( column = 1; column <= size; column++ ) {
         work[row - 1,column - 1] = matrix[row - 1,column - 1];
      }
   }
 
   for ( first = 1; first <= size; first++ ) {
      if ( work[first - 1,first - 1] == 0.0 ) {
         trial = first + 1;
         while ( work[first - 1,first - 1] == 0.0 ) {
//           if ( trial > size ) goto singular:
            if ( work[trial - 1,trial - 1] != 0.0 ) {
               for ( ks = 1; ks <= rectangle; ks++ ) {
                  swap = work[first - 1,ks - 1];
                  work[first - 1,ks - 1] = work[trial - 1,ks - 1];
                  work[trial - 1,ks - 1] = swap;
               }
            }
            else trial = trial + 1;
         }
      }
      for ( row = first + 1; row <= size; row++ ) {
         pivot = work[row - 1,first - 1] / work[first - 1,first - 1];
         if ( pivot != 0.0 ) {
            for ( column = first; column <= rectangle; column++ ) {
               work[row - 1,column - 1] = work[row - 1,column - 1] - pivot * work[first - 1,column - 1];
            }
         }
      }
   }
 
   for ( row = size; row >= 1; row-- ) {
      solution[row - 1] = work[row - 1,size];
      for ( column = row + 1; column <= size; column++ ) {
         solution[row - 1] = solution[row - 1] - work[row - 1,column - 1] * solution[column - 1];
      }
      solution[row - 1] = solution[row - 1] / work[row - 1,row - 1];
   }
 
   delete [] work;
 
   return TRUE;
   }



   int swap(double* a,double* b) {
   double t[4];
   memcpy(t,a,sizeof(t));
   memcpy(a,b,sizeof(t));
   memcpy(b,t,sizeof(t));
   return 0;
   }


    double spvDet2x2(double a1, double a2, double b1, double b2) {
    return a1 * b2 - b1 * a2;
    }


    int Mx3Inverse(double *pSource,double *pTarget) {

    double adj[][3]{ {0.0,0.0,0.0},{0.0,0.0,0.0},{0.0,0.0,0.0}};
    double a[3][3];

    memcpy(a,pSource,sizeof(a));

    adj[0][0] =  spvDet2x2(a[1][1], a[1][2], a[2][1], a[2][2]);
    adj[0][1] = -spvDet2x2(a[0][1], a[0][2], a[2][1], a[2][2]);
    adj[0][2] =  spvDet2x2(a[0][1], a[0][2], a[1][1], a[1][2]);

    adj[1][0] = -spvDet2x2(a[1][0], a[1][2], a[2][0], a[2][2]);
    adj[1][1] =  spvDet2x2(a[0][0], a[0][2], a[2][0], a[2][2]);
    adj[1][2] = -spvDet2x2(a[0][0], a[0][2], a[1][0], a[1][2]);

    adj[2][0] =  spvDet2x2(a[1][0], a[1][1], a[2][0], a[2][1]);
    adj[2][1] = -spvDet2x2(a[0][0], a[0][1], a[2][0], a[2][1]);
    adj[2][2] =  spvDet2x2(a[0][0], a[0][1], a[1][0], a[1][1]);

    double det = (adj[0][0] * a[0][0]) + (adj[0][1] * a[1][0]) + (adj[0][2] * a[2][0]);

    for ( long k = 0; k < 3; k++ )
        for ( long j = 0; j < 3; j++ )
            a[k][j] = (0.0 == det) ? 0.0 : adj[k][j] / det;

    memcpy(pTarget,a,sizeof(a));

    return 0;
    }


    // This may not be working, the Mx3 version was not working and
    // was replaced by the above
   int Mx4Inverse(double *sourceMatrix,double *targetMatrix) {

   double a[4][4];
   double b[4][4] = {1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0};
   double coFactors[4][4][3][3] = {16 * (9 * 0.0)};
   double determinant[4][4] = {16 * 0.0};
   long j,k,m,n,rowNo,colNo;

   memcpy(a,sourceMatrix,sizeof(a));

   for ( m = 0; m < 4; m++ ) {
      for ( n = 0; n < 4; n++ ) {
         rowNo = -1;
         for ( j = 0; j < 4; j++ ) {
            if ( j == m ) continue;
            rowNo++;
            colNo = -1;
            for ( k = 0; k < 4; k++ ) {
               if ( k == n ) continue;
               colNo++;
               coFactors[m][n][rowNo][colNo] = a[j][k];
            }
         }
      }
   }

   double x1,x2,x3;
   for ( m = 0; m < 4; m++ ) {
      for ( n = 0; n < 4; n++ ) {
         x1 = coFactors[m][n][1][1] * coFactors[m][n][2][2] - coFactors[m][n][2][1]*coFactors[m][n][1][2];
         x2 = coFactors[m][n][1][0] * coFactors[m][n][2][2] - coFactors[m][n][1][2]*coFactors[m][n][2][0];
         x3 = coFactors[m][n][1][0] * coFactors[m][n][2][1] - coFactors[m][n][1][1]*coFactors[m][n][2][0];
         determinant[m][n] = coFactors[m][n][0][2] * x3 - coFactors[m][n][0][1] * x2 + coFactors[m][n][0][0] * x1;
      }
   }

   double mainDeterminant = 
      a[0][0] * determinant[0][0] - a[0][1] * determinant[0][1] +
      a[0][2] * determinant[0][2] - a[0][3] * determinant[0][3];

   b[0][0] = determinant[0][0] / mainDeterminant;
   b[0][1] = -determinant[1][0] / mainDeterminant;
   b[0][2] = determinant[2][0] / mainDeterminant;
   b[0][3] = -determinant[3][0] / mainDeterminant;

   b[1][0] = -determinant[0][1] / mainDeterminant;
   b[1][1] = determinant[1][1] / mainDeterminant;
   b[1][2] = -determinant[2][1] / mainDeterminant;
   b[1][3] = determinant[3][1] / mainDeterminant;

   b[2][0] = determinant[0][2] / mainDeterminant;
   b[2][1] = -determinant[1][2] / mainDeterminant;
   b[2][2] = determinant[2][2] / mainDeterminant;
   b[2][3] = -determinant[3][2] / mainDeterminant;

   b[3][0] = -determinant[0][3] / mainDeterminant;
   b[3][1] = determinant[1][3] / mainDeterminant;
   b[3][2] = -determinant[2][3] / mainDeterminant;
   b[3][3] = determinant[3][3] / mainDeterminant;

   memcpy(targetMatrix,b,sizeof(b));

/*   
   double a[4][4];
   double b[4][4] = {1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0};

   long i,j,k,pivotIndex;

   memcpy(a,sourceMatrix,sizeof(a));

   for ( j = 0; j < 4; j++ ) {

      pivotIndex = j;
      for ( i = j + 1; i < 4; i++ ) {
         if ( fabs(a[i][j]) > fabs(a[pivotIndex][j]) ) 
            pivotIndex = i;
      }

      swap(a[pivotIndex],a[j]);
      swap(b[pivotIndex],b[j]);

      for ( i = 0; i < 4; i++ ) b[j][i] /= a[j][j];

      for ( i = 0; i < 4; i++ ) a[j][i] /= a[j][j];

      for ( i = 0; i < 4; i++ ) {
         if ( i != j ) {
            double c[4];
            for ( k = 0; k < 4; k++ ) c[k] = a[i][j] * b[j][k];
            for ( k = 0; k < 4; k++ ) b[i][k] -= c[k];
            for ( k = 0; k < 4; k++ ) c[k] = a[i][j] * a[j][k];
            for ( k = 0; k < 4; k++ ) a[i][k] -= c[k];
         }
      }

   }

   memcpy(targetMatrix,b,sizeof(b));
*/
/*


     mat4 a(*this),          // As a evolves from original mat into identity
          b(identity3D());   // b evolves from identity into inverse(a)
     int i, j, i1;
 
     // Loop over cols of a from left to right, eliminating above and below diag

     for (j=0; j<4; j++) {   // Find largest pivot in column j among rows j..3
     i1 = j;                 // Row with largest pivot candidate
     for (i=j+1; i<4; i++)
         if (fabs(a.v[i].n[j]) > fabs(a.v[i1].n[j]))
         i1 = i;
 
     // Swap rows i1 and j in a and b to put pivot on diagonal
     swap(a.v[i1], a.v[j]);
     swap(b.v[i1], b.v[j]);
 
     // Scale row j to have a unit diagonal
     if (a.v[j].n[j]==0.)
         ALGEBRA_ERROR("mat4::inverse: singular matrix; can't invert\n");
     b.v[j] /= a.v[j].n[j];
     a.v[j] /= a.v[j].n[j];
 
     // Eliminate off-diagonal elems in col j of a, doing identical ops to b
     for (i=0; i<4; i++)
         if (i!=j) {
         b.v[i] -= a.v[i].n[j]*b.v[j];
         a.v[i] -= a.v[i].n[j]*a.v[j];
         }
     }
     return b;
 
    }
*/ 
   return 0;

   }

/*

      The following has never been lightly tested


*/

   double *leastSquares(double *x,double *y,long degree,long noPoints) {

   static double coefficients[32];
   
   double *a = new double[(degree + 1) * (degree + 1)];                    //    DECLARE (ALST(DEGREE+1,DEGREE+1),X_SUM(0:2*DEGREE),                
   double *xSum = new double[2 * degree + 1];                              //             XY_SUM(0:DEGREE),VECTORLST(DEGREE+1)) FLOAT BIN(53);      
   double *xySum = new double[degree + 1];                                 //    DECLARE FLOAT BUILTIN;                                             
   double *vector = new double[degree + 2];                                //    DECLARE SYSPRINT STREAM OUTPUT PRINT FILE;                         
                                                                           //    DECLARE (I,J,K,SQUARE,RECTANGLE,ROW,COLUMN) FIXED BIN(31);         
   long i,j,k,square,rectangle,row,column;                                 //    DECLARE SOLVE EXTERNAL ENTRY((*,*) FLOAT BIN(53),(*) FLOAT BIN(53),
                                                                           //                                 (*) FLOAT BIN(53),FIXED BIN(31));     
   rectangle = 2 * degree;                                                 //
   square = degree + 1;

   memset(coefficients,0,sizeof(coefficients));

   memset(xSum,0,2 * degree * sizeof(double));                             //    X_SUM = 0.0;                                       
                                                                           //    DO J = 1 TO RECTANGLE;                             
   for ( j = 0; j < rectangle; j++ ) {                                     //       DO K = 1 TO NO_POINTS;                          
      for ( k = 0; k < noPoints; k++ ) {                                   //          X_SUM(J) = X_SUM(J) + XLST(K)**J;            
         xSum[j + 1] += pow(x[k],j + 1);                                   //       END;                                            
      }                                                                    //    END;                                               
   }                                                                       //
   xSum[0] = (double)noPoints;                                             //    X_SUM(0) = FLOAT(NO_POINTS,16);                    
                                                                        
   memset(xySum,0,degree * sizeof(double));                                //    XY_SUM = 0.0;                                      
                                                                           //    
   for ( j = 0; j < noPoints; j++ ) {                                      //    DO J = 1 TO NO_POINTS;                             
      xySum[0] += y[j];                                                    //       XY_SUM(0) = XY_SUM(0) + YLST(J);                
      for ( k = 0; k < degree; k++ ) {                                     //       DO K = 1 TO DEGREE;                             
         xySum[k + 1] += y[j] * pow(x[j],k + 1);                           //          XY_SUM(K) = XY_SUM(K) + YLST(J) * XLST(J)**K;
      }                                                                    //       END;                                            
   }                                                                       //     END;                                                                                                 
                                                                           
   for ( row = 0; row < square; row++ ) {                                  //    DO ROW = 1 TO SQUARE;             
      i = row;                                                             //       I = ROW - 1;                   
      for ( column = 0; column < square; column++ ) {                      //       DO COLUMN = 1 TO SQUARE;       
         a[row * (degree + 1) + column] = xSum[i];                         //          ALST(ROW,COLUMN) = X_SUM(I);
         i = i + 1;                                                        //          I = I + 1;                  
      }                                                                    //       END;                           
      vector[row] = xySum[row];                                            //       VECTORLST(ROW) = XY_SUM(ROW-1);
   }                                                                       //    END;                              

   Solve(a,vector,coefficients,degree + 1);

   delete [] a;
   delete [] xSum;
   delete [] xySum;
   delete [] vector;

   return coefficients;                                                     
   }                                                                       


/*

      The following has never been tested


*/

   double *leastSquares3D(double *x,double *y,double *z,long npoints,long degree,long order) {

//  leas2d: procedure(x,y,npoints,degree,order,coeff);
//  declare (x(*),y(*,*),coeff(*)) float bin(53);

   static double coeff[32];

//  declare (degree,npoints,order) fixed binary(31);

   double vzsum,sum,xyval,xi,yi,zi,left,right;
//  declare (vzsum,sum,xyval,xi,yi,zi,left,right) float bin(53);

   double *axyt = new double[order * npoints];
   double *axy = new double[npoints * order];
   double *vz = new double[order + 1];
   double *a = new double[order * order];
/*
  declare (axyt(order,npoints),
          axy(npoints,order),
          vz(order),
          a(order,order)) float bin(53);
*/
   long i,j,k,m,n,np1,ipt,index;

/*
  declare (i,j,k,l,m,n,np1,ipt,index) fixed binary(31);
  declare solve external entry((*,*) float bin(53),(*) float bin(53),(*) float bin(53),
                                  fixed bin(31));
*/
   memset(axyt,0,order * order * sizeof(double));
   memset(axy,0,order * order * sizeof(double));
   memset(vz,0,order * sizeof(double));
   memset(a,0,order * order * sizeof(double));
/*
  axyt = 0.0;
  axy = 0.0;
  vz = 0.0;
  a = 0.0;
*/
   memset(coeff,0,sizeof(coeff));

   index = 0;//1;
   for ( n = 0; n < degree; n++ ) {
      np1 = n + 1;
      for ( m = 0; m < np1; m++ ) { //do l = 1 to np1;
         index = index + 1;
         j = m - 1;
         k = n - j;
         vzsum = 0.0;
         for ( ipt = 0; ipt < npoints; ipt++ ) { // do ipt = 1 to npoints;
            xi = x[ipt];
            yi = y[ipt];//y(1,ipt);
            zi = z[ipt];//y(2,ipt);
            if ( xi != 0.0 ) {
              left = pow(xi,k);// ** k;
            } else {
               if ( 0 == k )
                  left = 1.0;
               else
                  left = 0.0;
            }
            if ( yi != 0.0 ) { //yi ^= 0.0
              right = pow(yi,n - k);//yi ** (n-k);
            } else {
              if ( n == k ) 
                  right = 1.0;
               else
                  right = 0.0;
            }
            xyval = left * right;
            axyt[index * order + ipt] = xyval; //axyt(index,ipt) = xyval;
            axy[ipt * npoints + index] = xyval; //axy (ipt,index) = xyval;
            vzsum = vzsum + (zi * xyval);
         }
         vz[index] = vzsum;
      }
   }

   vzsum  = 0.0;
   for ( ipt = 0; ipt < npoints; ipt++ ) {      //do ipt = 1 to npoints;
      axyt[ipt] = 1.0;                             //axyt(1,ipt) = 1.0;
      axy[ipt * npoints] = 1.0;                    //axy(ipt,1) = 1.0;
      vzsum = vzsum + z[ipt];                      //vzsum = vzsum + y(2,ipt);
   }

   vz[0] = vzsum; //vz(1) = vzsum;

   for ( i = 0; i < order; i++ ) { //do i = 1 to order;
      for ( j = 0; j < order; j++ ) { //do j = 1 to order;
         sum = 0.0;
         for ( k = 0; k < npoints; k++ ) { //do k = 1 to npoints;
            sum += axy[i * npoints + k] * axy[k * npoints + j]; //axyt(i,k) * axy(k,j);
         } 
         a[i * order + j] = sum;             //a(i,j) = sum;
      }
   }

   Solve(a,vz,coeff,order);   //call solve(a,vz,coeff,order);

   delete [] axyt;
   delete [] axy;
   delete [] vz;
   delete [] a;

   return coeff;
   }


