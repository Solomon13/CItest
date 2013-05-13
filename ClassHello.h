/* 
 * File:   ClassHello.h
 * Author: solomon
 *
 * Created on 13 Май 2013 г., 22:25
 */

#ifndef CLASSHELLO_H
#define	CLASSHELLO_H
#include <iostream>

using namespace std;
class ClassHello {
public:
    ClassHello();
    ClassHello(const ClassHello& orig);
    ClassHello(const string& who);
    virtual ~ClassHello();
    string message()const;
private:
    string who;
};

#endif	/* CLASSHELLO_H */

