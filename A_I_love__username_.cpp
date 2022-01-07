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

    int x;
    cin >> x;

    int mn = x;
    int mx = x;
    int count = 0;

    for(i, 1, n){
        int y;
        cin >> y;

        if(y > mx){
            count++;
            mx = y;
        }
        if(y < mn){
            count++;
            mn = y;
        }
    }

    co count;

    return 0;
}