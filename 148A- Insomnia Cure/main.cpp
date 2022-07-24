#include <iostream>

using namespace std;

int main()
{
    int k, l, m, n, d, total(0);
    cin >> k >> l >> m >> n >>d;

    int ary[d];

    for(int i=0; i<d; i++){
        ary[i] = 1;
    }

    for(int i=k-1; i<d; i=i+k){
        ary[i] = 0;
        total++;
    }

    for(int i= l-1; i<d; i=i+l){
        if(ary[i] != 0){
            ary[i] = 0;
            total++;
        }
    }

    for(int i = m-1; i<d; i=i+m){
        if(ary[i]!=0){
            ary[i] = 0;
            total++;
        }
    }

    for(int i = n-1; i<d; i=i+n){
        if(ary[i]!=0){
            ary[i] = 0;
            total++;
        }
    }

    cout << total <<endl;

    return 0;
}
