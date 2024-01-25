#include <iostream>
using namespace std;
string toLowerCase(string s){
    string temp;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='a' &&  s[i]<='z'){
            temp.push_back(s[i]);
        }
        else{
            s[i]=s[i]-'A'+'a';
            temp.push_back(s[i]);
        }
    }
    return temp;
}
string toUpperCase(string s){
    string temp;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='A' &&  s[i]<='Z'){
            temp.push_back(s[i]);
        }
        else{
            s[i]=s[i]-'a'+'A';
            temp.push_back(s[i]);
        }
    }
    return temp;
}
int main(){
    string name;
    cout << "enter your name ";
    cin >> name;
    cout << "lower case "<< toLowerCase(name) << endl;
    cout << "upper case " << toUpperCase(name);
    return 0;
}