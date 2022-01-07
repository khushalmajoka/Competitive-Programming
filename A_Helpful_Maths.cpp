#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int x = (s.length()+1)/2;

    int arr[x];

    for(int i = 0; i < s.length(); i += 2){
        arr[i/2] = stoi(s.substr(i, 1));
    }
    
    for(int i = x-1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < x-1; i++){
        cout << arr[i] << "+";
    }
    cout << arr[x-1];
    return 0;
}   