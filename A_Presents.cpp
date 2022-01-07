#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int j = 0;
    while(++j <= n){
        for(int i = 0; i < n; i++){
            if(arr[i] == j){
                cout << i+1 << " ";
            }
        }
    }


    return 0;
}