#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 20 + 1, guess, attempts = 0;
    cout << "Guess a number between 1 and 20!\n";
    while (cin >> guess) {
        attempts++;
        if (guess == secret) { cout << "Correct! " << attempts << " tries.\n"; break; }
        cout << (guess < secret ? "Too low!\n" : "Too high!\n");
    }
}
