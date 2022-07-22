#include <iostream>

using namespace std;

int main()
{
    int n, t;
    string s;
    char swap;

    cin >> n >> t;
    //cout << "n: " <<n << ", t: "<< t <<endl;

    cin >> s;
    for(int i = 0; i<t; i++){
      for(int j=0; j<n; j++){
        if(s[j] == 'B' && s[j+1] == 'G'){
//            swap = s[j];
//            s[j] = s[j+1];
//            s[j+1] = swap;

            s[j] = 'G';
            s[j+1] = 'B';
            j++;
        }
      }
    }

    cout << s << endl;

    return 0;
}
