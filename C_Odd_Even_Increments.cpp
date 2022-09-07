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

        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        if(arr[0] % 2 == 0 && arr[1] % 2 == 0){
            bool check = false;
            for(int i = 0; i < n; i++){
                if(arr[i] % 2 != 0){
                    cout << "NO" << endl;
                    check = true;
                    break;
                }
            }
            if(!check){
                cout << "YES" << endl;
            }
        }else if(arr[0] % 2 == 0 && arr[1] % 2 != 0){
            bool check = false;
            for(int i = 0; i < n; i++){
                if((arr[i] % 2 != 0 && i % 2 == 0) || (arr[i] % 2 == 0 && i % 2 != 0)){
                    cout << "NO" << endl;
                    check =  true;
                    break;
                }
            }
            if(!check){
                cout << "YES" << endl;
            }
        }else if(arr[0] % 2 != 0 && arr[1] % 2 == 0){
            bool check = false;
            for(int i = 0; i < n; i++){
                if((arr[i] % 2 == 0 && i % 2 == 0) || (arr[i] % 2 != 0 && i % 2 != 0)){
                    cout << "NO" << endl;
                    check =  true;
                    break;
                }
            }
            if(!check){
                cout << "YES" << endl;
            }
        }else if(arr[0] % 2 != 0 && arr[1] % 2 != 0){
            bool check = false;
            for(int i = 0; i < n; i++){
                if(arr[i] % 2 == 0){
                    cout << "NO" << endl;
                    check = true;
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