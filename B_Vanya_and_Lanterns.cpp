#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define for(i,j,k) for(int i = j; i < k; i++)
#define co cout <<
#define vi vector<int>

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, l;
    cin >> n >> l;

    vi arr(n);

    for(i, 0, n){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    double maxGap = (double)arr[0];

    for(i, 1, n){
        maxGap = max(maxGap, (arr[i]-arr[i-1])/(double)2);
    }

    maxGap = max(maxGap, (double)l-arr[n-1]);
    co fixed << setprecision(10) << maxGap;

    return 0;
}