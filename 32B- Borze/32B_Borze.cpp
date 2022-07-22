#include <iostream>

using namespace std;

int main()
{
    string borze, s;

    cin >> borze;

    for(int i=0; i<borze.length(); i++){
        if(borze[i] == '-' && borze[i+1] == '-'){
            s += '2';
            i++;
        }else if(borze[i] == '-' && borze[i+1] == '.'){
            s += '1';
            i++;
        }else if(borze[i] == '.'){
            s += '0';
        }
    }

    cout << s << endl;
    return 0;
}
