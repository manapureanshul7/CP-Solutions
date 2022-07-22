#include <iostream>

using namespace std;

int main()
{
    string s;
    int numCap(0), numLow(0), i;

    cin >> s;

    int ary[s.length()];

    for(i=0; i<s.length(); i++){
        ary[i] = s[i];
        if(ary[i] <= 90){
            numCap++;
            /*cout<< s[i] << ": "<<ary[i]<<endl;
            cout << "Current Upper Case count: "<<numCap<< endl;*/
        }else{
            numLow++;
            /*cout<< s[i] << ": "<<ary[i]<<endl;
            cout << "Current Lower Case count: " << numLow <<endl;*/
        }
    }
   /* cout << "\n";

    cout << "Uppercase letters count: " << numCap <<endl;

    cout << "Lowercase letters count: " << numLow;*/

    if(numLow >= numCap){
        for(i=0;i<s.length();i++){
            if(ary[i] <=90){
                ary[i] = ary[i]+32;
            }
       }

    }else if(numCap>numLow){
       for(i=0;i<s.length();i++){
            if(ary[i] >90){
                ary[i] = ary[i]-32;
            }
        }
    }

    for(i=0; i<s.length(); i++){
        s[i] = ary[i];
        //cout << sResult[i];
    }

        cout << s ;


    return 0;
}
