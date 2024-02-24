#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,int> p = {1,2};
    cout<<p.first<<" "<<p.second<<endl;
    
    pair<int,pair<int,int>> a ={1,{2,3}};
    cout<<a.first<<" "<<a.second.first<<" "<<a.second.second<<endl;

    pair<int,int> arr[]={{1,2},{2,3},{3,4}};
    cout<<arr[2].second;



    return 0;
}
