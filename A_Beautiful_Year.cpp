#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while(n > 0){
        here:
        n++;
        int temp = n;

        vector<int> arr(10, 0);
        
        while(temp > 0){
            int last = temp % 10;
            arr[last] += 1;
            temp /= 10;
        }

        for(int i = 0; i < 10; i++){
            if(arr[i] > 1){
                goto here;
            }
        }

        cout << n << endl;
        break;
    }

    return 0;
}