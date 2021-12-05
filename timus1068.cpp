#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    if(n>0){
        ans=(1+n)*n/2;
    }
    else if(n<0){
        ans=((n-1)*fabs(n)/2)+1;
    }
    else ans=1;
    cout<<ans<<"\n";
    return 0;
}

