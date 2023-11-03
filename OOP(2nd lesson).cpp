#include <iostream>
#include <vector>
#include "airport.h"
#include "Military.h"
#include "Passanger.h"
#include "Vantage.h"
#include "Plane.h"
using namespace std;
int main()
{
    /*cout << "Hello World!" << endl;
    int arr[5] = { 1, 2, 3, 4, 5 };
    int arr2[5];

    for (int i = 0; i < 5; i++) {
        arr2[i] = i;
    }

    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << endl;
    }*/


    /*vector<int> vector;
    vector.push_back(5);


    for (int i = 0;vector.size(); i++) {
        cout << vector[i] << endl;

    }*/

    Plane plane("base plane");
    airport Airport;
    Plane* militaryPlane = new Military("Militery plane");
    Plane* passangerPlane = new Passanger(" passenger plane");
    Plane* vantagePlane = new Vantage(" vantage  plane");
    int choice;
    Airport.addPlane(militaryPlane);
    Airport.addPlane(vantagePlane);
    Airport.addPlane(passangerPlane);

    while (true)
    {
        
        cout << "1-  add plane 2 - some fun" << endl;
        cin >> choice;
        if (choice == 2) {
            Airport.printAllPlanes();
        }
    }



}

