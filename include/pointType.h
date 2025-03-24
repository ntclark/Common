#pragma once

#include <limits>

#define BEZIER_CURVE_GRANULARITY  0.01f

struct POINTD;

typedef FLOAT POINT_TYPE;

#ifndef __midl

    struct GS_POINT {
        GS_POINT() : x(0.0),y(0.0) {}
        GS_POINT(FLOAT px,FLOAT py) : x(px), y(py) {}
        GS_POINT(POINT pt) : x((FLOAT)pt.x),y((FLOAT)pt.y) {}
        GS_POINT(GS_POINT *pPointd);
        FLOAT x;
        FLOAT y;
    };

    static GS_POINT &operator-=(GS_POINT &left,GS_POINT right) { 
        left.x -= right.x;
        left.y -= right.y; 
        return left; 
    }

    static GS_POINT operator-(GS_POINT left,GS_POINT right) {
        return left -= right;
    }

    static GS_POINT &operator+=(GS_POINT &left,GS_POINT right) {
        left.x += right.x;
        left.y += right.y;
        return left;
    }

    static GS_POINT operator+(GS_POINT left,GS_POINT right) {
        return left += right;
    }

    static GS_POINT &operator*=(GS_POINT &left,POINT_TYPE right) {
        left.x *= right;
        left.y *= right;
        return left; 
    }

    static GS_POINT operator*(POINT_TYPE left, GS_POINT right ) {
        return right *= left;
    }

    static GS_POINT operator*(GS_POINT left, POINT_TYPE right ) {
        return left *= right;
    }

    static FLOAT dot( GS_POINT *pLeft, GS_POINT *pRight ) {
    return pLeft -> x * pRight -> x + pLeft -> y * pRight -> y;
    }

    static FLOAT dot( GS_POINT &left, GS_POINT &right ) {
    return left.x * right.x + left.y * right.y; 
    }

    static GS_POINT perpendicular( GS_POINT that ) {
    return GS_POINT( -that.y, that.x ); 
    }

#else


#endif