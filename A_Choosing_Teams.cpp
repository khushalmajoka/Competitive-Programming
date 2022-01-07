#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> arr(6, 0);

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr[x]++;
    }

    int y = 5-k;
    int count = 0;

    for(int i = 0; i <= y; i++){
        count += arr[i];
    }

    if(count < 3){
        cout << 0;
    }else{
        cout << count/3;
    }

    return 0;
}