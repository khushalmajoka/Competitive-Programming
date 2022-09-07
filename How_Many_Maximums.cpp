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

        bool check = false;
        int count = 0;

        if(s[0] == '1'){
            count++;
        }else{
            check = true;
        }

        for(int i = 1; i < n-1; i++){
            if(s[i] == '0' && check){
                check = true;
            }else if(s[i] == '0' && !check){
                check = true;
            }else if(s[i] == '1' && check){
                count++;
                check = false;
            }else if(s[i] == '1' && !check){
                check = false;
            }
        }

        if(check){
            count++;
        }

        cout << count << endl;
    }

    return 0;
}