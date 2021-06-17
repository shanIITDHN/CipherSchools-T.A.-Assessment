#include<bits/stdc++.h>
using namespace std;

void knapSack(int W, int n, int values[], int weights[]) {
  int i, w;
  int V[n+1][W+1];
  for(w = 0; w <= W; w++) {
    V[0][w] = 0;
  }
  for(i = 0; i <= n; i++) {
    V[i][0] = 0;
  }

  for (i = 0; i <= n; i++) {
      for (w = 0; w <= W; w++) {
         if (i == 0 || w == 0)
            V[i][w] = 0;
         else if (weights[i - 1] <= w)
            V[i][w]=max(values[i - 1]+V[i - 1][w-weights[i - 1]],V[i - 1][w]);
         else
            V[i][w]=V[i - 1][w];
      }
  }
  
  int ans=V[n][W];
  w=W;
  
  cout<<"By Selecting Weights : ";
  for (i = n; i > 0 && ans > 0; i--) {
      if (ans == V[i - 1][w])
         continue;
      else {
         cout<<weights[i - 1]<<" ";
         ans = ans - values[i - 1];
         w = w - weights[i - 1];
      }
   }
   
   cout<<" You Will Get Maximum Value "<<V[n][W];
}
int main(void) {

  //input values[] and weights[] array
  int val[] = {12,10,21,15};  //value of the items as in sample
  int wt[] = {2,1,3,2};        //weight of the items as in sample
  
  int n = 4;  //total items
  int W = 7;  //capacity of knapsack
  
  knapSack(W, n, val, wt);

  return 0;
}
