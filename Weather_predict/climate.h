#ifndef __CLIMATE_H_INCLUDED
#define __CLIMATE_H_INCLUDED

#include <iostream>
class climate{
    double m_temp;
    double m_humidity;
public:
    climate();
    climate(double,double);

    double getTemp();
    double getHumidity();

};




#endif // __CLIMATE_H_INCLUDED
