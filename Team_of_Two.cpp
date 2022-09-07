#include <bits/stdc++.h>
using namespace std;

bool check(int i, int j, vector<pair<int, vector<int>>> &mp){
    bool one= false, two = false, three = false, four = false, five = false;
    for(int k = 0; k < mp[i].first; k++){
        switch(mp[i].second[k]){
            case 1:
            one = true;
            break;
            case 2:
            two = true;
            break;
            case 3:
            three = true;
            break;
            case 4:
            four = true;
            break;
            case 5:
            five = true;
            break;
        }
    }
    for(int k = 0; k < mp[j].first; k++){
        switch(mp[j].second[k]){
            case 1:
            one = true;
            break;
            case 2:
            two = true;
            break;
            case 3:
            three = true;
            break;
            case 4:
            four = true;
            break;
            case 5:
            five = true;
            break;
        }
    }
    return one && two && three && four && five;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<pair<int, vector<int>>> mp;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            vector<int> temp(x);
            for(int j = 0; j < x; j++){
                cin >> temp[j];
            }
            mp.push_back({x, temp});
        }
        bool flag2 = false;
        for(int i = 0; i < n; i++){
            int noqfps = mp[i].first;
            bool flag1 = false;
            for(int j = 0; j < n && j != i; j++){
                if(mp[j].first >= 5-noqfps){
                    if(check(i, j, mp)){
                        cout << "YES" << endl;
                        flag1 = true;
                        flag2 = true;
                        break;
                    }
                }
            }
            if(flag1) break;
        }

        if(!flag2) cout << "NO" << endl;
    }

    return 0;
}