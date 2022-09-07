#include <bits/stdc++.h>
using namespace std;

int longestNiceSubarray(vector<int>& nums) {
        int i = 1;
        int ans = 1;
        int tempAns = 1;
        int temp = nums[0];
        while(i < nums.size()){
            if(nums[i]&temp == 0){
                if(tempAns+1 > ans){
                    ans = tempAns+1;
                    tempAns++;
                }
                temp = temp|nums[i];
                i++;
            }else{
                tempAns = 1;
                temp = nums[i];
                i++;
            }
        }
        return ans;
    }

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--){
		vector<int> nums = {1, 3, 8, 48, 10};
		cout << longestNiceSubarray(nums);
	}

	return 0;
}