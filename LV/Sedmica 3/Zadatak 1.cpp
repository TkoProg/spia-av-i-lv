#include <iostream>
#include <vector>

using namespace std;

bool trazi(vector<int> &A, int v) {
    for (auto a : A) {
        if (a == v) return true;
    }
    return false;
}

int main() {
    vector<int> B{1,2,3,4,5,6};
    cout<<trazi(B, 3);
    cout<<trazi(B, 9);
}