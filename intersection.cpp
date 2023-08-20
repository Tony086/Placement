#include<bits/stdc++.h>
using namespace std; 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	int i=0,j=0;
	vector<int> ans;
	while(i<n && j<m){
		if(arr1[i]==arr2[j]){
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr1[i]<arr2[j]){
			i++;
		}
		else{
			j++;
		}
	}
	return ans;
}
int main()
{
    vector<int> arr1={1,2,2,2,3,4};
    vector<int> arr2={2,2,3,3};
    vector<int> a=findArrayIntersection(arr1,6,arr2,4);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}