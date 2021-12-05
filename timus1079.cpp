#include<bits/stdc++.h>
using namespace std;
int main()
{
   int v[100000];
   v[0] = 0;
   v[1] = 1;
   for(int i = 2 ; i < 100000 ; i++){
        if(i % 2 == 0)
            v[i] = v[i/2];
        else
            v[i] = v[i/2] + v[i/2+1];

   }
   int n;
   while(cin>>n){
        if(!n)
            break;
        int mx = -1;
        for(int j = 0 ; j <= n ; j++){
            mx = max(mx , v[j]);
        }
        cout<<mx<<'\n';
    }
    return 0;
}
