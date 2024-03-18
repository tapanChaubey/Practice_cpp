#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size; 
    cin>>size;
    vector<int> v;
    for(int i=0;i<size;i++)
    {
        int x; 
        cin>>x;
        v.push_back(x);
    }
    map<int, int>m;
    for(int i=0;i<size;i++)
    {
        m[v[i]]++;
    }

    for(auto y: m)
    {
       cout<<y.first<<" ";
    }
    cout<<endl;
    return 0;
}