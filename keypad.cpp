#include<bits/stdc++.h>
using namespace std;
void solve(string digits,string output,int index,vector<string> &ans,string mapping[]){

    if(index>=digits.length())
    {
        ans.push_back(output);
        return;
    }
    int number=digits[index]-'0';
    string value=mapping[number];
    for(int i=0;i<value.length();i++)
    {
        output.push_back(value[i]);
        solve(digits,output,index+1,ans,mapping);
        output.pop_back();
    }
}
vector<string>lettercombination(string digits){

    vector<string>ans;
    string output;
    int index=0;
    string mapping[10]={"","","abc", "def", "ghi", "jkl","mno","pqrs","tuv","wxyz"};
    solve(digits,output,index,ans,mapping);
    return ans;
}
int main()
{
    string num = {"23"};
    vector<string>res = lettercombination(num);
    // Print result
    for (int i = 0; i < res.size(); i++) {
        cout<<res[i];
        cout << endl;
    }
 
    return 0;
}