#include<iostream>
using namespace std;
int findPeak(int arr[], int n) {

    int s =0, e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {
        if(arr[mid] < arr[mid+1]){
            s = mid+1; 
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return arr[s];
}
int main()
{
    int arr[4]={3,4,5,1};
    cout<<"the pesk of the mountain is"<<findPeak(arr,4);
}
