#include<bits/stdc++.h>
using namespace std;
void selectionsort(int n,vector<int> &arr){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}
int main()
{
    vector<int>arr={10,1,7,4,8,2,11};
    int n=7;
    selectionsort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}