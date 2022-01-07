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

    int count = 0;

    while(n != 0 && m != 0){
        n--;
        m--;
        count++;
    }

    co count << " ";
    count = 0;

    if(n == 0){
        count = m/2;
    }else{
        count = n/2;
    }

    co count;

    return 0;
}