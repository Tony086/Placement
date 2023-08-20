#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> arr,int n,int m ,int mid){
    int scount=1;
    int psum=0;
    for(int i=0;i<n;i++){
        if(psum + arr[i]<=mid){
            psum +=arr[i];
        }
        else{
            scount++;
            }
            if(scount >m || arr[i]>mid){
                return false;
            psum =arr[i];
        }
        if(scount > m){
            return false;
        }
    }
    return true;
}
int allocatedBooks(vector<int> arr,int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
    
}
int main()
{
    vector<int>arr ={10,20,30,40};
    int n=4;
    int m=2;
    cout<< allocatedBooks(arr,n,m);
}