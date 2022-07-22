#include <iostream>

using namespace std;

int main()
{
    string s;

    cin >> s;
    int i;

    i = s[0];

    if(i > 91){
        i = i-32;
    }

    s[0] = i;

    cout << s;
    return 0;
}
