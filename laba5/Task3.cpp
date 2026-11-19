#include <iostream>
#include <cstdlib>
using namespace std;

int traffic(int a, int b) {
    return a + b;
}

int traffic(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << traffic(10, 20) << endl;
    cout << traffic(10, 20, 30) << endl;
    system("pause");
    return 0;
}
