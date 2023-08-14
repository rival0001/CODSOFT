#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

const int NUM_ROWS = 5;
const int NUM_COLS = 6;
const double TICKET_PRICE = 110;

// Define a struct to represent a movie
struct Movie {
    string title;
    string time;
};

// Initialize movie listings
 vector<Movie> movies = {
    {"Gadar 2", "10:00 AM"},
    {"OMG 2", "01:00 PM"},
    {"Jailer", "04:00 PM"}
};

// Define a 2D array to represent seat availability
bool seats[NUM_ROWS][NUM_COLS] = {false};

void displayMovies() {
    cout << "Available Movies:" << endl;
    for (size_t i = 0; i < movies.size(); ++i) {
        cout << i + 1 << ". " << movies[i].title << " (" << movies[i].time << ")" << endl;
    }
}

void displaySeating() {
    cout << "Seating Plan:" << endl;
    for (int i = 0; i < NUM_ROWS; ++i) {
        for (int j = 0; j < NUM_COLS; ++j) {
            cout << (seats[i][j] ? "X" : "O") << " ";
        }
        cout << endl;
    }
}

int main() {
    int movieChoice;
    int row, col;

    displayMovies();
           cout << "Select a movie: ";
         cin >> movieChoice;

    if (movieChoice < 1 || movieChoice > movies.size()) {
           cout << "Invalid movie choice." << endl;
        return 1;
    }

    displaySeating();
      cout << "Select a row and column for your seat (e.g., 1 2): ";
    cin >> row >> col;

    if (row < 1 || row > NUM_ROWS || col < 1 || col > NUM_COLS || seats[row - 1][col - 1]) {
        cout << "Invalid seat selection." << endl;
        return 1;
    }

    seats[row - 1][col - 1] = true;

    double totalCost = TICKET_PRICE;
        cout << "Booking successful!" << endl;
        cout << "Movie: " << movies[movieChoice - 1].title << endl;
        cout << "Time: " << movies[movieChoice - 1].time << endl;
        cout << "Seat: Row " << row << ", Column " << col << endl;
        cout << "Total Cost: rs" << fixed << setprecision(2) << totalCost << endl;

    return 0;
}