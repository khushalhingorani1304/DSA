#include <bits/stdc++.h>
using namespace std ;



void merge(int arr[],int low,int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){

        if(arr[left]<=arr[right]){
            temp.emplace_back(arr[left]);
            left++;
        }
        else{
            temp.emplace_back(arr[right]);
            right++;
        }

    }

    while(left<=mid){
        temp.emplace_back(arr[left]);
        left++;
    }

    while(right<=high){
        temp.emplace_back(arr[right]);
    }

    for(int i = low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}


void ms(int arr[],int low,int high){
    
    if(low == high){return;}
    int mid = (low+high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);
}


void MergeSort(int arr[],int n){
    ms(arr,0,n-1);
}




int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }    

    MergeSort(arr,n);

    for(int i = 0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
