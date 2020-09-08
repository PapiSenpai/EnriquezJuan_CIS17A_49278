/* 
 * Author: Juan Enriquez
 * 7th Edition
 * Chapter :
 * Problem: 3.12 Monthly Sales Tax
 * Created on August 28, 2020, 12:29 PM
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*******************************************************
 * For this project it will output a monthly sales tax
 * report.
 *******************************************************/
int main(int argc, char** argv) 
{
    // Datatypes and Values
    const float State_Tax = 1.02; // Percentage for state tax
    const float Contry_Tax = 1.04; // Percentage for country tax
    string month; // Input month
    string year; // Inpuit year
    int Total_Amount; // the total amount of money
    
    // Input values for each question
    cout << "What is the month?" << endl;
    cin >> month;
    cout << "What is the year?" << endl;
    cin >> year;
    cout << "What is the total amount to be collected?" << endl;
    cin >> Total_Amount;
    
    // Equations for tax returns
    float Sales_After_Tax = Total_Amount / 1.06;
    float State_Sales_Tax = Total_Amount - (Total_Amount / State_Tax);
    float Contry_Sales_Tax =Total_Amount - (Total_Amount / Contry_Tax);
    float Total_Sales_Tax = State_Sales_Tax + Contry_Sales_Tax;
    
    // Set decimal placement
    cout << setprecision(2) << fixed;
    // Output
    cout << endl << endl << "Month : " << month << endl;
    cout << "Year  : " << year << endl;
    cout << "------------------------------" << endl;
    cout << "Total Collected:" << setw(5) <<"$ " << Total_Amount << endl;
    cout << "Sales:" << setw(15) << "$ " << Sales_After_Tax << endl;
    cout << "Country Sales Tax:" << setw(3) << "$ " << Contry_Sales_Tax << endl;
    cout << "State Sales Tax:" << setw(5) << "$ " << State_Sales_Tax << endl;
    cout << "Total Sales Tax:" << setw(5) << "$ " << Total_Sales_Tax;

    
    return 0;
}

