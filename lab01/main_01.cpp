#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    cout<<"CountBits(9):" << countBits(9)<<endl;
     for (int i = 0; i < 35; ++i) {
        int n = 0;
        if (setBit(n, i)) {
            cout << i << " ---> " << n << endl;
        } else {
            cout << "Impossible operation!" << endl;
        }
    }
    return 0;
}
