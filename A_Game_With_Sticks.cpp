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

    bool win = false;

    while(n != 0 && m != 0){
        win = !win;
        n--;
        m--;
    }

    if(win){
        co "Akshat";
    }else{
        co "Malvika";
    }

    return 0;
}