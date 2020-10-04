#ifndef __DATA_H_INCLUDED
#define __DATA_H_INCLUDED

#include <iostream>
#include <string>
#include "climate.h"
#include "region.h"
class data : public climate,public region{

public:
    data();
    data(double,double,std::string,std::string);
};


#endif // __DATA_H_INCLUDED
