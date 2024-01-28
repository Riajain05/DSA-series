#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;
    
    public:
    Node(int data1 , Node* next1 , Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

void print(Node* head){
    while(head!=NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* convertArray2DLL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

Node* removeHead(Node* head){
    if(head==NULL || head->next==NULL ){
        return NULL;
    }
     Node* prev = head;
     head= head->next;
     
     head->back = nullptr;
     prev->next=nullptr;
     
     delete prev;
     return head;
}

Node* removeTail(Node* head){
    if(head==NULL || head->next==NULL ){
        return NULL;
    }
    Node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* prev=tail->back;
    prev->next=nullptr;
    tail->back=nullptr;
    delete tail;
    return head;
}

Node* removeKthNode(Node* head,int k){
    if(head==NULL || head->next==NULL ){
        return NULL;
    }
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k)break;
        temp=temp->next;
    }
    Node* prev = temp->back;
    Node* front = temp->next;

    if(prev== NULL && front==NULL){
        return NULL;
    }
    else if(prev==NULL){
        return removeHead(head);
    }
    else if(front == NULL){
        return removeTail(head);
    }
    prev->next = front;
    front->back = prev;
    temp->next=nullptr;
    temp->back=nullptr;
    delete temp;
    return head;

}

Node* removeElement(Node* head,int el){
    if(head==NULL || head->next==NULL ){
        return NULL;
    }

    Node* temp=head;
    while(temp!=NULL){
   
        if(temp->data==el)break;
        temp=temp->next;
    }
    Node* prev = temp->back;
    Node* front = temp->next;

    if(prev== NULL && front==NULL){
        return NULL;
    }
    else if(prev==NULL){
        return removeHead(head);
    }
    else if(front == NULL){
        return removeTail(head);
    }
    prev->next = front;
    front->back = prev;
    temp->next=nullptr;
    temp->back=nullptr;
    delete temp;
    return head;

}

Node* insertHead(Node* head ,int val){
    Node* newNode = new Node(val,head,nullptr);
    head->back=newNode;

    return newNode;
}

Node* insertTail(Node* head,int val){

    Node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* tail = new Node(val,nullptr,temp);
    temp->next=tail;
    return head;
}

Node* insertBeforeKthElement(Node* head,int k,int val){
    if(k==1){
        return insertHead(head,val);
    }
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if(cnt==k)break;
        temp=temp->next;
    }
    Node* prev = temp->back;
    Node* newNode= new Node(val,temp,prev);
    prev->next=newNode;
    temp->back=newNode;
    return head;
}
int main(){
    vector<int> arr = {2,4,6,7,8};
    Node* head = convertArray2DLL(arr);
   
    //head=removeHead(head);
    //head=removeTail(head);
    //head=removeKthNode(head,3);
    //head= removeElement(head,8);

    //head=insertHead(head,100);
    //head=insertTail(head,100);
    head=insertBeforeKthElement(head,4,100);
    print(head);
    
    return 0;
    
}