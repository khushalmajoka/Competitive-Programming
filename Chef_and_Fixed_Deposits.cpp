#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, x;
        cin >> n >> x;

        vector<int> arr;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            arr.push_back(a);
        }
        sort(arr.begin(), arr.end(), greater<int>());
        
        int sum = 0;
        bool check = false;
        for(int i = 0; i < n; i++){
            sum += arr[i];
            if(sum >= x){
                cout << i+1 << endl;
                check = true;
                break;
            }
        }
        if(!check){
            cout << -1 << endl;
        }
        
    }

    return 0;
}