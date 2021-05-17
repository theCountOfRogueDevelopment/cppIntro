/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ccTestClass.h
 * Author: cchrysler
 *
 * Created on May 9, 2021, 6:47 PM
 */

#ifndef CCTESTCLASS_H
#define CCTESTCLASS_H

class ccTestClass
{
private:
    int someInt;
public:
    ccTestClass(int _parameter);
    ~ccTestClass();
    void setSomeInt(int _parameter);
    int getSomeInt()
    {
        return someInt;
    }
};

#endif /* CCTESTCLASS_H */

