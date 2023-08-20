#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int s,int l)
{
    int mid=(s+l)/2;
   int len1=mid-s+1 ;
   int len2=l-mid;
   int *first=new int[len1];
   int *second=new int [len2];

   int mainArrayIndex=s;
   for(int i=0;i<len1;i++)
   {
    first[i]=arr[mainArrayIndex++];
   }
   for(int i=0;i<len2;i++)
   {
    second[i]=arr[mainArrayIndex++];
   }
   int index1=0;
   int index2=0;
   mainArrayIndex=s;
   while(index1<len1&&index2<len2)
   {
        if(first[index1]<second[index2])
        {
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
            arr[mainArrayIndex++]=second[index2++];
        }
   }
   while(index1<len1)
   {
    arr[mainArrayIndex++]=first[index1++];
   }
   while(index2<len2)
   {
    arr[mainArrayIndex++]=second[index2++];
   }
   delete []first;
   delete []second;
}
 void mergesort(int *arr, int s,int l)
 {
    if(s>=l)
    {
    return;
    }
    int mid=(s+l)/2;

    mergesort(arr,s,mid);
    mergesort(arr,mid+1,l);
    merge(arr,s,l);

 }
 int main() {

    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    mergesort(arr, 0, n-1);

    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}