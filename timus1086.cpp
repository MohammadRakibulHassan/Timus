#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1000000
ll check[MAX];
vector<ll> prim;
void seive()
{
    int i,j;
    for(i=4;i<MAX;i+=2)
        check[i]=1;///not prime
    for(i=3;i*i<=MAX;i+=2){
        if(check[i]==0){
            for(j=i*i;j<MAX;j+=2*i)
                check[j]=1;///not prime
        }
    }
    for(int ndx=2;ndx<MAX;ndx++)
        if(!check[ndx])
            prim.push_back(ndx);
}
int main()
{

    seive();
    int n,k;
    cin>>n;
    while(n--){
        cin>>k;
        cout<<prim[k-1]<<'\n';
    }
    return 0;
}

/*#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FastIO  ios_base::sync_with_stdio(false); cin.tie(0);
#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define sc3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)
#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)
#define pf3(a,b,c) printf("%lld %lld %lld\n",a,b,c)
#define fr1(n) for(i=0;i<n;i++)
#define fr2(n) for(i=1;i<n;i++)
#define fr3(i,a,b) for(i=a;i<=b;i++)
/*primes in range 1 - n
1 - 100(1e2) -> 25 primes
1 - 1000(1e3) -> 168 primes
1 - 10000(1e4) -> 1229 primes
1 - 100000(1e5) -> 9592 primes
1 - 1000000(1e6) -> 78498 primes
1 - 10000000(1e7) -> 664579 primes
large primes ->
104729 1299709 15485863 179424673 2147483647 32416190071 112272535095293 48112959837082048697

#define mx 1000005
ll checkprime[mx];
vector<ll>prime;
void sieve()
{
    ll n,i,j;
    for(i=4; i<mx; i+=2)
        checkprime[i] = 1;///not prime
    for(i=3; i*i<=mx; i+=2){
        if(checkprime[i]==0){///if prime
            for(j=i*i; j<mx; j+=(i+i))
                checkprime[j] = 1;///cut
        }
    }
    for(i=2; i<mx; i++)
       if(!checkprime[i])
          prime.push_back(i);
}
int main()
{
    FastIO;
    sieve();
    ll n,a;
    sc1(n);
    while(n--){
        sc1(a);
        pf1(prime[a-1]);
    }
    return 0;
}
*/
