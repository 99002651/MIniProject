#ifndef __REGION_H_INCLUDED
#define __REGION_H_INCLUDED

#include <iostream>
#include <string>
class region{
    std::string m_state;
    std::string m_district;
public:
    region();
    region(std::string,std::string);
    std::string getState();
    std::string getDistrict();
};



#endif // __REGION_H_INCLUDED
