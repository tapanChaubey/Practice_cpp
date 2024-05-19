#include<bits/stdc++.h>
using namespace std;
class Graf{
    public:
    unordered_map<int,list<int>>adj;
void Eadge(int u,int v,bool direction){
    adj[u].push_back(v);
    if(direction==0){
        adj[v].push_back(u);
    }
}
void printAdjList(){
    for(auto i:adj){
        cout<<i.first<<"->";
        for(auto j:i.second){
            cout<<j<<",";
        }
        cout<<endl;
    } 
}    
};
int main(){
    Graf gf;
    int n;
    cin>>n;
    int m;
    cin>>m;
    for(int i=1; i<=m; i++){
        int u,v;
        cin>>u>>v;
        gf.Eadge(u,v,0);

    }
gf.printAdjList();

    return 0;
}