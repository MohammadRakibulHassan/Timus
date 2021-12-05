#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double r;
    cin>>n>>r;
    n-=1;
    double po=2.0*3.1416*r;
    double x[17],y[17];
    cin>>x[0]>>y[0];
    int i=1;
    double ans=0;
    while(n--){
        cin>>x[i]>>y[i];
        ans=ans+(double)sqrt((x[i-1]-x[i])*(x[i-1]-x[i]) + (y[i-1]-y[i])*(y[i-1]-y[i]));
        i++;
    }--i;
    ans+=(double)sqrt((x[i]-x[0])*(x[i]-x[0]) + (y[i]-y[0])*(y[i]-y[0]));
    cout<<setprecision(2)<<fixed<<ans+po<<'\n';
    return 0;
}
