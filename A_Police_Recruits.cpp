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

    int count = 0;
    int temp = 0;

    for(i, 0, n){
        int x;
        cin >> x;

        if(x < 0){
            if(temp > 0){
                temp += x;
            }else{
                count++;
            }
        }else{
            temp += x;
        }
    }

    co count;

    return 0;
}