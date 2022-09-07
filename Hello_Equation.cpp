#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int x;
        cin >> x;

        int i = 1, j = 1;
        int temp = (2*i)+(2*j)+(i*j);
        while(temp < x){
            bool check = false;
            while(temp < x){
                j++;
                temp = (2*i)+(2*j)+(i*j);
                if(temp == x){
                    check = true;
                    break;
                }
            }
            if(check){
                break;
            }
            i++;
            j = 1;
            temp = (2*i)+(2*j)+(i*j);
            if(temp == x) break;
        }
        if(temp == x){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}