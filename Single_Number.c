
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(auto it:arr)
    {
        mp[it]++;
    }
    for(auto x:mp)
    {
        if (x.second==1)
        {
            cout<<x.first;
        }
    }
}
