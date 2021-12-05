#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
int main()
{
    int n;
    cin>>n;
    vector<int> ar(n,0);
    for(int i=0;i<n;i++)
        cin>>ar[i];
    sort(ar.begin(), ar.end());

    int w1=0,w2=0,step=1;
    for(int i=0,j=n-1 ; i<n/2 && j>n/2 ; i++,j--){
        if(step%2==1)
            w1=w1+ar[i]+ar[j];
        else
            w2=w2+ar[i]+ar[j];
        step++;
    }
    if(n%2){///odd
        if(w1>w2)
            w2=w2+ar[floor(n/2)];
        else
            w1=w1+ar[floor(n/2)];
    }
    cout<<abs(w2-w1)<<endl;
    return 0;
}

