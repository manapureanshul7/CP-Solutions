#include <iostream>

using namespace std;

//string beautiful_year(int year){
//    string s;
//    while(1){
//        year++;
//        s = year;
//        for(int i=0; i<3; i++){
//            for(int j = i+1; j<4; j++){
//                if(s[i] == s[j]){
//
//                }else{
//                    return s;
//                }
//        }
//    }
//    }
//}

int main()
{
    int year;
    string s;

    cin >> year;
    while(1){
        year++;
        s = to_string(year);

        if(s[0]!=s[1] && s[0]!=s[2] && s[0]!=s[3] && s[1]!=s[2] && s[1]!=s[3] && s[2] != s[3]){
            cout << s << endl;
            break;
        }
    }

    //cout << beautiful_year(year) << endl;
    return 0;
}
