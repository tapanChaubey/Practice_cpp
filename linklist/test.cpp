#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int sum=0;
   

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

int minEle=INT_MAX;
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    {
        sum+=arr[j][i];
    }
    minEle=min(minEle, sum);
    sum=0;
    }
     cout<<minEle;
     


    return 0;
}