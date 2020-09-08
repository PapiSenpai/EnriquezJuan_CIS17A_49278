/* 
 * Author: Juan Enriquez
 * 7th Edition
 * Chapter :4
 * Problem: 4.10 Software Sales
 * Created on August 28, 2020, 12:29 PM
 */


#include <iostream>
#include <iomanip>

using namespace std;

/**********************************
 * This program will let user input
 * the number of bundles wanted and
 * then the program will put in
 * discounts and then calculate
 * the cost.
 **********************************/
int main(int argc, char** argv) 
{
    // Datatypes and Values
    int bundle = 99; // OUPUT - How much each bundle costs
    int num; // INPUT - the amount of bundles wanted
    float dis_1 = 1.2; // OUTPUT - discount of amount given
    float dis_2 = 1.3; // OUTPUT - discount of amount given
    float dis_3 = 1.4; // OUTPUT - discount of amount given
    float dis_4 = 1.5; // OUTPUT - discount of amount given
    float Total_Amount; // OUTPUT - the total cost
    
    cout << "How many bundles would you Like?" << endl;
    cin >> num;
    // Setting decimal placement
    cout << setprecision(2) << fixed;
    
    if (num > 0) // To catch any negative numbers
    {
     // if statement to direct the amount wanted to the right discounts
     if (num <= 19)
       {
          Total_Amount = (num * bundle) / dis_1;
          cout << "The total amount is " << Total_Amount;
       }
     else if (num >= 20 && num <= 49)
       {
          Total_Amount = (num * bundle) / dis_2;
          cout << "The total amount is " << Total_Amount;
       }
     else if (num >= 50 && num <= 99)
       {
          Total_Amount = (num * bundle) / dis_3;
          cout << "The total amount is " << Total_Amount;
       }
      else
       {
          Total_Amount = (num * bundle) / dis_4;
          cout << "The total amount is " << Total_Amount;
       }
    }
    else
        cout << "That's not a valid input!"; // Output if a character datatype or anything negative is typed in
    
    return 0;
}

