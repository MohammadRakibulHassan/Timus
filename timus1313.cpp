#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> ar[i][j];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i+1; j++) {
            cout << ar[i - j][j] << " ";
        }
    }
    for(int i = n ; i < 2*n-1 ; i++){
        for(int j = n - 1 ; j >= i - (n - 1) ; j--){
            cout<<ar[j][i - j]<<" ";
        }
    }
    cout<<'\n';
    return 0;
}
