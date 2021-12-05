#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        sum+=ar[i];
    }
    int an=sum;
    for(int mask=0;mask<(1<<n);mask++){
        int s=0;
        for(int j=0;j<n;j++){
            if((1<<j)&mask)
                s+=ar[j];
        }
        an=min(an, abs(sum - s*2));
    }
    cout<<an<<'\n';
    return 0;
}
