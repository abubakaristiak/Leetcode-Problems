//TODO: https://leetcode.com/problems/design-linked-list/
/*
class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }

};
class MyLinkedList {
public:
    Node* head = NULL;
    MyLinkedList() {
    }
    
    int get(int index) {
        Node* temp = head;
        while(index>0 && temp != NULL){
            temp = temp->next;
            index--;
        }
        if(temp == NULL) return -1;
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node* tmp = head;
        while(tmp->next != NULL){
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
    
    void addAtIndex(int index, int val) {
        if(index == 0){
            addAtHead(val);
            return;
        }
        Node* tmp = head;
        for(int i=0; i<index-1 && tmp!=NULL; i++){
            tmp = tmp->next;
        }
        if(tmp == NULL) return;
        Node* newNode = new Node(val);
        newNode->next = tmp->next;
        tmp->next = newNode;
    }
    
    void deleteAtIndex(int index) {
        Node* tmp = head;
        if(index==0 && head != NULL){
            Node* deleteNode = head;
            head = head->next;
            delete deleteNode;
            return;
        }
        for(int i=0; i<index-1; i++){
            tmp = tmp->next;
        }
        if(tmp == NULL || tmp->next == NULL) return;
        Node* deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
    }
};
*/

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */