#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    int q=0;
    cin>>n;
    vector<int>ans;
    while(n--){
        cin>>k;
        if(sqrt(8.0*k-7)==(int)sqrt(8.0*k-7))
            cout<<1<<" ";
        else
            cout<<0<<" ";
        cout<<'\n';
    }

    return 0;
}
