#include <iostream>
#include <vector>

using namespace std;

double brzo_stepenovanje(double y, int z) {
    // funkcija vraca y^z
    cout<< "Racunam" << y <<"^"<< z<<endl;

    if (z == 0) {
        return 1;
    }
    else if (z == 1) {
        return y;
    }
    else if (z % 2 == 1) {
        return brzo_stepenovanje(y*y, z/2) * y;
    }
    else {
        return brzo_stepenovanje(y*y, z/2);
    }
}

int main() {

}