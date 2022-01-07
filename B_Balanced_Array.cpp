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

        if(n % 4 == 0){
            co "YES" << endl;
            int a = 2;
            for(i, 0, n/2){
                co a << " ";
                a+=2;
            }
            int b = 1;
            for(i, 0, n/2-1){
                co b << " ";
                b+=2;
            }
            co n*2-(3+(2*(n/4-1)));
            co endl;
        }else{
            co "NO" << endl;
        }
    }

    return 0;
}