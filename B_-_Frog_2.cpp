#include <bits/stdc++.h>
using namespace std;

int solve(int height[], int n, int k, vector<int>& dp){
    
    dp[0]=0;
    
    for(int i=1;i<n;i++){
        
        int mmSteps = INT_MAX;
        for(int j=1;j<=k;j++){
            if(i-j>=0){
                int jump = dp[i-j]+ abs(height[i]- height[i-j]);
                mmSteps= min(jump, mmSteps);
            }
        }
        
        dp[i]= mmSteps;
    }

    return dp[n-1];
}

int main(){

    int n, k;
    cin >> n >> k;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> dp(n, -1);

    cout << solve(arr, n, k, dp) << endl;

    return 0;
}