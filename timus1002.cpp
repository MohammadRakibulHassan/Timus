#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll x;
    int i=0;
    vector<double> v,a;
    while(cin>>x && x!=EOF){
        v.push_back((double)sqrt(x*1.0));

    }
    for(int i=v.size()-1;i>-1;i--)
        cout<<setprecision(4)<<fixed<<(double)v[i]<<endl;

    return 0;
}
