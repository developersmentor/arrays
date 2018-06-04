/**********************************************************************
  Initialize three pointers prev as NULL, curr as head and next as NULL.
  Iterate trough the linked list. In loop, do following.

  // Before changing next of current, store next node
  next = curr->next

  // This is where actual reversing happens
  curr->next = prev

  // Move prev and curr one step forward
  prev = curr
  curr = next
***********************************************************************/

/* Function to reverse the linked list */
static void reverse(struct Node** head)
{
        struct Node* prev   = NULL;
        struct Node* current = *head;
        struct Node* next = NULL;
        while (current != NULL)
        {   
                next  = current->next;  
                current->next = prev;   
                prev = current;
                current = next;
        }   
        *head = prev;
}

/************************************
  Time Complexity: O(n)
  Space Complexity: O(1)
************************************/
