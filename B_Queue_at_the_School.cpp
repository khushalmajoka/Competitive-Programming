#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    for(int i = 0; i < t; i++){
        for(int j = 0; j < s.length(); j++){
            if(s[j] == 'B' && s[j+1] == 'G'){
                char temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
                j++;
            }
        }
    }

    cout << s;

    return 0;
}