#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define for(i,j,k) for(int i = j; i < k; i++)
#define co cout <<
#define vi vector<int>

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;

    ll count = 0;

    vi arr(m);
    for(i, 0 , m){
        cin >> arr[i];
    }

    count += arr[0]-1;

    for(i, 0, m-1){
        if(arr[i+1] >= arr[i]){
            count += (arr[i+1]-arr[i]);
        }else{
            count += n-(arr[i]-arr[i+1]);
        }
    }

    co count;

    return 0;
}