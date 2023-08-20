#include<bits/stdc++.h>
using namespace std;
void bubblesort(int n,vector<int> &arr){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()
{
    vector<int>arr={10,1,7,4,8,2,11};
    int n=7;
    bubblesort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}