#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    vector<int> arr(123, 0);

    int ans = 0;

    for(int i = 0; i < s.length(); i++){
        arr[s[i]] = 1;
    }
    for(int i = 97; i < 123; i++){
        if(arr[i] > 0){
            ans++;
        }
    }

    if(ans % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }else{
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}       