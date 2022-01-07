#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define for(i,j,k) for(int i = j; i < k; i++)
#define co cout <<
#define vi vector<int>

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    int ttq = (n*(5+(5*n)))/2;
    int tt = ttq+k;

    while(tt > 240){
        n--;
        ttq = (n*(5+(5*n)))/2;
        tt = ttq+k;
    }

    co n;

    return 0;
}