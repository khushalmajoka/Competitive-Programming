#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        sort(s.begin(), s.end());

        int sum = 0;

        for(int i = 1; i <= s.size(); i++){
            sum += i*(s[i-1]-'a'+1);
        }

        cout << sum << endl;
    }

    return 0;
}