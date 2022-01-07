#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string keyboard, s; 
        cin >> keyboard >> s;

        int ans = 0;
        int diff = 0;

        for(int i = 0; i < keyboard.size(); i++){
            if(s[0] == keyboard[i]){
                diff = i+1;
                break;
            }
        }

        for(int i = 1; i < s.size(); i++){
            for(int j = 0; j < keyboard.size(); j++){
                if(s[i] == keyboard[j]){
                    ans += abs(j+1-diff);
                    diff = j+1;
                    break;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}