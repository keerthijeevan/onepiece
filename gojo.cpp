#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess;

    cout << "Guess a number between 1 and 100\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secret)
            cout << "Too high!\n";
        else if (guess < secret)
            cout << "Too low!\n";
        else
            cout << "🎉 Correct! You guessed it.\n";

    } while (guess != secret);

    return 0


    // new techinque fir github
    
