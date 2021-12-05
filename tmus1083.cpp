#include<iostream>
using namespace std;
int main()
{
    int n,k,cunt=0,sum=1,j;
    char f[21];
    cin>>n>>f;
    int i=0;
    while(f[i]=='!'){
        cunt += 1;
        i++;
    }
    k=cunt;
    if(n%k == 0){
        for(i=n,j=0;i>=k;i=(n-j*k)){
            sum=sum*i;j++;
        }
    }
    else{
        for(i=n,j=0;i>0;i=(n-j*k)){
            sum=sum*i;j++;
        }
    }
    cout<<sum;

    return 0;
}
