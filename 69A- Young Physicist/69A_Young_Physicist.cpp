#include <iostream>

using namespace std;

int main()
{
    int inputNum, x, y, z, xsum(0), ysum(0), zsum(0);
//    cout << "Enter the number of Inputs: ";
    cin >> inputNum;

    while(inputNum >0){
//        cout << "Enter X Y Z: ";
        cin >> x >> y >> z;

        xsum += x;
        ysum += y;
        zsum += z;
        inputNum--;
    }

    if( xsum==0 && ysum==0 && zsum==0){
        cout<< "YES" <<endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
