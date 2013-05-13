/* 
 * File:   ClassHello.cpp
 * Author: solomon
 * 
 * Created on 13 Май 2013 г., 22:25
 */

#include "ClassHello.h"

ClassHello::ClassHello() {
}

ClassHello::ClassHello(const ClassHello& orig) {
}

ClassHello::~ClassHello() {
}

ClassHello::ClassHello(const string& who)
{
   this->who=who; 
}
string ClassHello::message() const
{
    return (string)"Hello "+who;
}
