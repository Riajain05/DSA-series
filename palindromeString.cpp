#include <iostream>
using namespace std;

bool checkPalindrome(string s){
    int low=0;
    int high = s.length()-1;
    while(low<=high){
        if(s[low]==s[high]){
            low++;
            high--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    cout << "enter string ";
    cin >> s;
    bool result = checkPalindrome(s);
    if(result){
        cout << "string is palindrome";
    }
    else{
        cout << "string is not palindrome ";
    }
    return 0;
}