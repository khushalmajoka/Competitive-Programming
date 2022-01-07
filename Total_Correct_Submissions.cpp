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

        map<string, int> mp;

        for(int i = 0; i < 3*n; i++){
            string temps;
            int tempi;
            cin >> temps >> tempi;

            if(mp.find(temps) == mp.end()){
                mp[temps] = tempi;
            }else{
                mp[temps] = (mp.find(temps)->second) + tempi;
            }
        }

        vector<int> arr;

        for(auto it = mp.begin(); it != mp.end(); it++){
            arr.push_back(it->second);
        }

        sort(arr.begin(), arr.end());

        for(int i = 0; i < arr.size(); i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}