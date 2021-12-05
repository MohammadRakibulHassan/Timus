#include<bits/stdc++.h>
using namespace std;
int N,cont[37];
void solve(int n, int sum){
    if(n==N/2){
        ++cont[sum];
        ///cout<<"cont[sum] = "<<cont[sum]<<'\t';
    }
    else{
        for(int i = 0;i<10;++i){
            solve(n+1,sum+i);
            ///cout<<'\n'<<"n+1 = "<<n+1<<" || sum+i = "<<sum+i<<'\n';
        }
    }
}
int main()
{
    int cnt = 1;
    scanf("%d",&N);
    solve(0,0);
    int ans = 0;
    for(int i = 0;i<=36;++i) {
        ans += cont[i]*cont[i];
        ///cout<<cnt++<<".cont[i] = "<<cont[i]<<" || ans = "<<ans<<'\n';
    }
    printf("%d\n",ans);
    return 0;
}
