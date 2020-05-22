Link to the problem: https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1 


int detectloop(Node *head) {
Node* temp=head;
Node* temp1=head;
    while(temp && temp->next && temp1)
    {
       temp=temp->next->next;
       temp1=temp1->next;
       if(temp==temp1)
       return 1;
    }

    return 0;
}
