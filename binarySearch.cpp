#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll binarySearch(ll arr[], ll n, ll key){
    ll start = 0;
    ll end = n;
    while(start <= end){
        ll mid = (start+end)/2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return -1;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;

    while(T-- > 0){
        ll n;
        cin >> n;

        ll arr[n];

        for(ll i = 0; i < n; i++){
            cin >> arr[i];
        }

        ll key;
        cin >> key;

        cout << binarySearch(arr, n, key) << endl;
    }

    return 0;
}