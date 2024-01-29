#ifndef UNSORTEDLIST_H
#define UNSORTEDLIST_H

const int MAX_ITEMS = 5;

class UnsortedList
{
public:
  UnsortedList()
  {
      length = 0;
      iterPos = 0;
  }
  // Constructor
  
  void MakeEmpty()
  {
      length = 0;
  }
  // Function: Returns the list to the empty state.
  // Post:  List is empty.
  
  bool IsFull() const
  {
      if(length == MAX_ITEMS)
          returns true;
      else
          return false;
  }
  // Function:  Determines whether list is full.
  // Pre:  List has been initialized.
  // Post: Function value = (list is full)

  int GetLength() const
  {
      return length;
  }
  // Function: Determines the number of elements in list.
  // Pre:  List has been initialized.
  // Post: Function value = number of elements in list

  bool Contains(int someItem)
  {
      for(int i = 0; i < length; i++)
      {
          if(arr[i] == someItem)
              return true;
      }
      return false;
  }
  // Function: Determines if someItem is in the list.
  // Pre:  List has been initialized.
  // Post: If there is an element someItem whose key matches
  //       item's key, then the function returns true.
  // 	     otherwise it will return false. List is unchanged.

  void AddItem(int item)
  {
      arr[length] = item;
      length++;
  }
  // Function: Adds item to list.
  // Pre:  List has been initialized.
  //       List is not full.
  // Post: item is in list.

  void DeleteItem(int item)
  {
      for(int i = 0; i < length; i++)
      {
          if (arr[i] == item) {
              arr[i] = arr[length - 1];
              length--;
          }
      }
  }
  // Function: Deletes the first element whose key matches item's key.
  // Pre:  ???
  // Post: ???    

  void ResetIterator()
  {
      iterPos = 0;
  }
  // Function: Initializes current position for an iteration through the list.
  // Pre:  List has been initialized.
  // Post: Current position is prior to list.

  int GetNextItem()
  {
      int nextItem = arr[iterPos];
      iterPos++;
      return nextItem;
      //or return arr[iterPos++]; which is fine
  }
  // Function: Gets the next element in list.
  // Pre:  List has been initialized and has not been changed since last call.
  //       Current position is defined.
  //       Element at current position is not last in list.
  //	     
  // Post: Current position is updated to next position.
  //       item is a copy of element at current position.

private:
  int length;
  int arr[MAX_ITEMS];
  int iterPos;
};

#endif
