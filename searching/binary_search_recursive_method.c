/***********************************************************
  Recursive method for binary search.
  Binary search assumes that the list is already sorted.

  Compare x with the middle element.
    - If x matches with middle element, return the mid index.
    - Else If x is greater than the mid element, then x can 
      be present only in right half sublist after the mid 
      element. So recur for right half sublist only.
    - Else (x is smaller) recur for the left half sublist 
      only.
  When element is not found in the list, return -1
***********************************************************/

int binarySearch(int list[], int l, int r, int x)
{
    if (r >= l)
    {
       int mid = l + (r - l)/2;

       if (list[mid] == x)  
           return mid;

       if (list[mid] > x) 
           return binarySearch(list, l, mid-1, x);

       return binarySearch(list, mid+1, r, x);
    }

    return -1;
}
 

/**********************************************************
    Time Complexity:  O(Log n)
    Space Complexity: O(Log n)
**********************************************************/
