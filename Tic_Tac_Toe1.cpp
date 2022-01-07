#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while(T-- > 0){
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;

        int x = 0;
        int y = 0;
        int nu = 0;
        int nx = 0;
        int ny = 0;

        if(s1[0] == s1[1] && s1[1] == s1[2] && s1[0] != '_'){

            if(s1[0] == 'X'){
                x++;
            }else{
                y++;
            }

        }
        
        if(s2[0] == s2[1] && s2[1] == s2[2] && s2[0] != '_'){

            if(s2[0] == 'X'){
                x++;
            }else{
                y++;
            }

        }
        
        if(s3[0] == s3[1] && s3[1] == s3[2] && s3[0] != '_'){

            if(s3[0] == 'X'){
                x++;
            }else{
                y++;
            }

        }
        
        if(s1[0] == s2[0] && s2[0] == s3[0] && s1[0] != '_'){

            if(s1[0] == 'X'){
                x++;
            }else{
                y++;
            }

        }
        
        if(s1[1] == s2[1] && s2[1] == s3[1] && s1[1] != '_'){

            if(s1[1] == 'X'){
                x++;
            }else{
                y++;
            }

        }
        
        if(s1[2] == s2[2] && s2[2] == s3[2] && s1[2] != '_'){

            if(s1[2] == 'X'){
                x++;
            }else{
                y++;
            }

        }
        
        if(s1[0] == s2[1] && s2[1] == s3[2] && s1[0] != '_'){

            if(s1[0] == 'X'){
                x++;
            }else{
                y++;
            }

        }
        
        if(s1[2] == s2[1] && s2[1] == s3[0] && s1[2] != '_'){

            if(s1[2] == 'X'){
                x++;
            }else{
                y++;
            }

        }

        for( int i = 0; i < 3; i++){
            if(s1[i] == '_'){
                nu++;
            }else if(s1[i] == 'X'){
                nx++;
            }else{
                ny++;
            }
            if(s2[i] == '_'){
                nu++;
            }else if(s2[i] == 'X'){
                nx++;
            }else{
                ny++;
            }
            if(s3[i] == '_'){
                nu++;
            }else if(s3[i] == 'X'){
                nx++;
            }else{
                ny++;
            }
        }

        if(nu == 0 && x == 0 && y == 0 && (nx == ny || (nx > ny && nx-ny == 1))){
            cout << 1 << endl;
        }else if(x >= 1 && y < 1 && nx > ny && nx-ny == 1){
            cout << 1 << endl;
        }else if(y >= 1 && x < 1 && nx == ny){
            cout << 1 << endl;
        }else if(x == 0 && y == 0 && nu >= 1 && (nx == ny || (nx > ny && nx-ny == 1))){
            cout << 2 << endl;
        }else{
            cout << 3 << endl;
        }
    }

    return 0;
}