#include <iostream>
#include <string>
using namespace std;

int main() {

    string names[5] = {"Ahmed", "Sara", "Mohamed", "Fatima", "Ali"};
    int ages[5] = {45, 40, 20, 17, 12};
    int size = 5;

    string keyName;
    cout << "Enter a name to search: ";
    cin >> keyName;

    bool found = false;

    for (int i = 0; i < size; i++) {
        if (names[i] == keyName) {
            cout << keyName << " was found and is aged " << ages[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Not found" << endl;
    }

    return 0;
}
