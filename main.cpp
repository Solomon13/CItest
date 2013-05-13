/* 
 * File:   main.cpp
 * Author: solomon
 *
 * Created on 11 Май 2013 г., 18:31
 */

#include <cstdlib>
#include <iostream>
#include "ClassHello.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    ClassHello *myclass=new ClassHello("Solomon");
    cout<<myclass->message()<<endl;
    
    delete myclass;
    return 0;
}

