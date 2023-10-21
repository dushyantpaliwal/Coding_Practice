#include <bits/stdc++.h> 
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node* prev= NULL;
        Node* curr = head;
        Node*temp =NULL;
        while(curr->next != NULL){
            temp= curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
            
            
        }
        curr->next = prev;
        return curr;
        
    }
    
};
