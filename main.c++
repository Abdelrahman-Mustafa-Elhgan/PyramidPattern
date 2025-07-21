#include <iostream>
using namespace std;


int main() {

    // Loops => App Pyramid
    int rows; 
    cout << "Enter number of rows for pyramid: ";
    cin >> rows;

    //Iteration on rows
    for (int i = 1; i <= rows; i++) {
        // Iteration to print spaces
        for (int s = 1; s <= rows - i; s++) {
            cout << " ";
        }
        // Iteration to print stars
        for (int j = 1; j <= (i * 2) - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}