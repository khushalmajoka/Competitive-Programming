#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define for(i,j,k) for(int i = j; i < k; i++)
#define co cout <<
#define vi vector<int>

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s, n;
    cin >> s >> n;

    bool check = false;

    vector<pair<int, int>> arr(n);

    for(i, 0, n){
        int x, y;
        cin >> x >> y;

        arr[i] = pair<int, int>(x, y);
    }

    sort(arr.begin(), arr.end());

    for(i, 0, n){
        int ds = arr[i].first;
        int bonus = arr[i].second;

        if(s > ds){
            s += bonus;
        }else{
            cout << "NO";
            check = true;
            break;
        }
    }

    if(!check){
        cout << "YES";
    }

    return 0;
}