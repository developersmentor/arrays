/********************************************************
  Start from the first element of list[] and compare x 
  with each element of list[].
    - If x matches with an element, return the index.
    - If x doesn’t match with any of elements, return -1
********************************************************/

int linear_search(int list[], int n, int x)
{
   int i;
   for (i = 0; i < n; i++)
   {
      if (list[i] == x)
         return i;
   }
   return -1;
}


/********************************************************
  Time Complexity: O(n)
********************************************************/
