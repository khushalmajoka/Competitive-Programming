#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    if(s.length() < 8){
        cout << "NO" << endl;
        return 0;
    }

    vector<int> arr;

    int count = 1;
    char temp = s[0];
    bool flag = false;
    for(int i = 1; i < s.length(); i++){
        if(s[i] == temp){
            count++;
            flag = false;
        }else{
            arr.push_back(count);
            count = 1;
            temp = s[i];
            flag = true;
        }
    }
    if(!flag){
        arr.push_back(count);
    }

    bool check = false;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] >= 7){
            cout << "YES" << endl;
            check = true;
            break;
        }
    }

    if(!check){
        cout << "NO" << endl;
    }

    return 0;
}