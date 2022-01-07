#include <bits/stdc++.h>
using namespace std;

int subs(string s, string arr[]){
    if(s.empty()){
        arr[0] = "";
        return 1;
    }

    int smallSize = subs(s.substr(1), arr);

    for(int i = 0; i < smallSize; i++){
        arr[smallSize+i] = s[0] + arr[i];
    }

    return 2*smallSize;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        string input;
        cin >> input;

        string output[(int)pow(2, input.size())];

        int n = subs(input, output);

        for(int i = 0; i < n; i++){
            cout << output[i] << endl;
        }
    }

    return 0;
}