#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t-- > 0){
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> arr(n+m+1, 0);

        for(int i = 0; i < k; i++){
            int a;
            cin >> a;
            arr[a]++;
        }

        vector<int> ans;
        int admin = n+1;

        for(int i = 0; i < n+m+1; i++){
            int attempt = arr[i];
            if(attempt > 1){
                if(i < admin){
                    ans.push_back(i);
                }
            }
        }

        cout << ans.size() << " ";
        sort(ans.begin(), ans.end());

        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}