#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s;

    cin >> n >> s;

    int count = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'A'){
            count++;
        }
    }

    int cnt = n-count;

    if(count > cnt){
        cout << "Anton";
    }else if(cnt > count){
        cout << "Danik";
    }else{
        cout << "Friendship";
    }

    return 0;
}