#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n; //input n
    vector<int>prices;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;   //input price of each element
        prices.push_back(val);
    }
    int money,atleast,freq=0; 
    cin>>money>>atleast;    //input money has and number robot says
    for(int i=0;i<prices.size();i++)
    {
        if(money%prices[i]==0)
        freq++;
    }
    if(freq!=atleast)
    cout<<"Wrong\n";
    else
    cout<<"Right\n";
}