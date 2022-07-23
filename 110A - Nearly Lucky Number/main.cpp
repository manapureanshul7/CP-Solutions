#include <iostream>

using namespace std;

int main()
{
    int n(0), m;
    string s;

    cin >> s;

    for(int i=0; i<s.length(); i++){
        if(s[i] == '4' || s[i] == '7'){
            n++;
        }
    }

    if(n==4 || n==7){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
