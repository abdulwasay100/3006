#include <iostream>
using namespace std;

int main() {
    int n = 10, t1 = 0, t2 = 1, thenextTerm;

    for (int i = 1; i <= n; ++i) {
        cout << t1 << " ";
        thenextTerm = t1 + t2;
        t1 = t2;
        t2 = thenextTerm;
    }

    return 0;
}
