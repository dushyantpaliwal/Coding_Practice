Node* reverseDLL(Node* head)
{   
    // Write your code here 
    Node*temp = head;
    Node*prev2 = NULL;
    Node*curr = head;
    while(temp->next != NULL){
        curr = temp->next;
        temp->next = prev2;
        temp->prev = curr;
        //curr->next = temp;
        prev2 =temp;
        temp = curr;
    }  
    temp->next = prev2;
    return temp;

}
