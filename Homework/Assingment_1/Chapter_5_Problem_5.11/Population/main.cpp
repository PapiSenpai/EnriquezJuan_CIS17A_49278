/* 
 * File:   main.cpp
 * Author: Juan Enriquez
 * Project: Population
 * Created on September 6, 2020, 11:36 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*************************************
 * The purpose of this program is to
 * predict the rapid incline of our
 * population.
 *************************************/
int main(int argc, char** argv) {

    int organism;
    float daily_increase;
    int days;
    
    cout << "What will be the number if starting organisms?" << endl;
    cin >> organism;
    cout << "How much will the population increase?" << endl;
    cin >> daily_increase;
    cout << "How many days will the simulation last?" << endl;
    cin >> days;
    
    cout << "Population First Day: " << organism << endl;
    cout << "Expected growth : " << daily_increase << "%" << endl << endl;
    // FIX EQUATION
    if (organism > 2 && daily_increase > 0 && days > 1)
    {
        for (int counter = 1; counter <= days ; counter++ )
        {
            int new_population = ((organism / daily_increase) * counter);
            float Total = new_population + organism;
            
            cout << "Day :" << counter << endl;
            cout << "New Population: " << Total << endl;
         
            counter;
        }
    }
    else
        cout << "Insert a greater number. The amount of organisms needs to be"
                " greater than 2, the increase in population" << endl 
             << "and number of days can not be negative. Try again.";
    return 0;
}

