#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define for(i,j,k) for(int i = j; i < k; i++)
#define co cout <<
#define vi vector<int>

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;

        if(n == 1 || n == 2){
            co 0 << endl;
            continue;
        }

        if(n % 2 == 0){
            co n/2-1 << endl;
        }else{
            co n/2 << endl;
        }
    }

    return 0;
}