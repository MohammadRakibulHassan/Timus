#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s=="a1"||s=="h1"||s=="a8"||s=="h8"){
            ans=2;
        }
        else if(s=="a2"||s=="a7"||s=="h2"||s=="h7"){
            ans=3;
        }
        else if(s=="b1"||s=="g1"||s=="b8"||s=="g8"){
            ans=3;
        }
        else if(s=="a3"||s=="a4"||s=="a5"||s=="a6"){
            ans=4;
        }
        else if(s=="b2"||s=="g2"||s=="b7"||s=="g7"){
            ans=4;
        }
        else if(s=="c1"||s=="d1"||s=="e1"||s=="f1"){
            ans=4;
        }
        else if(s=="c8"||s=="d8"||s=="e8"||s=="f8"){
            ans=4;
        }
        else if(s=="h3"||s=="h4"||s=="h5"||s=="h6"){
            ans=4;
        }
        else if(s=="b3"||s=="b4"||s=="b5"||s=="b6"){
            ans=6;
        }
        else if(s=="g3"||s=="g4"||s=="g5"||s=="g6"){
            ans=6;
        }
        else if(s=="c2"||s=="d2"||s=="e2"||s=="f2"){
            ans=6;
        }
        else if(s=="c7"||s=="d7"||s=="e7"||s=="f7"){
            ans=6;
        }
        else if(s=="c3"||s=="d3"||s=="e3"||s=="f3"){
            ans=8;
        }
        else if(s=="c4"||s=="d4"||s=="e4"||s=="f4"){
            ans=8;
        }
        else if(s=="c5"||s=="d5"||s=="e5"||s=="f5"){
            ans=8;
        }
        else if(s=="d6"||s=="c6"||s=="e6"||s=="f6"){
            ans=8;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
