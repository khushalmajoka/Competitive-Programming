#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t-- > 0){
        int n, k;
        cin >> n >> k;

        int a[n];
        int b[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        sort(a, a+n);
        sort(b, b+n);

        int j = 0;
        int l = n-1;

        for(int i = 0; i < k; i++){
            if(b[l] > a[j]){
                int temp = a[j];
                a[j] = b[l];
                b[l] = temp;
                l--;
                j++;
            }else{
                break;
            }
        }

        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += a[i];
        }

        cout << sum << endl;
    }

    return 0;
}