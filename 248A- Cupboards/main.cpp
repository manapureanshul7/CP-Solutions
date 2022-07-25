#include <iostream>

using namespace std;

int main()
{
    int n, leftO(0), leftC(0), rightO(0), rightC(0), steps(0);
    cin >> n;

    int ary[n], arr[n];

    for(int i=0; i<n; i++){
        cin >> ary[i] >> arr[i];
    }

    for(int i=0; i<n; i++){
        if(ary[i] == 1){
            leftO++;
        }else{
            leftC++;
        }

        if(arr[i] == 1){
            rightO++;
        }else{
            rightC++;
        }
    }

    if(leftO < leftC){
        steps += leftO;
    }else{
        steps += leftC;
    }

    if(rightO < rightC){
        steps += rightO;
    }else{
        steps += rightC;
    }

    cout << steps <<endl;
    return 0;
}
