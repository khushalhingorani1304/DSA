#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int a = 1;
    v.push_back(a);
    // cout<<v[0]<<endl;

    v[0]++;
    // cout<<v[0]<<endl;
    // cout<<a<<endl;

    int b = 2;
    v.emplace_back(b);
    // cout<<v[1]<<endl;

    v[1]++;
    // cout<<v[1]<<endl;
    // cout<<b<<endl;

    vector<pair<int,int>> v1;
    v1.push_back({1,2});
    v1.emplace_back(3,4);
    // cout<<v1[0].first;
    // cout<<v1[0].second;
    // cout<<v1[1].first;
    // cout<<v1[1].second;


    vector<int> v2(10,6);
    // for(int i = 0;i<10;i++){
    //     cout<<v2[i]<<endl;
    // }

    vector<int> v3(10);
    // for(int i = 0;i<10;i++){
    //     cout<<v3[i]<<endl;
    // }

    vector<int>v4(v2);
    // for(int i = 0;i<10;i++){
    //     cout<<v4[i]<<endl;
    // }


// ! iterator ----------------------------------------------------------------------------
    
//v.begin()
    // vector<int> vec1;
    // vec1.push_back(5);
    // vec1.push_back(4);
    // vec1.push_back(3);
    // vec1.push_back(2);
    // vec1.push_back(1);
    // vector<int>::iterator it =  vec1.begin();
    // cout<<*(it)<<endl;
    // it++;
    // cout<<*(it)<<endl;
    // it++;
    // cout<<*(it)<<endl;
    // it++;
    // cout<<*(it)<<endl;
    // it++;
    // cout<<*(it)<<endl;
    

//!v.end()

    // vector<int> vec2;
    // vec2.push_back(5);
    // vec2.push_back(4);
    // vec2.push_back(3);
    // vec2.push_back(2);
    // vec2.push_back(1);
    // vector<int>::iterator x = vec2.end();
    // x--;
    // cout<<*(x)<<endl;
    // x--;
    // cout<<*(x)<<endl;
    // x--;
    // cout<<*(x)<<endl;
    // x--;
    // cout<<*(x)<<endl;
    // x--;
    // cout<<*(x)<<endl;


//! v.rbegin()

    // vector<int> vec3;
    // vec3.push_back(5);
    // vec3.push_back(4);
    // vec3.push_back(3);
    // vec3.push_back(2);
    // vec3.push_back(1);
    // vector<int>::reverse_iterator x = vec3.rbegin();
    // cout<<*(x)<<endl;
    // x++;
    // cout<<*(x)<<endl;
    // x++;
    // cout<<*(x)<<endl;
    // x++;
    // cout<<*(x)<<endl;
    // x++;
    // cout<<*(x)<<endl;

//! v.end()

    // vector<int> vec4;
    // vec4.push_back(5);
    // vec4.push_back(4);
    // vec4.push_back(3);
    // vec4.push_back(2);
    // vec4.push_back(1);
    // vector<int>::reverse_iterator x = vec4.rend();
    // x--;
    // cout<<*(x)<<endl;
    // x--;
    // cout<<*(x)<<endl;
    // x--;
    // cout<<*(x)<<endl;
    // x--;
    // cout<<*(x)<<endl;
    // x--;
    // cout<<*(x)<<endl;




//!  AUTO KEYWORD

// vector<int> v69(5,69);

// for(auto it = v69.begin();it != v69.end();it++){
//     cout<<*(it)<<endl;
// }



//! For each loop

// int i = 1;
// for(auto x : v69){
//     cout<<"X"<<i<<"is"<<" "<<x<<endl;
//     i++;
// }





//! DELETING ELEMENTS


// vector<int> ve;
// ve.push_back(1);
// ve.push_back(2);
// ve.push_back(3);
// ve.push_back(4);
// ve.push_back(5);

// for(auto x : ve){
//     cout<<x<<endl;
// }

// ve.erase(ve.begin()+2);

// cout<<"after erasing"<<endl;

// for(auto x : ve){
//     cout<<x<<endl;
// }

// cout<<"after erasing"<<endl;

// ve.erase(ve.begin(),ve.end()-2);

// for(auto x : ve){
//     cout<<x<<endl;
// }



// ! for inserting elements;

// vector<int> ve;
// ve.push_back(1);
// ve.push_back(2);
// ve.push_back(3);
// ve.push_back(4);
// ve.push_back(5);


// for(auto x : ve){
//     cout<<x<<endl;
// }

// ve.insert(v.begin(),99);

// for(auto x : ve){
//     cout<<x<<endl;
// }



// ! size

// vector<int> ve;
// ve.push_back(1);
// ve.push_back(2);
// ve.push_back(3);
// ve.push_back(4);
// ve.push_back(5);

// cout<<ve.size();


// !  POP_Back ;

// vector<int> ve;
// ve.push_back(1);
// ve.push_back(2);
// ve.push_back(3);
// ve.push_back(4);
// ve.push_back(5);

// for(auto x : ve){
//     cout<<x<<endl;
// }


// ve.pop_back();

// for(auto x : ve){
//     cout<<x<<endl;
// }



// ! SWAP

// vector<int> ve1;
// ve1.push_back(1);
// ve1.push_back(2);
// ve1.push_back(3);
// ve1.push_back(4);
// ve1.push_back(5);

// vector<int> ve2;
// ve2.push_back(6);
// ve2.push_back(7);
// ve2.push_back(8);
// ve2.push_back(9);
// ve2.push_back(10);

// ve1.swap(ve2);


// for(auto x : ve1){
//     cout<<x<<endl;
// }


    return 0;
}


