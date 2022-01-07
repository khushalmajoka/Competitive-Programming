#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<long long int, long long int> mp;

    for(int i = 0; i < 4; i++){
        long long int x;
        cin >> x;
        
        if(mp.find(x) != mp.end()){
            mp[x] = (mp.find(x)->second)+1;
        }else{
            mp[x] = 1;
        }
    }

    int count = 0; 
    for(auto it = mp.begin(); it != mp.end(); it++){
        if(it->second > 1){
            count += (it->second)-1;
        }
    }

    cout << count;

    return 0;
}