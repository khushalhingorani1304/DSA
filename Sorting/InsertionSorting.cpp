#include <bits/stdc++.h>
using namespace std;


void insertion_sort(int arr[],int n){
    for(int i = 1;i<n;i++){
        while(i>0 && arr[i]<arr[i-1]){
            swap(arr[i],arr[i-1]);
            i--;
        }
    }
}


int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    insertion_sort(arr,n);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
