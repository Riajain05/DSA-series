 #include<bits/stdc++.h>

using namespace std;
class Stack {
  int size;
  int * arr;
  int top;
  public:
    Stack() {
      top = -1;
      size = 5;
      arr = new int[size];
    }
  void push(int x) {
    if(top==size-1){
      cout<< "stack overflow" << endl;
      return;
    }
    top++;
    arr[top] = x;
  }
  int pop() {
    if(top==-1){
      cout << "stack underflow" << endl;
      return -1;
    }
    int x = arr[top];
    top--;
    return x;
  }
  int Top() {
    if(top==-1) return -1;
    return arr[top];
  }
  int Size() {
    if(top==-1) return -1;
    return top + 1;
  }
  bool isempty(){
    if(top==-1)return 1;
    else return 0;
  }
};
int main() {

  Stack s;
  cout << s.isempty() << endl;
  cout << s.Size() << endl;
  s.push(6);
  s.push(3);
  s.push(7);
  s.push(8);
  s.push(1);
  s.push(45);
  cout << "Top of stack is before deleting any element " << s.Top() << endl;
  cout << "Size of stack before deleting any element " << s.Size() << endl;
  cout << "The element deleted is " << s.pop() << endl;
  cout << "Size of stack after deleting an element " << s.Size() << endl;
  cout << "Top of stack after deleting an element " << s.Top() << endl;
  cout << s.isempty();
  return 0;
}