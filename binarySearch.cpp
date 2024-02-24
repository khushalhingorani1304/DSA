#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }

        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end=mid-1;
        }
        
        mid = start + (end-start)/2;

    }

    return -1;
}


int main(int argc, char const *argv[])
{
    int even[6]={1,5,6,14,27,34};
    int odd[5]={1,3,5,6,11};

    int index = binarySearch(odd,5,5);
    if(index == -1){
        cout<<"Element Not in The Array";
    }
    else{
        cout<<"Element found at index: "<<index; 
    }


    return 0;
}
