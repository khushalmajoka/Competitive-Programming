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

        int index = 0;
        int i = 0;

        for(i = 0; i < n-1; i++){
            int mn = arr[i];
            for(int j = i+1; j < n; j++){
                if(arr[j] < mn){
                    mn = arr[j];
                    index = j;
                }
            }
            if(mn != arr[i]){
                break;
            }
        }

        while(i <= index/2){
            swap(arr[i], arr[index]);
            i++;
            index--;
        }

        for(auto it: arr){
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}