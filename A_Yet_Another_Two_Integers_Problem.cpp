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
        int x, y;
        cin >> x >> y;

        if(x == y){
            co 0 << endl;
        }else{
            if(abs(x-y)%10 == 0){
                co abs(x-y)/10 << endl;
            }else{
                co abs(x-y)/10+1 << endl;
            }
        }
    }

    return 0;
}