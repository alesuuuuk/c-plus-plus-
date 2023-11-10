#include <vector>
#include <iostream>
// including classes for task one
#include "HardwareProduct.h"
#include "ProductDevelopment.h"
#include "SoftwareProduct.h"

// including classes for task two
#include "Circle.h"
#include "Rectangle.h";
#include "BaseClass.h"
#include "Trapecia.h"
#include "Triangle.h"
// including classes for task three
#include "DesdLineTask.h"
#include "GreatTask.h"
#include "Text.h"
#include "DailyTask.h"



using namespace std;

int main()
{
    cout << "Hello World!" << endl << endl << endl << endl << endl;
    // task one 

    // creating objects of classes
    ProductDevelopment* softwareProduct = new SoftwareProduct();
    ProductDevelopment* hardwareProduct = new HardwareProduct();

    // calling methods
    softwareProduct->design();
    softwareProduct->produce();
    hardwareProduct->design();
    hardwareProduct->produce();
   

    // task two
    BaseClass* rectangle = new Rectangle(3, 6);
    BaseClass* circle =   new Circle(5);
    BaseClass* trapecia = new Trapecia(2, 4, 3);
    BaseClass* triangle = new Triangle(2, 3);
    

    cout << trapecia->calcSquare() << endl << triangle->calcSquare() << endl << circle->calcSquare() << endl << rectangle->calcSquare() << endl;

    // task threee
    vector <Text*> texts;
    Text* text = new Text("text");
    Text* dead = new DesdLineTask("dead", 12, 6);
    Text* great = new GreatTask("great");
    Text* daily = new DailyTask("daily", 16);

    texts.push_back(text);
    texts.push_back(dead);
    texts.push_back(great);
    texts.push_back(daily);

    for (auto i : texts) {
        i->showText();
        cout << endl;
    }


    


    



}