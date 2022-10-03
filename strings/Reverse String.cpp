#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<"Orignal string is "<<s<<"\n";
    int n=s.length();
    for(int i=0;i<n/2;i++){
        swap(s[i],s[n-i-1]);
    }
    cout<<"Reversed string is "<<s;
}
