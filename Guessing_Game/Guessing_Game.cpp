
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));  // Seed the random number generator with the current time
    
    int secretNumber = rand() % 100 + 1;  // Generate a random number between 1 and 100
    
    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I'm thinking of a number between 1 and 100." << std::endl;
    
    int guess = 0;
    int attempts = 0;
    
    while (guess != secretNumber) {
        std::cout << "Take a guess: ";
        std::cin >> guess;
        attempts++;
        
        if (guess < secretNumber) {
            std::cout << "Too low! Try a higher number." << std::endl;
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try a lower number." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts." << std::endl;
        }
    }
    
    return 0;
}
