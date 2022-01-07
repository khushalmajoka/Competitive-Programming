#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define for(i,j,k) for(int i = j; i < k; i++)
#define co cout <<
#define vi vector<int>

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b, c;
    cin >> a >> b >> c;

    int l = a.size(), m = b.size(), n = c.size();

    if(l+m == n){
        vi arr(123, 0);
        vi ans(123, 0);

        for(i, 0, l){
            arr[a[i]]++;
        }
        for(i, 0, m){
            arr[b[i]]++;
        }
        for(i, 0, n){
            ans[c[i]]++;
        }

        bool check = false;

        for(i, 65, 91){
            if(arr[i] != ans[i]){
                cout << "NO";
                check = true;
                break;
            }
        }
        if(!check){
            cout << "YES";
        }
    }else{
        cout << "NO";
    }
    return 0;
}