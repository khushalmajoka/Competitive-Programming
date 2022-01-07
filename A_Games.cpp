#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define for(i,j,k) for(int i = j; i < k; i++)
#define co cout <<
#define vi vector<int>

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vi h(n);
    vi g(n);

    for(i, 0, n){
        cin >> h[i] >> g[i];
    }

    int count = 0;

    for(i, 0, n){
        int x = h[i];
        for(j, 0, n){
            if(g[j] == x){
                count++;
            }
        }
    }

    co count;

    return 0;
}