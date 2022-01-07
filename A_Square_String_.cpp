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

        if(s.size() % 2 == 0){
            int i = 0;
            int j = s.size()/2;
            bool check = false;

            while(j < s.size()){
                if(s[i] != s[j]){
                    cout << "NO" << endl;
                    check = true;
                    break;
                }
                i++;
                j++;
            }
            if(!check){
                cout << "YES" << endl;
            }
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}