#ifndef I_PRINTABLE_H
#define I_PRINTABLE_H
#include <iostream>
class I_Printable
{
friend std::ostream &operator <<(std::ostream &os, I_Printable &obj);   //As here we'll call the print function for obj, so as print function is a virtual function and
public:                                                                                                                 // every class which inherits from I_Printable now have to declare its own version of print, there 
    virtual void print(std::ostream &os) = 0;                                                               //will be dynamic binding and the suitable class print method will be called even when base class pointers are used
    virtual ~I_Printable() = default;
};

#endif // I_PRINTABLE_H
