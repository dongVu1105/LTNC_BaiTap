 //Cách 1: Dùng vòng lặp
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data){
    SinglyLinkedListNode* temp = head;
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    if(head == nullptr){
        head=newNode;
    } else {
        while(temp->next != nullptr){
            temp=temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

//Cách 2: Dùng đệ quy
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data){
    if(head == nullptr){
        return new SinglyLinkedListNode(data);
    } else if(head->next==nullptr) {
        head->next = new SinglyLinkedListNode(data);
    } else {
        head->next = insertNodeAtTail(head->next, data);
    }
    return head;
}
