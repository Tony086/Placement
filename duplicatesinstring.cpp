#include<bits/stdc++.h>
using namespace std;
void printDuplicates(string str){
    int n=str.length();

    sort(str.begin(),str.end());
    for(int i=0;i<n;i++){
        int count=1;
        while(i<n-1 && str[i]==str[i+1]){
            count++;
            i++;
        }
        if(count>1){
            cout << str[i] << ", count = " << count << endl;
        }
    }
}
int main()
{
   string str = "test string";
    printDuplicates(str);
    return 0; 
}