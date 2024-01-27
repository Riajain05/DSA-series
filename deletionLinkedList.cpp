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

Node* deleteHead(Node* head){
    if(head==NULL)return head;
    Node* temp=head;
    head = head->next;
    delete temp; // we can also write as--free temp;
    return head;
}

Node* deleteTail(Node* head){
    //list is empty or it contain only one element
    if(head==nullptr || head->next ==nullptr)return nullptr;
    Node* temp=head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* deleteKthNode(Node* head , int k){
    if(head==NULL)return head;
    
    else if(k==1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    else{
    int cnt=0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            delete temp;
            break;
           
        }
        prev=temp;
        temp= temp->next;


    }
    return head;
    }
}

Node* deleteElement(Node* head , int el){
    if(head==NULL)return head;
    
    else if(head->data==el){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    else{
 
    Node* temp = head;
    Node* prev = NULL;
    while(temp!=NULL){
    
        if(temp->data==el){
            prev->next=prev->next->next;
            delete temp;
            break;
           
        }
        prev=temp;
        temp= temp->next;


    }
    return head;
    }
}
int main(){
    vector<int> arr={2,4,5,7,8};
    Node* head = convertArray2LL(arr);
   
   //head = deleteHead(head);
   // print (head);
   
    //head = deleteTail(head);
    //print (head);

    //head = deleteKthNode(head,4);
    //print (head);

    head = deleteElement(head,8);
    print (head);

}