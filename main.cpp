/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: cchrysler
 *
 * Created on May 9, 2021, 4:23 PM
 */


#include <iostream>

#include "ccTestClass.h"

using namespace std;

//example class
class MyClass {       // The class
public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (std::string variable)

    MyClass(int _myNum, string _myString) { // Constructor with parameters
        myNum = _myNum;
        myString = _myString;
    }
    
    //Destructor to free up memory when the object is no longer needed
    //it will called automatically when object falls out of scope
    ~MyClass() {
        cout<< "Destructor of MyClass was called" << endl;
    }

    void helloWold() {  // Method/function defined inside the class
        cout << "Hello World!\n";
    }

    string echo(string _input) {  // Method/function defined inside the class
        return _input;
    }

    string reverse(string _input) {  // Method/function defined inside the class
        int n = _input.length();
        for (int i = 0; i < n/2; i++)
        {
            swap(_input[i], _input[n - i -1]);
        }
        return _input;
    }

};

//entry point into the application
int main()
{
    //yay, obligatory first program shit
    cout << "Hello World!\n";

    //declarations and pointers, understand REFERENCE VS VALUE
    int c = 5;
    cout << "c = " << c << "\n";
    int* p = &c;// pointer p points at the address REFERENCE of c
    cout << "p's reference = " << p << endl;
    cout << "p's value = " << *p << endl;
    int c2 = *p;//sets new variable c2 to the current VALUE of p
    cout << "c2 = " << c2 << endl;

    //class example
    //constructor to create the class and initialize values
    MyClass m(5, "you suck!");
    //access a class variable
    cout << m.myString << endl;
    //access a class method
    cout << m.echo("Check out the big brain on Brad") << endl;
    //call your Hello World shit, object oriented style
    m.helloWold();

    //class pointer
    //notice the constructor is slightly different
    MyClass* classPointerExample = new MyClass(5, "sdrawkcab siht daer");
    //access class functions and variables
    //notice the "->" instead of the "."
    cout << classPointerExample->reverse(classPointerExample->myString) << endl;
    
    //now lets access a class defined elsewhere
    ccTestClass* cctc = new ccTestClass(5);
    cout << "cctc->getSomeInt() = " << cctc->getSomeInt() << endl;
    //change it to 7
    cctc->setSomeInt(7);
    cout << "cctc->getSomeInt() = " << cctc->getSomeInt() << endl;


    //leave this here so you know when the program is done
    cout << "Done!\n";
    return 0;
}

