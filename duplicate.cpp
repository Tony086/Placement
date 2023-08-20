#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    for(int j=1;j<arr.size();j++){
        ans=ans^j;
    }
	return ans;

}

int main()
{
    vector<int> arr={4,2,1,3,1};
    int a= findDuplicate(arr);
    cout<<a;
}