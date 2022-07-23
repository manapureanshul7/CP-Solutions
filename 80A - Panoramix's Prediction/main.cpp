#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int nextPrime(int x){
    int y =x;
    for(int i=2; i <=sqrt(y); i++){
        if(y%i == 0){
//            cout << "y value: "<< y <<endl;
//            cout << "i value: "<< i <<endl;
//            y = y+2;
            return nextPrime(y+2);
//            cout << "Loop Executed \n";
            //return (y);
        }
    }
    return y;
}


int main()
{
    int n,m, x(0);
    cin >> n >> m;
    x = n+2;
//    x = nextPrime(n+2);
//    cout << x;
    if(n = 2 && m == 3){
        cout << "YES\n";
        exit(0);
    }
    nextPrime(x) == m ? cout << "YES\n" : cout << "NO\n";
    return 0;
}
