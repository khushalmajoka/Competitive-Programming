#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n != 5){
            cout << "NO" << endl;
        }else{
            vector<int> arr(150, 0);
            for(int i = 0; i < n; i++){
                arr[s[i]]++;
            }
            if(arr['T'] != 1){
                cout << "NO" << endl;
            }else if(arr['i'] != 1){
                cout << "NO" << endl;
            }else if(arr['m'] != 1){
                cout << "NO" << endl;
            }else if(arr['u'] != 1){
                cout << "NO" << endl;
            }else if(arr['r'] != 1){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}