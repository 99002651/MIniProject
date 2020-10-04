#ifndef __WEATHER_CHANGES_H_INCLUDED
#define __WEATHER_CHANGES_H_INCLUDED

#include "region.h"
#include "climate.h"
#include <list>
#include <vector>
#include <iterator>
#include <string>
class Weather_changes{
    std :: vector <climate> regions;

public:
    double MaxTemperature();
    double minTemperature();
    double MaxHumidity();
    double MinHumidity();
    //void checkConditionCloudy();
};


#endif // __WEATHER_CHANGES_H_INCLUDED
