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

        vector<int> arr(n);
        arr[n-1] = n;
        int j = n-1;
        bool flag = false;

        for(int i = n-2; i >= 0; i--){
            if(!flag){
                flag = !flag;
                arr[i] = arr[i+1]-j;
                j--;
            }else{
                flag = !flag;
                arr[i] = arr[i+1]+j;
                j--;
            }
        }

        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}