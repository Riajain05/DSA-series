#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    public:
    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArray2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head){
    while(head!=NULL){
        cout << head->data <<" ";
        head = head->next;
    }
    cout << endl;
}

Node* insertHead(Node* head , int val){
    Node* temp = new Node(val,head);
    return temp;
}

Node* insertTail(Node* head , int val){
    
    if(head==NULL) {
        Node* head= new Node(val);
        return head;
    }
    Node* temp = head;
    
    while(temp->next!=NULL){
        temp=temp->next;
    }
    
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;

}

Node* insertKthPosition(Node* head , int el ,int k){
    if(head==NULL){
        if(k==1){
            return new Node(el);
        }
    }
    if(k==1){
        Node* temp=new Node(el,head);
        return temp;
    }
    int cnt=0;
    Node* temp = head;
    while(temp!=NULL){
        cnt++;
        if(cnt == (k-1)){
           Node* newNode = new Node(el);
           newNode->next=temp->next;
           temp->next=newNode;
           break;
        }
        temp=temp->next;
    }
    return head;

}

Node* insertBeforeValue(Node* head , int el ,int val){
    if(head==NULL){
        return NULL;
    }
    if(head->data==val){
        Node* temp=new Node(el,head);
        return temp;
    }
 
    Node* temp = head;
    while(temp->next!=NULL){
    
        if(temp->next->data==val){
           Node* newNode = new Node(el);
           newNode->next=temp->next;
           temp->next=newNode;
           break;
        }
        temp=temp->next;
    }
    return head;

}

int main(){
  
    vector<int> arr={2,3,4,5,6};
    Node* head = convertArray2LL(arr);
    
    //head=insertHead(head,100);
    //print(head);

    //head=insertTail(head,100);
    //print(head);

     //head = insertKthPosition(head,34,1);
     //print (head);

     head = insertBeforeValue(head ,23,2);
     print (head);
    return 0;
}