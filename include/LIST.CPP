/*

                       Copyright (c) 1996,1997,1998,1999,2000,2009 Nathan T. Clark

*/

#include <windows.h>

#include <stdio.h>
#include <string.h>

#include "general.h"
#include "list.h"

   template<class T> List<T>::List() {
   firstListItem = (ListItem *)NULL;
   lastListItem = (ListItem *)NULL;
   currentListItem = (ListItem *)NULL;
   holdListItem = (ListItem *)NULL;
   count = 0;
   };
 
 
   template<class T> List<T>::~List() {
   ListItem *p = lastListItem;
   if ( ! p ) return;
   while ( p -> previous ) {
      p = p -> previous;
      delete p -> next;
   }
   delete firstListItem;
   firstListItem = (ListItem *)NULL;
   currentListItem = (ListItem *)NULL;
   holdListItem = (ListItem *)NULL;
   lastListItem = (ListItem *)NULL;
   };
 
 
   template<class T> int List<T>::Add(T *newItem,char *itemName,ULONG_PTR idNumber) {
   if ( ! lastListItem ) {
      firstListItem = new ListItem;
      currentListItem = firstListItem;
      lastListItem = firstListItem;
   }
   if ( lastListItem -> member ) {
      while ( lastListItem -> next ) lastListItem = lastListItem -> next;
      lastListItem -> next = new ListItem;
      lastListItem -> next -> next = (ListItem *)NULL;
      lastListItem -> next -> previous = lastListItem;
      lastListItem = lastListItem -> next;
   }
   lastListItem -> member = newItem;
   lastListItem -> id = idNumber;
   currentListItem = lastListItem;
   if ( itemName ) 
      strncpy(currentListItem -> name,itemName,NAME_SIZE);
   count++;
   return TRUE;
   }
 
 
   template<class T> int List<T>::Remove(T *removeItem) {
   ListItem *p = firstListItem;
   while ( p ) {
      if ( p -> member == removeItem ) {
         if ( p == firstListItem ) {
            if ( p -> next ) {
               if ( lastListItem == firstListItem )
                  lastListItem = p -> next;
               firstListItem = p -> next;
               firstListItem -> previous = (ListItem *)NULL;
            } else {
               firstListItem = (ListItem *)NULL;
               currentListItem = (ListItem *)NULL;
               lastListItem = (ListItem *)NULL;
            }
            if ( holdListItem == p ) 
               holdListItem = (ListItem *)NULL;
            delete p;
            count--;
            return TRUE;
         }
         if ( p == lastListItem )
            lastListItem = p -> previous;
         if ( p -> previous ) p -> previous -> next = p -> next;
         if ( p -> next ) p -> next -> previous = p -> previous;
         delete p;
         count--;
         return TRUE;
      }
      p = p -> next;
   }
   return FALSE;
   }
 
 
   template<class T> int List<T>::Remove(int indexOfItem) {
   if ( ! firstListItem ) return FALSE;
   ListItem *p = firstListItem;
   for ( int k = 0; k < indexOfItem; k++ ) {
      if ( ! p ) return FALSE;
      p = p -> next;
   }
   if ( p == currentListItem ) 
      currentListItem = (ListItem *)NULL;
   if ( p == firstListItem ) {
      firstListItem = p -> next;
      if ( firstListItem )
         firstListItem -> previous = (ListItem *)NULL;
      if ( holdListItem == p ) 
         holdListItem = (ListItem *)NULL;
      delete p;
      count--;
      if ( ! count ) {
         currentListItem = (ListItem *)NULL;
         firstListItem = (ListItem *)NULL;
         holdListItem = (ListItem *)NULL;
         lastListItem = (ListItem *)NULL;
      }
      return TRUE;
   }
   if ( p -> previous ) p -> previous -> next = p -> next;
   if ( p -> next ) p -> next -> previous = p -> previous;
   count--;
   if ( ! count ) {
      currentListItem = (ListItem *)NULL;
      firstListItem = (ListItem *)NULL;
      holdListItem = (ListItem *)NULL;
      lastListItem = (ListItem *)NULL;
   }
   delete p;
   return TRUE;
   }
 
 
   template<class T> int List<T>::Delete(T *deleteItem) {
   if ( ! deleteItem ) {
      T *p = (T *)NULL;
      while ( p = GetNext(p) ) {
         Remove(p);
         delete p;
         p = (T *)NULL;
      }
      return TRUE;
   }
   Remove(deleteItem);
//??   deleteItem = (T *)NULL;
   return TRUE;
   }
 

   template<class T> int List<T>::Empty() {
   T *p = (T *)NULL;
   while ( p = GetNext(p) ) {
      Remove(p);
      p = (T *)NULL;
   }
   return TRUE;
   }
 

   template<class T> int List<T>::VectorDelete(T *deleteItem) {
   if ( deleteItem == (T *)NULL ) {
      T *p = (T *)NULL;
      while ( p = GetNext(p) ) {
         Remove(p);
         delete [] p;
         p = (T *)NULL;
      }
      return TRUE;
   }
   Remove(deleteItem);
//??   deleteItem = (T *)NULL;
   return TRUE;
   }
 
 
   template<class T> void List<T>::Rewind() {
   currentListItem = firstListItem;
   return;
   }


   template<class T> T *List<T>::First() {
   currentListItem = firstListItem;
   if ( currentListItem ) {
      return currentListItem -> member;
   }
   return (T *)NULL;
   }
 

   template<class T> T *List<T>::Last() {
   currentListItem = lastListItem;
   if ( currentListItem ) 
      return currentListItem -> member;
   return (T *)NULL;
   }


   template<class T> T *List<T>::Current() {
   if ( currentListItem ) 
      return currentListItem -> member;
   return (T *)NULL;
   }
 
 
   template<class T> long List<T>::SetPosition() {
   holdListItem = currentListItem;
   return TRUE;
   }
 
 
   template<class T> long List<T>::ResetPosition() {
   currentListItem = holdListItem;
   return TRUE;
   }
 
 
   template<class T> T *List<T>::Previous() {
   if ( currentListItem ) {
      currentListItem = currentListItem -> previous;
      if ( currentListItem ) 
         return currentListItem -> member;
   }
   return (T *)NULL;
   }
 
 
   template<class T> T *List<T>::Next() {
   if ( currentListItem ) {
      currentListItem = currentListItem -> next;
      if ( currentListItem ) 
         return currentListItem -> member;
   }
   return (T *)NULL;
   }


   template<class T> T *List<T>::GetFirst() { 
   if ( firstListItem ) 
      return firstListItem -> member;
   return (T *)NULL;
   }
 
 
   template<class T> T *List<T>::GetLast() { 
   ListItem *p = firstListItem;
   if ( ! p ) 
      return (T *)NULL;
   while ( p -> next ) p = p -> next;
   return p -> member;
   }
 
 
   template<class T> T *List<T>::GetNext(T *afterThisOne) {
   ListItem *p = firstListItem;
   if ( afterThisOne == (T *)NULL ) {
      if ( p ) 
         return p -> member;
      else
         return (T *)NULL;
   }
   while ( p ) {
      if ( p -> member == afterThisOne ) 
         if ( p -> next && p -> next -> member != afterThisOne ) 
            return p -> next -> member;
         else
            return (T *)NULL;
      p = p -> next;
      if ( !p ) return (T *)NULL;
   }
   return (T *)NULL;
   }
 
 
 
   template<class T> T *List<T>::GetPrevious(T *beforeThisOne) {
   if ( beforeThisOne == (T *)NULL) {
      currentListItem = lastListItem;
      if ( currentListItem )
         return currentListItem -> member;
      else
         return (T *)NULL;
   }
   ListItem *p = lastListItem;
   currentListItem = (ListItem *)NULL;
   while ( p ) {
      if ( p -> member = beforeThisOne ) {
         currentListItem = p -> previous;
         if ( p -> previous ) 
            return p -> previous -> member;
         else
            return (T *)NULL;
      }
      p = p -> previous;
      if ( ! p ) return (T *)NULL;
   }
   return (T *)NULL;
   }
 
 
   template<class T> T *List<T>::Get(char *name) {
   ListItem *p = firstListItem;
   while ( p ) {
      if ( p -> name[0] ) 
         if ( 0 == strcmp(p -> name,name) ) 
            return p -> member;
      p = p -> next;
   }
   return (T *)NULL;
   }
 
 
   template<class T> T *List<T>::Get(ULONG_PTR idNumber) {
   ListItem *p = firstListItem;
   while ( p ) {
      if ( p -> id == idNumber && ! ( -1 == p -> id ) ) return p -> member;
      p = p -> next;
   }
   return (T *)NULL;
   }
 
   template<class T> T *List<T>::Get(T *item) {
   ListItem *p = firstListItem;
   while ( p ) {
      if ( p -> member == item ) 
         return p -> member;
      p = p -> next;
   }
   return (T *)NULL;
   }
 
 
   template<class T> T *List<T>::GetByIndex(int itemIndex) {
   T *pt = GetFirst();
   for ( int k = 0; k < itemIndex; k++ ) {
      pt = GetNext(pt);
      if ( ! pt ) return pt;
   } 
   return pt;
   }
 
 
   template<class T> char *List<T>::Name(T *item,char *newName) {
   ListItem *p = firstListItem;
   while ( p ) {
      if ( p -> member == item ) {
         if ( newName ) 
            strncpy(p -> name,newName,NAME_SIZE);
         return p -> name;
      }
      p = p -> next;
   }
   return (char *)NULL;
   }
 
 
   template<class T> ULONG_PTR List<T>::ID(T *item,ULONG_PTR newIDNumber) {
   ListItem *p = firstListItem;
   while ( p ) {
      if ( p -> member == item ) {
         if ( ! ( -1 == newIDNumber ) ) 
            p -> id = newIDNumber;
         return p -> id;
      }
      p = p -> next;
   }
   return 0;
   }
 
 
   template<class T> int List<T>::Count(){
   return count;
   }
 
 
   template<class T> int List<T>::Clone(T *item,void *spaceToCloneTo) {
   if ( item == (T *)NULL ) return sizeof(ListItem);
   ListItem *p = firstListItem;
   while ( p ) {
      if ( p -> member == item ) {
         memcpy(spaceToCloneTo,p,sizeof(ListItem));
         return 0;
      }
      p = p -> next;
   }
   return -1;
   }
 
   template<class T> int List<T>::UnClone(void *spaceWithOldItem) {
   ListItem *p = (ListItem *)spaceWithOldItem;
   Add(p -> member,p -> name,p -> id);
   return TRUE;
   }
 
 
   template<class T> int List<T>::Find(T *item) {
   ListItem* p = firstListItem;
   while ( p ) {
      if ( p -> member == item ) return TRUE;
      p = p -> next;
   }
   return FALSE;
   }
 
 
   template<class T> int List<T>::IndexOf(T *item) {
   ListItem* p = firstListItem;
   int k = 0;
   while ( p ) {
      if ( p -> member == item ) return k;
      p = p -> next;
      k++;
   }
   return -1;
   }
 
 
   template<class T> int List<T>::LoadArray(T **itemArray) {
   ListItem* p = firstListItem;
   for ( int k = 0; k < count; k++ ) {
      itemArray[k] = p -> member;
      p = p -> next;
   }
   return TRUE;
   }
