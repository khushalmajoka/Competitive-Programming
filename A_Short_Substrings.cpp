#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define for(i,j,k) for(int i = j; i < k; i++)
#define co cout <<
#define vi vector<int>

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t-- > 0){
        string s;
        cin >> s;

        string k;

        for(i, 0, s.size()-1){
            k += s[i];
            i++;
        }

        k += s[s.size()-1];

        co k << endl;
    }

    return 0;
}