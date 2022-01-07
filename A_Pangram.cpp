#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define for(i,j,k) for(int i = j; i < k; i++)
#define co cout <<
#define vi vector<int>

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    vi arr(100, 0);

    for(i, 0, n){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            arr[s[i]]++;
        }else{
            arr[s[i]-32]++;
        }
    }

    bool check = false;

    for(i, 65, 91){
        if(arr[i] == 0){
            cout << "NO" << endl;
            check = true;
            break;
        }
    }
    if(!check){
        cout << "YES" << endl;
    }
    return 0;
}