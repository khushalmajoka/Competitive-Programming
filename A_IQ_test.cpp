#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define for(i,j,k) for(int i = j; i < k; i++)
#define co cout <<
#define vi vector<int>

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vi arr(n);

    int even = 0;
    int odd = 0;

    for(i, 0, n){
        cin >> arr[i];
        if(arr[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    if(even > odd){
        for(i, 0, n){
            if(arr[i] % 2 != 0){
                co i+1;
                break;
            }
        }
    }else{
        for(i, 0, n){
            if(arr[i] % 2 == 0){
                co i+1;
                break;
            }
        }
    }

    return 0;
}