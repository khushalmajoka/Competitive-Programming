#include <iostream>
using namespace std;

int reverse(int a){
    int b = 0;

    while(a > 0){
        int last = a % 10;
        b = b*10 + last;
        a /= 10;
    }

    return b;
}

int addBinary(int a, int b){
    int ans = 0;
    int prev = 0;

    while(a > 0 && b > 0){
        if(a % 2 == 0 && b % 2 == 0){
            ans = ans * 10 + prev;
            prev = 0;
        }else if((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0)){
            if(prev == 0){
                ans = ans * 10 + 1;
                prev = 0;
            }else{
                ans = ans *10 + 0;
                prev = 1;
            }
        }else{
            ans = ans * 10 + prev;
            prev = 1;
        }
        a /= 10;
        b /= 10;
    }
    while(a > 0){
        if(prev == 1){
            if(a % 2 == 1){
                ans = ans * 10 + 0;
                prev = 1;
            }else{
                ans = ans * 10 + 1;
                prev = 0;
            }
        }else{
            ans = ans * 10 + (a%2);
        }
        a /= 10;
    }

    while(b > 0){
        if(prev == 1){
            if(b % 2 == 1){
                ans = ans * 10 + 0;
                prev = 1;
            }else{
                ans = ans * 10 + 1;
                prev = 0;
            }
        }else{
            ans = ans * 10 + (b%2);
        }
        b /= 10;
    }
    if(prev == 1){
        ans = ans*10 + 1;
    }

    ans = reverse(ans);

    return ans;
}

string decimalToHexadecimal(int n){
    int x = 1;
    string ans = "";
    while(x <= n){
        x *= 16;
    }
    x /= 16;
    while(x > 0){
        int last = n/x;
        n -= last*x;
        x /= 16;
        if(last <= 9){
            ans += to_string(last);
        }else{
            char c = 'A' + last - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int decimalToOctal(int n){
    int x = 1;
    int ans = 0;
    while(x <= n){
        x *= 8;
    }
    x /= 8;
    while(x > 0){
        int last = n/x;
        n -= last*x;
        x /= 8;
        ans = ans*10 + last;
    }
    return ans;
}

int decimalToBinary(int n){
    int x = 1;
    int ans = 0;
    while(x <= n){
        x *= 2;
    }
    x /= 2;
    while(x > 0){
        int last = n/x;
        n -= last*x;
        x /= 2;
        ans = ans*10 + last;
    }
    return ans;
}

int hexadecimalToDecimal(string s){
    int x = 1;
    int ans = 0;
    for(int i = s.size()-1; i >= 0; i--){
        if(s[i] <= '9' && s[i] >= '0'){
            ans += (s[i]-'0')*x;
        }else if(s[i] >= 'A' && s[i] <= 'F'){
            ans += (s[i]-'A'+10)*x;
        }
        x *= 16;
    }
    return ans;
}

int binaryToDecimal(int n){
    int ans = 0;
    int x = 1;
    while(n > 0){
        int last = n % 10;
        ans += last * x;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int octalToDecimal(int n){
    int ans = 0;
    int x = 1;
    while(n > 0){
        int last = n % 10;
        ans += last * x;
        x *= 8;
        n /= 10;
    }
    return ans;
}

bool checkPythagorianTriplets(int a, int b, int c){
    int m = max(a, max(b, c));
    if(m == a){
        if(a*a == b*b + c*c){
            return true;
        }
    }else if(m == b){
        if(b*b == c*c + a*a){
            return true;
        }
    }else{
        if(c*c == a*a + b*b){
            return true;
        }
    }
    return false;
}

int sumOfFirstNNaturalNumbers(int n){
    return (n*(n+1)/2);
}

int main(){
    int T;
    cin >> T;

    while(T-- > 0){
        int a,b;
        cin >> a >> b;

        cout << addBinary(a,b) << endl;
    }
    return 0;
}