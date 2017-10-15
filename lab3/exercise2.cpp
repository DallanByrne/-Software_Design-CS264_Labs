#include <iostream>
using namespace std;

struct node{

    double data;    //holds value
    node* next;     //Points to next node
    node* prev
};

node* head;
node* tail; //tail of list
node* n;


void PrintReverse(node* tail);


int main(){

    n = new node;   //New node

    double x;
    cin >> x;
    n->data=x;
    n->prev = NULL;
    head = n;
    tail = n;

    if(x == -1){
        tail->next = NULL;
    }

    while(x != -1){
        cin >> x;
        n= new node;

        n->data = x;
        n->prev = tail;
        tail->next = n;
        tail = n;

        if(x == -1){
            tail->next = NULL;
        }

    }
    PrintReverse(tail);

    return 0;
}

void PrintReverse(node* tail)[

    node* temp = tail;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
]