#include <iostream>

using namespace std;

void strange(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            for (int j = 1; j <= n; j++) {
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}

int main() {
    strange(7);
}
