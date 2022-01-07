#include <bits/stdc++.h>
using namespace std;

int main(){

    cout << "Enter a number from 1 to 4: ";
    int num;
    cin >> num;

    if(num == 1){
        cout << "You win $10!" << endl;
    }else if(num == 2){
        cout << "You lose $10!" << endl;
    }else if(num == 3){
        cout << "You win/lose nothing!" << endl;
    }else if(num == 4){
        cout << "You win $5!" << endl;
    }else{
        cout << "You entered an incorrect number!" << endl;
        cout << "You lose $100!" << endl;
    }
    return 0;
}