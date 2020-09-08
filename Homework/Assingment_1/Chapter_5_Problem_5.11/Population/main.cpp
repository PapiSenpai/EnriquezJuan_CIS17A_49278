/* 
 * Author: Juan Enriquez
 * 7th Edition
 * Chapter :5
 * Problem: 5.11 Population
 * Created on August 28, 2020, 12:29 PM
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/*************************************
 * The purpose of this program is to
 * predict the rapid incline of our
 * population.
 *************************************/
int main(int argc, char** argv) {

    // Datatypes and Valuse
    int organism;
    float daily_increase;
    int days;
    // Output
    cout << "What will be the number if starting organisms?" << endl;
    cin >> organism;
    cout << "How much will the population increase?" << endl;
    cin >> daily_increase;
    cout << "How many days will the simulation last?" << endl;
    cin >> days;
    
    cout << "Original Population : " << organism << endl;
    cout << "Expected growth : " << daily_increase << "%" << endl << endl;

    // If statement to catch any invalid answers
    if (organism > 2 && daily_increase > 0 && days > 1)
    {
        //for loop to log the days
        for (int counter = 1; counter <= days ; counter++ )
        {                           
            float percentage = daily_increase / 100; // what the equation will use as the percent increase
            organism += (organism * percentage); // outputs the new population
            
            cout << "Day :" << counter << endl;
            cout << "New Population: " << organism << endl;
            
            counter; 
        }
    }
    else
        cout << "Insert a greater number. The amount of organisms needs to be"
                " greater than 2, the increase in population" << endl 
             << "and number of days can not be negative. Try again.";
    return 0;
}

