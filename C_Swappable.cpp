#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long int n;
    cin >> n;
 
    long long int a[n];
    long long int ans = (n*(n-1))/2;
    map<long long int, long long int> mp;
 
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if(mp.find(a[i]) == mp.end()){
            mp[a[i]] = 1;
        }else{
            mp[a[i]]++;
        }
    }
 
    long long int count = 0;
 
    for(auto it = mp.begin(); it != mp.end(); it++){
        
        if(it->second > 1){
            count += ((it->second)*((it->second)-1))/2;
        }
    }
 
    cout << ans-count;
 
    return 0;
}