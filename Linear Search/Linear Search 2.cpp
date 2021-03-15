#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    ll sum = 0;
    ll ele = 0;
    ll if_negative = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            sum += arr[i];
            ele++;
        }
        else
        {
            if_negative = max(if_negative, arr[i]);
        }
    }
    if(ele)
        cout<<sum<<" "<<ele<<endl;
    else
        cout<<if_negative<<" "<<1<<endl;
}
