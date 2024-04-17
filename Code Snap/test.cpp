void deleteAtMiddle(node* &head,int element){

    node* copy = head;

    for(int i = 0;i<element;i++){
        copy = copy->next;
    }

    node* prev = copy->next;

    copy = copy->next;

    node* curr = copy-> next;

    prev->next = curr->next;
}