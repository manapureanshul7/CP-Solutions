#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int ary[n];

    for(int i =0; i< n; i++){
        cin >> ary [i];
    }

    int amazing(0), maxx = ary[0], minn = ary[0];
    for(int i=1; i<n; i++){
       if(ary[i] < minn){
            amazing++;
            minn = ary[i];
       }else if(ary[i] > maxx){
            amazing++;
            maxx = ary[i];
       }
    }

    cout << amazing << endl;
    return 0;
}
