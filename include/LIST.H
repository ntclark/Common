
#pragma once

#include "general.h"

   template<class T> class List {
   private:
      struct ListItem {
         char name[NAME_SIZE];
         ULONG_PTR id;
         struct ListItem *previous,*next;
         T *member;
         public:
            ListItem() {
               *name    = '\0';
               id       = 0;
               previous = (ListItem *)NULL;
               next     = (ListItem *)NULL;
               member   = (T *)NULL;
            }
      } *firstListItem,*lastListItem,*currentListItem,*holdListItem;
      int count;
 
   public:
 
      List();
      virtual ~List();

      virtual int Add(T *newItem,char *itemName = (char *)NULL,ULONG_PTR idNumber = -1);

      virtual int Remove(T *removeItem);
      virtual int Delete(T *deleteItem = (T *)NULL);
      virtual int Remove(int zeroBasedIndexOfItem);
      virtual int VectorDelete(T *deleteItem = (T *)NULL);
      virtual int Empty();

      // The following methods access the list by keeping track of what is current:

      void Rewind();

      long SetPosition();
      long ResetPosition();

      T *First();
      T *Last();
      T *Current();
      T *Previous();
      T *Next();

      // The following methods access the list relative to the passed in list member

      T *GetFirst();
      T *GetLast();
      T *GetNext(T *afterThisOne);
      T *GetPrevious(T *beforeThisOne);
      T *Get(char *itemName);
      T *Get(ULONG_PTR idNumber);
      T *Get(T* item);
      T *GetByIndex(int itemIndex);

      int Clone(T *memberToClone = NULL,void *spaceToPutIt = NULL);
      int UnClone(void *spaceWithOldList);
      char *Name(T *item,char *newName = (char *)NULL);
      ULONG_PTR ID(T *item,ULONG_PTR idNumber = -1);
      int Count();
      int Find(T *item);
      int IndexOf(T* ofItem);
      int LoadArray(T** itemArray);
 
   };
