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

        int b = 0, w = 0;
        char temp = s[0];
        if(temp == 'W'){
            w++;
        }else{
            b++;
        }
        for(int i = 0; i < s.size(); i++){
            if(s[i] != temp){
                temp = s[i];
                if(temp == 'W'){
                    w++;
                }else{
                    b++;
                }
            }
        }

        cout << min(b, w) << endl;
    }

    return 0;
}