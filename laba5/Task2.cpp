#include <iostream>
#include <cstdlib>
using namespace std;

void spendGb(int& remaining) {
    if (remaining > 0) {
        --remaining;
    }
}

int main() {
    int gb = 3;
    spendGb(gb);
    cout << gb << endl;

    gb = 0;
    spendGb(gb);
    cout << gb << endl;

    system("pause");
    return 0;
}
