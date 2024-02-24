#include <bits/stdc++.h>
using namespace std;


void SelectionSort(int arr[],int n){

    for(int i=0;i<=n-2;i++){
        int minimum = i;
        for(int j=i;j<=n-1;j++){
            if(arr[minimum]>arr[j]){
                minimum = j;
            }
        }
        int temp = arr[minimum];
        arr[minimum]=arr[i];
        arr[i]=temp;
    }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    SelectionSort(arr,n);


    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    
    
    return 0;
}





