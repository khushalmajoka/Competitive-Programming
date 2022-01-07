#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define for(i,j,k) for(int i = j; i < k; i++)
#define co cout <<
#define vi vector<int>

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int col = 0;
    int count = 0;

    for(i, 0, n){
        if(i % 2 == 0){
            count++;
        }
        for(j, 0, m){
            if(i % 2 == 0){
                co "#";
                if(count % 2 == 0){
                    col = 0;
                }else{
                    col = m-1;
                }
            }else{
                if(j == col){
                    co "#";
                }else{
                    co ".";
                }
            }
        }
        co endl;
    }

    return 0;
}