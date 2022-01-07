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

        vector<int> arr(2*n);
        int odd = 0, even = 0;

        for(int i = 0; i < arr.size(); i++){
            cin >> arr[i];
            if(arr[i] % 2 == 0){
                even++;
            }else{
                odd++;
            }
        }

        if(arr.size()/2 == even && arr.size()/2 == odd){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}