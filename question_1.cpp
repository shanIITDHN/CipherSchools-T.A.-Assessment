#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans[n];
    for(int i=1;i<=n/2;i++)
    {
        ans[2*i-2]=i;
        ans[2*i-1]=-1*i;
    }
    if(n%2==1)
    ans[n-1]=0;
    
    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
}