#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, h;
    cin >> n >> h;

    int count = 0;

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        if(temp <= h){
            count++;
        }else{
            count += 2;
        }
    }

    cout << count << endl;

    return 0;
}