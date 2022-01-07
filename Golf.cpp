#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T-- > 0){
        int N,x,k;
        cin >> N >> x >> k;

        N += 2;

        int temp = (N-1) % k;

        bool check = false;
        
        if(x % k == 0 || x % k == temp){
            cout << "YES" << endl;
            check = true;
        }

        if(!check){
            cout << "NO" << endl;
        }
    }
    return 0;
}