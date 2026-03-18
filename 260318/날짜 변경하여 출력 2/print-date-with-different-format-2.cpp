#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int mm, dd, yyyy;
    char d = '.';

    cin >> mm;
    cin.get();
    cin >> dd;
    cin.get();
    cin >> yyyy;

    cout << yyyy << d << mm << d << dd;

    return 0;
}