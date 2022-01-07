#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n+1, 0);

    int p;
    cin >> p;

    for(int i = 0; i < p; i++){
        int x;
        cin >> x;
        if(arr[x] == 0){
            arr[x]+=1;
        }
    }

    int q;
    cin >> q;

    for(int i = 0; i < q; i++){
        int x;
        cin >> x;
        if(arr[x] == 0){
            arr[x]+=1;
        }
    }

    for(int i = 1; i <= n; i++){
        if(arr[i] == 0){
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";

    return 0;
}