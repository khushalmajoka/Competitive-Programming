#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;

        vector<int> arr(n);
        bool check = false;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] < 0){
                check = true;
            }
        }

        if(check){
            cout << "No";
        }else{
            sort(arr.begin(), arr.end());
            int x = arr[0];
            int mx = INT_MIN;
            for(int i = 0; i < n; i++){
                if(arr[i] > 0){
                    x = __gcd(x, arr[i]);
                }
                mx = max(mx, arr[i]);
            }
            arr.clear();
            for(int j = 0; j <= mx/x; j++){
                arr.push_back(x*j);
            }

            if(arr.size() > 300){
                cout << "No";
            }else{
                cout << "yes" << endl << arr.size() << endl;

                for(int i = 0; i < arr.size(); i++){
                    cout << arr[i] << " ";
                }
            }
        }

        cout << endl;
        
    }

    return 0;
}