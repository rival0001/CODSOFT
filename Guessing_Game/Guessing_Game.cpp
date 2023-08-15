
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    int secretNumber = rand() % 100 + 1;  // Generate a random number between 1 and 100
    
   cout << "Welcome to the Number Guessing Game!" <<endl;
   cout << "I'm thinking of a number between 1 and 100." << endl;
    
    int guess = 0;
    int attempts = 0;
    
    while (guess != secretNumber) {
        cout << "Take a guess: ";
        cin >> guess;
        attempts++;
        
        if (guess < secretNumber) {
            cout << "Too low! Try a higher number." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try a lower number." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts." << endl;
        }
    }
    
    return 0;
}
