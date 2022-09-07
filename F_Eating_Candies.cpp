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

        int ans = 0;

        int i = 0, sumi = arr[0];
        int j = n, sumj = 0;

        while(i < j){
            if(sumi < sumj){
                i++;
                sumi += arr[i];
            }else if(sumi > sumj){
                j--;
                sumj += arr[j];
            }else{
                ans = i+1+n-j;
                i++;
                sumi += arr[i];
            }
        }

        cout << ans << endl;
    }

    return 0;
}