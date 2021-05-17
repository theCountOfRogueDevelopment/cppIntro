/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "ccTestClass.h"
#include <iostream>

using namespace std;

ccTestClass::~ccTestClass()
{
    cout << "Destructor of ccTestClass was called" << endl;
}

ccTestClass::ccTestClass(int _parameter)
{
    someInt = _parameter;
}
void ccTestClass::setSomeInt(int _parameter)
{
    someInt = _parameter;
}