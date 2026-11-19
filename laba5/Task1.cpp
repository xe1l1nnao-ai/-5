#include <iostream>
#include <cstdlib>
using namespace std;

int trafficCost(int costPerGb, int usedGb) {
    return costPerGb * usedGb;
}

int main() {
    cout << trafficCost(5, 10) << endl;
    system("pause");
    return 0;
}