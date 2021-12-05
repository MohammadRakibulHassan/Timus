#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,K,i=0;
    cin>>K;
    k=K;
    int a[K];
    while(k--){
        cin>>a[i];
        i++;
    }
    i--;
    int an=0;
    sort(a,a+K);
    int det=ceil(K/2.0);
    for(int j=0;j<det;j++){
        an+=ceil(a[j]/2.0);
    }
    cout<<an<<'\n';
    return 0;
}
