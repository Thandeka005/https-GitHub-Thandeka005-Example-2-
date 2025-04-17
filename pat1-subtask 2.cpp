#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //Declare varibles for the three temperature readings
    int temp1 , temp2, temp3;

    //Prompt the user to input the temperature readings
    cout << "Enter the first temperature reading: ";
    cin >> temp1;

    cout << "Enter the second temperature reading: ";
    cin >> temp2;

    cout << "Enter the third temperature reading: ";
    cin >> temp3;

    //Check if the second reading is not more than 50 degrees apart from the first
    if (abs(temp2 - temp3) > 50){
        cout << "Reduce fryer heat before taking the third reading." << endl;
    }
    //Check if the third reading is less than 10 degrees compared to the first
    else if (abs(temp3 - temp1) < 10){
        cout << "Oil is not ready for frying!" <<  endl;
    }
    //Check if the third reading is between 150 and 190 degrees
    else if (temp3 >= 150 && temp3 <= 190) {
        cout << "You may start frying the Magwinyas." << endl;
    }
    //If the third reading is outside the expected range
    else {
        cout << "Oil is not ready for frying!" << endl;
    }
    return 0;
}
