#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int temp = arr[0] % 10;
    int count = 1;

    for(int i = 0; i < n; i++){
        if(temp != arr[i] % 10){
            temp = arr[i] % 10;
            count++;
        }
    }

    cout << count;
    return 0;
}