#include <iostream>
#include <string>

using namespace std;

int main() {
    // Predefined users
    string users[3] = {"user1", "user2", "user3"};
    string passwords[3] = {"pass1", "pass2", "pass3"};

    int choice;
    string username, password;
    bool isLoggedIn = false;

    while (true) {
        cout << "\n1. Login User" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter your username: ";
            cin >> username;
            cout << "Enter your password: ";
            cin >> password;

            // Check your username and password
            for (int i = 0; i < 3; ++i) {
                if (users[i] == username && passwords[i] == password) {
                    cout << "Login successful! Welcome, " << username << "." << endl;
                    isLoggedIn = true;
                    break;
                }
            }

            if (!isLoggedIn) {
                cout << "Login failed! Username or password is incorrect." << endl;
            } else {
                break;
            }
        } else if (choice == 2) {
            cout << "Exiting..." << endl;
            break;
        } else {
            cout << "Invalid choice, please try again." << endl;
        }
    }

    return 0;
}