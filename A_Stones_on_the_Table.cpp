#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    string s;
    cin >> s;

    int ans = 0;

    char temp = s[0];
    int count = 1;
    bool check = false;
    for(int i = 1; i < n; i++){
        if(s[i] == temp){
            count++;
            check = false;
        }else{
            ans += count-1;
            temp = s[i];
            count = 1;
            check = true;
        }
    }
    if(!check){
        ans += count-1;
    }

    cout << ans << endl;

    return 0;
}