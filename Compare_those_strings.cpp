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

        string a, b;
        cin >> a >> b;

        int count = 0;
        bool sa  = false;
        if(a[n-1] < b[n-1]){
            sa = true;
            count++;
        }else{
            sa = false;
        }

        for(int i = n-2; i>= 0; i--){
            if(sa){
                if(a[i] <= b[i]){
                    count++;
                }
                if(a[i] < b[i]){
                    sa = true;
                }
                if(a[i] > b[i]){
                    sa = false;
                }
            }else{
                if(a[i] < b[i]){
                    count++;
                    sa = true;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}