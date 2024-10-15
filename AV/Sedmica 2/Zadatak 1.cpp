#include <iostream>

using namespace std;

// Ovo je sve pseudo kod

void strange(int n) {
    for (int i = 1; i <= n; i++) {
        if (jeste_kvadrat_nekog_broja(i)) {
            for (int j = 1; j <= n; j++) {
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}

int main() {

}
