/* 
 * File:   main.cpp
 * Author: Juan Enriquez
 * Project: Property Tax
 * 
 * Created on September 6, 2020, 8:37 PM
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/***************************************
 * For this project it will display the
 * property tax that is owed as well as
 * assessment value of the property.
 ***************************************/
int main(int argc, char** argv) {
    
    // Datatypes and Values
    const float Property_Tax = 1.6; // The property tax
    float Ass_Tax = 0.64; // The assessment tax
    int acre = 10000; // amount for each single acre
    float num; // Input for amount of acres desired
    // Input
    cout << "How many acres of land do you want to purchase?" << endl;
    cin >> num;
    
    // Equations
    float total_cost = acre * num;
    float P_tax = total_cost / Property_Tax;
    float A_tax = (P_tax / 100) * 0.64;
    // Output
    cout << setprecision(2) << fixed;
    cout << endl << "Actual Price" << endl;
    cout << "---------------" << endl;
    cout << "Amount of Acres : " << num << endl;
    cout << "Property Tax : " << P_tax << endl;
    cout << "Assessment Tax : " << A_tax << endl;
    return 0;
}

