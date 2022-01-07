#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n+1, 0);

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        arr[x]++;
    }

    for(int i = 1; i <= n; i++){
        if(arr[i] != 1){
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
 
    return 0;
}