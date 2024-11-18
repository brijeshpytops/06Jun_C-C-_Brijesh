/*
Exception handling in C++ is a mechanism that allows a program to deal with unexpected situations (exceptions) that occur during runtime. It provides a way to manage errors and exceptional conditions without crashing the program.

syntax: 

try {
    // Code that may throw an exception
} catch (const std::exception& e) {
    // Handle the exception
    std::cerr << "Exception caught: " << e.what() << std::endl;
}

*/

// Example :

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int bal = 1000, wb;

    cout << "Enter Amount: ";
    cin >> wb;

    try {
        if (wb < 0) {
            throw out_of_range("Withdrawal amount cannot be negative.");
        } else if (wb > bal) {
            throw invalid_argument("Insufficient balance.");
        } else {
            cout << "Now your remaining balance: " << bal - wb << endl;
        }
    } catch (out_of_range& err) { 
        cerr << "Range Error: " << err.what() << endl;
    } catch (invalid_argument& err) { 
        cerr << "Invalid Argument Error: " << err.what() << endl;
    } catch (...) { 
        cerr << "Unknown Error Occurred." << endl;
    }

    return 0;
}
