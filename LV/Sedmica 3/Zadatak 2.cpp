#include <iostream>
#include <vector>

using namespace std;

bool pomocna_trazi(vector<int> &A, int v, int p, int k) {
    // p - pocetak
    // k - kraj
    // trazimo v od A[p] do A[k] (ukljucujuci p i k)
    // mora vrijediti p <= k

    int sredina = (p + k) / 2;
    if (v == A[sredina]) {
        return true;
    }
    else if (v < A[sredina]) {
        if (sredina - 1 >= p)
            pomocna_trazi(A, v, p ,sredina - 1);
    }
    else { // v > A[sredina]
        if (sredina + 1 <= k)
            pomocna_trazi(A, v, sredina + 1, k);
    }
}

bool binarno_trazi(vector<int> &A, int v) {
    return pomocna_trazi(A, v, 0, A.size() - 1);
}

int main() {
    vector<int> B{1,2,3,4,5,6};
    cout<<binarno_trazi(B, 3);
    cout<<binarno_trazi(B, 9);
}