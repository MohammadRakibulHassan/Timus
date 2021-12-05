#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 1;
    cin>>n;
    int a[n][n];
    for(int i = 1 ; i <= n*n ; i++){
        for(int j = 0 ; j < n ; j++){
            for(int k = 0 ; k < n ; k++){
                if(j - k + n == i){
                    a[j][k] = cnt;
                    cnt++;
                }
            }
        }
    }
    int x = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<a[i][j]<<" ";
            x++;
            if(x == n){
                cout<<'\n';
                x = 0;
            }
        }
    }
    return 0;
}
