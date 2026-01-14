#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<string> names(n);
    vector<int> marks(n);

    for(int i = 0; i < n; i++) {
        cout << "\nEnter name of student " << i + 1 << ": ";
        cin >> names[i];
        cout << "Enter marks of " << names[i] << ": ";
        cin >> marks[i];
    }

    int sum = 0, highest = marks[0];
    string topper = names[0];

    for(int i = 0; i < n; i++) {
        sum += marks[i];
        if(marks[i] > highest) {
            highest = marks[i];
            topper = names[i];
        }
    }

    cout << "\n----- Student Report -----\n";
    for(int i = 0; i < n; i++) {
        cout << names[i] << " : " << marks[i] << endl;
    }

    cout << "\nAverage Marks = " << (float)sum / n << endl;
    cout << "Topper = " << topper << " (" << highest << " marks)" << endl;

    return 0;
}
