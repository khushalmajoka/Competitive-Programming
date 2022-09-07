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
        unordered_map<string, vector<int>> string_to_player;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < n; j++){
                string s;
                cin >> s;
                string_to_player[s].push_back(i);
            }
        }

        int a = 0, b = 0, c = 0;
        for(auto it: string_to_player){
            if(it.second.size() == 1){
                if(it.second[0] == 0){
                    a+=3;
                }else if(it.second[0] == 1){
                    b+=3;
                }else{
                    c+=3;
                }
            }else if(it.second.size() == 2){
                if(it.second[0] == 0){
                    a+=1;
                }else if(it.second[0] == 1){
                    b+=1;
                }else{
                    c+=1;
                }

                if(it.second[1] == 0){
                    a+=1;
                }else if(it.second[1] == 1){
                    b+=1;
                }else{
                    c+=1;
                }
            }
        }

        cout << a << " " << b << " " << c << endl;
    }

    return 0;
}