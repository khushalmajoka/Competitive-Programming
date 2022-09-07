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

        string a, b;
        cin >> a >> b;

        set<char> s;

        for(int i = 0; i < n; i++){
            if(a[i]!=b[i]){
                s.insert(b[i]);
            }
        }

        cout << s.size() << endl;
    }

    return 0;
}