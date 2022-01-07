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

    string arr[n];

    for(i, 0, n){
        cin >> arr[i];
    }

    int sum = 0;

    for(i, 0, n){
        switch (arr[i][0])
        {
        case 'T':
            sum+=4;
            break;
        case 'C':
            sum+=6;
            break;
        case 'O':
            sum+=8;
            break;
        case 'D':
            sum+=12;
            break;
        default:
            sum+=20;
            break;
        }
    }

    cout << sum;
    return 0;
}