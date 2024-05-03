// Cách 1: Dùng vòng lặp
void printLinkedList(SinglyLinkedListNode* head){
    while(head){
        cout<<head->data<<endl;
        head=head->next;
    }
}

//Cách 2: Dùng đệ quy
void printLinkedList(SinglyLinkedListNode* head){
    if(head == nullptr){
        return;
    }
    cout<<head->data<<endl;
    printLinkedList(head->next);
}
