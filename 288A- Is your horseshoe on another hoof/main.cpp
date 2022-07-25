#include <iostream>

using namespace std;

int main()
{
    int ary[4];

    for(int i=0; i< 4; i++){
        cin >> ary[i];
    }

    int i, j, countDistinct = 1;

    for(i=1; i<4; i++){
        for(j=0; j<i; j++){
            if(ary[i] == ary[j]){
                break;
            }
        }
        if(i == j){
            countDistinct++;
        }
    }

    cout << 4-countDistinct <<endl;
    return 0;
}
