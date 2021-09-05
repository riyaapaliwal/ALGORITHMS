#include <iostream>
using namespace std;

int main() {
    string numbers[7];

    cout << "Enter Following subjects from your currnet semester: " << endl;

    //  store input from user to array
    for (int i = 0; i < 7; ++i) {
        cin >> numbers[i];
    }

    cout << "Your subjects are: ";

    //  print array elements
    for (int n = 0; n < 7; ++n) {
        cout << numbers[n] << "  ";
    }

    return 0;
}
