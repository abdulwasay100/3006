#include <iostream>


using namespace std;

int main() 
{
    int n = 10, t1 = 0, t2 = 1, the_next_Term;

    for (int i = 1; i <= n; ++i) {
        cout << t1 << " ";
        the_next_Term = t1 + t2;
        t1 = t2;
        t2 = the_next_Term;
    }

    return 0;
}
