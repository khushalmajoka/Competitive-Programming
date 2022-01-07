#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string x = "hello";

    int i = 0;

    for(int j = 0; j < s.length(); j++){
        if(s[j] == x[i]){
            i++;
        }
    }

    if(i != 5){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
    return 0;
}