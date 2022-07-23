#include <iostream>

using namespace std;

int main()
{
    int n,m(0), i;
    string s;

    cin >> n;
    cin >> s;

    for(i=0; i <s.length() ; i++){
        if(s[i] == s[i+1]){
            m++;
        }/*else if(s[i] != s[i+1]){
            cout << m;
            break;
        }*/
    }

    cout << m;
    return 0;
}
