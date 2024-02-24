//! Reverse a string using stack
// #include <bits/stdc++.h>
// using namespace std;

// void reverseString(string s){
//     stack<char>st1;
//     for(int i = 0;i<s.length();i++){
//         char k = s[i];
//         st1.push(k);
//     }

//     while(!st1.empty()){
//         cout<<st1.top();
//         st1.pop();
//     }
// }

// int main()
// {
//     string s;
//     cin>>s;

//     reverseString(s);
    
    
// }



//!Reverse Individual word of  a sentence using stack

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

    stack<char>res;
    string s;
    cout<<"Enter The String : ";
    getline(cin,s);

    for(auto x : s){
        cout<<x<<" ";
        res.push(x);
    }
    return 0;
}

