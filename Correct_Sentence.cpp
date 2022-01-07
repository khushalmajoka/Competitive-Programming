#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t-- > 0){
        int k;
        cin >> k;

        vector<string> arr(k);

        for(int i = 0; i < k; i++){
            cin >> arr[i];
        }

        bool flag = false;

        for(int i = 0; i < k; i++){
            string s = arr[i];
            for(int j = 0; j < s.size(); j++){
                if((s[j] >= 78 && s[j] <= 90) || (s[j] >= 97 && s[j] <= 109)){
                    continue;
                }else{
                    cout << "NO" << endl;
                    flag = true;
                    break;
                }
            }
            if(flag){
                break;
            }
        }

        if(!flag){
            bool check = false;
            for(int i = 0; i < k; i++){
                string s = arr[i];
                if(s[0] <= 90){
                    for(int j = 0; j < s.size(); j++){
                        if(s[j] > 90){
                            cout << "NO" << endl;
                            check = true;
                            break;
                        }
                    }
                }else{
                    for(int j = 0; j < s.size(); j++){
                        if(s[j] < 97){
                            cout << "NO" << endl;
                            check = true;
                            break;
                        }
                    }
                }
                if(check){
                    break;
                }
            }
            if(!check){
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}