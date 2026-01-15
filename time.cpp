#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t now = time(0);        // get current time
    char* dt = ctime(&now);      // convert to string

    cout << "Current date and time: " << dt << endl;

    return 0;
}
