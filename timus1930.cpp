#include<bits/stdc++.h>
using namespace std;
#define pb push_back
const int mx = 1e7+1;
vector<int> a[mx];
int dist[mx];
int vis[mx];
int nnode;
void bfs(int s , int z)
{
    queue<int> q;
    q.push(s);
    vis[s] = 1;
    dist[s] = 0;
    while(!q.empty()){
        int p = q.front();
        q.pop();
        for(int r : a[p]){
            if(!vis[r]){
                vis[r] = 1;
                dist[r] = dist[s] + 1;
                q.push(r);
            }
            if(vis[z]) nnode = dist[z] ;
        }
    }
    ///nnode = dist[z]+1;
}
int main()
{
    int n , m;
    cin>>n>>m;
    for(int i = 1 ; i <= m  ; i++){
        int u , v;
        cin>>u>>v;
        a[u].pb(v);
        a[v].pb(u);
    }
    int x ,y;
    cin>>x>>y;
    bfs(x ,y);
    int ans = nnode ;
    cout<<ans<<'\n';
    return 0;
}
