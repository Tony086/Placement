#include<bits/stdc++.h>
using namespace std;
int pivot(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while (s<e)
    {
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int binarySearch(int arr[], int s, int e, int key) {

    int start = s;
    int end = e;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}

int main()
{
    int arr[5]={7,9,1,2,3};
    int n=5;
    int k=2;
    int p=pivot(arr,n);
    cout<<p;
    if(k>=arr[p] && k<=arr[n-1]){
        cout<<"the emelent"<< binarySearch(arr,p,n-1,k);
    }
    else{
         cout<<"the emelent"<< binarySearch(arr,0,p-1,k);
    }
    
}