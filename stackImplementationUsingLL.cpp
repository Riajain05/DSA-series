#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class Stack{
    Node* head;
    int size;
    
    public:
    
    Stack(){
        head=NULL;
        size=0;
    }
    
    void push(int d){
        Node* newNode=new Node();
        newNode->data=d;
        newNode->next=head;
        head=newNode;
        size++;

        cout << "element " << d << " pushed into the stack" << endl;
    }
    
    int pop(){
        if(head==NULL){
            cout << "stack underflow"<< endl;
            return -1;
        }
        int val=head->data;
        Node* temp = head;
        head= temp->next;
        temp->next=NULL;
        delete temp;
        size--;
        cout << "element poped " <<val <<endl;
        return val;

    }
    
    int Size(){
        if(head==NULL)return 0;
        cout << "stack size is "<< size << endl;
        return size;
    }
    
    bool isEmpty(){
         if(head==NULL){
            cout << "stack is empty"<< endl;
             return true;
         }
         else {
            cout <<"stack is not empty" << endl;
            return false;
    }
    }
    
    int top(){
          if(head==NULL) 
          {
            cout << "no top element exist ,stack if empty" << endl;
            return -1;
          }
          else{
            cout << "top element is "<< head->data << endl;
            return head->data;
          }
    }
 };
 
 int main(){
    
    Stack st;
    st.push(2);
    st.push(3);
    st.Size();
    st.isEmpty();
    int popEle = st.pop();
    cout << popEle;
    popEle = st.pop();
    cout << popEle;
    popEle = st.pop();
    cout << popEle;


    return 0;
 }