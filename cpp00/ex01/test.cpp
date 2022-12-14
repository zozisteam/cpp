#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Contact {
    string firstName;
    string lastName;
    string nickname;
};

int main() {

    Contact contacts[3] = {{"Johjjjjjjjjn", "Doe", "JD"}, {"Jane", "Doe", "Janey"}, {"Jack", "Doe", "Jacky"}};

    cout << right << setw(10) << "Index" << "|" << setw(10) << "First Name" << "|" << setw(10) << "Last Name" << "|" << setw(10) << "Nickname" << endl;

    for (int i = 0; i < 3; i++) {
        cout << right << setw(10) << i + 1 << "|";

        if (contacts[i].firstName.length() > 10) {
            contacts[i].firstName.resize(9);
            contacts[i].firstName += '.';
        }

        cout << right << setw(10) << contacts[i].firstName << "|";

        if (contacts[i].lastName.length() > 10) {
            contacts[i].lastName.resize(9);
            contacts[i].lastName += '.';
        }

        cout << right << setw(10) << contacts[i].lastName << "|";

        if (contacts[i].nickname.length() > 10) {
            contacts[i].nickname.resize(9);
            contacts[i].nickname += '.';
        }

        cout << right << setw(10) << contacts[i].nickname << endl;
    }

    return 0;
}