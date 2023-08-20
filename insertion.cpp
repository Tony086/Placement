#include<bits/stdc++.h>
using namespace std;
  void insertionsort(int n,vector<int> &arr){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                //shift
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
  } 
int main()
{
    vector<int>arr={10,1,7,4,8,2,11};
    int n=7;
    insertionsort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}