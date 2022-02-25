#include<stdio.h>
#include<stdlib.h>
class LinkedList{
    private:
        struct Node{
            int data;
            struct Node* next;
        };
        int size;
        struct Node* head;
    public:
        LinkedList(){
            head = NULL;
            this->size = 0;
        }
        int size(){
            return this->size;
        }
        bool isEmpty(){
            return (size == 0);
        }
        void insert(int elem){
            struct Node* newNode = (Node*)malloc(sizeof(struct Node));
            newNode->data = elem;
            newNode->next = NULL;
            Node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
            this->size++;
        }
        void print(){
            struct Node* temp = head;
            while (temp != NULL)
            {
                printf("%d ", temp->data);
                temp = temp->next;
            }
            printf("\n");
        }
};

int main(){
    LinkedList list;
    list.insert(1);
    list.print();
    list.insert(2);
    list.print();
}