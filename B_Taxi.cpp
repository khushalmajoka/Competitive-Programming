#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    int n;
    int taxi = 0;
    
    cin >> n;
    vector<int> v(100002);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    int i=v.size()-1;
    int k=0;
    while(k != i){
        if(v[i]+ v[k]<=4){
            v[i]+=v[k];
            k++;
        }
        else{
            i--;
            taxi++;
        }
    }
    
    cout << taxi+1;


return 0;
}