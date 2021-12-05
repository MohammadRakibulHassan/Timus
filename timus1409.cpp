#include<bits/stdc++.h>
using namespace std;
int main()
{
    int har,lar,ans1=0,ans2=0;
    cin>>har>>lar;
    int tot=har+lar-1;
    ans1=tot-har;
    ans2=tot-lar;
    cout<<ans1<<" "<<ans2<<"\n";
    return 0;
}
