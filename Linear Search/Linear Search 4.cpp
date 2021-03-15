#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i = 0;
        int j = s.length()-1;
        int n = s.length();
        bool flag = true;
        for(i=0;i<n;i++){
            if(s[i]=='1')
                break;
        }
        for(j;j>=0;j--){
            if(s[j]=='1')
                break;
        }
        if(i==n && j==-1){
            cout<<"NO"<<endl;
            continue;}
        for(int x =i;x<=j;x++){
            if(s[x]=='0')
                flag = false;
        }

        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
