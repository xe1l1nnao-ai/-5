#include <iostream>
#include <cstdlib>
using namespace std;

int subscription(int fee, int months = 1) {
    return fee * months;
}

int main() {
    cout << subscription(100) << endl;
    cout << subscription(100, 6) << endl;
    system("pause");
    return 0;
}