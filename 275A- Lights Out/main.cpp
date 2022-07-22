#include <iostream>

using namespace std;

int main()
{
    int i, j, A[3][3] /*M[3][3]*/;
    int M[4][4] = {
//                    {1,1,1},
//                    {1,1,1},
//                    {1,1,1}
                    {1,1,1,1},
                    {1,1,1,1},
                    {1,1,1,1},
                    {1,1,1,1}
                    };

    for(i=0; i< 3; i++){
        for(j=0; j<3; j++){
            cin >> A[i][j];
            if(A[i][j]%2 != 0 ){
                M[i][j] = M[i][j] == 0 ? 1 : 0;
                M[i-1][j] = M[i-1][j] == 0 ? 1 : 0;
                M[i][j-1] = M[i][j-1] == 0 ? 1 : 0;
                M[i+1][j] = M[i+1][j] == 0 ? 1 : 0;
                M[i][j+1] = M[i][j+1] == 0 ? 1 : 0;
            }
        }
    }


//    for(i=0; i<3; i++){
//        for(j=0; j<3; j++){
//            if(A[i][j]%2 != 0 ){
//                M[i][j] = M[i][j] == 0 ? 1 : 0;
//                M[i-1][j] = M[i-1][j] == 0 ? 1 : 0;
//                M[i][j-1] = M[i][j-1] == 0 ? 1 : 0;
//                M[i+1][j] = M[i+1][j] == 0 ? 1 : 0;
//                M[i][j+1] = M[i][j+1] == 0 ? 1 : 0;
//            }
//        }
//    }*/
//
//    cout << "Matrix A" << endl;
//
//
//    for(i=0; i<3; i++){
//        for(j=0; j<3; j++){
//            cout << A[i][j] << " ";
//        }
//        cout << "\n";
//    }
//
//    cout << "Matrix M" << endl;*/
//    hello

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout << M[i][j]/* << " " */;
        }
        cout << "\n";
    }
    return 0;
}
