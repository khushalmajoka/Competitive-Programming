#include <bits/stdc++.h>
using namespace std;

int main(){

    double a, b, c, d;
    cin >> a >> b >> c >> d;

    if(d <= a){
        cout << "1.000000000000" << endl;
    }else if(d > b){
        cout << "0.000000000000" << endl;
    }else{
        cout << fixed << setprecision(12) << c/(b-a) << endl;
    }

    return 0;
}