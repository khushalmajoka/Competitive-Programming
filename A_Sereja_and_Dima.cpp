#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector<int> temp(t);

    for(int i = 0; i < t; i++){
        cin >> temp[i];
    }

    int i = 0;
    int j = t-1;

    int s = 0;
    int o = 0;

    int count = 0;

    while(i <= j){
        if(count % 2 == 0){
            int x = max(temp[i], temp[j]);
            if(x == temp[i]){
                i++;
            }else{
                j--;
            }
            s += x;
        
        }else{
            int x = max(temp[i], temp[j]);
            if(x == temp[i]){
                i++;
            }else{
                j--;
            }
            o += x;
        }
        count++;
    }

    cout << s << " " << o << endl;
    return 0; 
}