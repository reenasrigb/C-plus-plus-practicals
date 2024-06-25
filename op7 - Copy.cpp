#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << (num > 0 ? "Positive" : (num < 0 ? "Negative" : "Zero")) << endl;
    return 0;
}
-
