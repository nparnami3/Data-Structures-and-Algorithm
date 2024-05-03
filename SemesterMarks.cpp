#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int num_semesters;
    cout << "Enter number of semesters: ";
    cin >> num_semesters;

    for (int sem = 1; sem <= num_semesters; ++sem) {
        int num_subjects;
        cout << "Enter number of subjects in semester " << sem << ": ";
        cin >> num_subjects;

        int marks[num_subjects]; 

        cout << "Marks obtained in semester " << sem << ":" << endl;
        for (int sub = 0; sub < num_subjects; ++sub) {
            cout << "Enter mark for subject " << sub + 1 << ": ";
            cin >> marks[sub];

            if (marks[sub] < 0 || marks[sub] > 100) {
                cout << "You have entered an invalid mark." << endl;
                return 0;
            }
        }

        int max_mark = *max_element(marks, marks + num_subjects); // Find maximum mark using std::max_element

        cout << "Maximum mark in semester " << sem << ": " << max_mark << endl;
    }

    return 0;
}
