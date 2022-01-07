// Problem Statement: Tower of Hanoi
// Problem Level: EASY
// Problem Description:
// Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. 
// The objective of the puzzle is to move all disks from source rod to destination rod using third rod (say auxiliary). 
// The rules are :
// 1) Only one disk can be moved at a time.
// 2) A disk can be moved only if it is on the top of a rod.
// 3) No disk can be placed on the top of a smaller disk.

// Print the steps required to move n disks from source rod to destination rod.
// Source Rod is named as 'a', auxiliary rod as 'b' and destination rod as 'c'.
// Input Format :
// Integer n

// Output Format :
// Steps in different lines (in one line print source and destination rod name separated by space)

// Constraints :
// 0 <= n <= 20

// Sample Input 1 :
// 2

// Sample Output 1 :
// a b
// a c
// b c

// Sample Input 2 :
// 3

// Sample Output 2 :
// a c
// a b
// c b
// a c
// b a
// b c
// a c

// =============================================================

#include <bits/stdc++.h>
using namespace std;

void tower(int n, string s, string d, string a){
    if(n == 1){
        cout << s << " " << d << endl;
        return;
    }

    tower(n-1, s, a, d);

    cout << s << " " << d << endl;

    tower(n-1, a, d, s);
    return;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        tower(n, "a", "c", "b");
    }

    return 0;
}