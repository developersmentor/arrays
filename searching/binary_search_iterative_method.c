/***********************************************************
  Iterative method for binary search.
  Binary search assumes that the list is already sorted.

  Compare x with the middle element.
    - If x matches with middle element, return the mid index.
    - Else If x is greater than the mid element, then x can 
      be present only in right half sublist after the mid 
      element. So set the left to mid+1, for next iteration.
    - Else (x is smaller) set the right to mid-1 for the 
      next iteration, as x can only be in left sublist.
  When element is not found in the list, return -1
***********************************************************/

int binarySearch(int list[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r-l)/2;

        if (list[m] == x)
            return m;

        if (list[m] < x)
            l = m + 1;

        else
            r = m - 1;
    }
    return -1;
}
 

/**********************************************************
    Time Complexity:  T(n) = T(n/2) + c
    Space Complexity: O(1)
**********************************************************/
