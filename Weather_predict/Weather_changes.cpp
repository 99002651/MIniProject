#include "region.h"
#include "Weather_changes.h"
#include "climate.h"
#include <list>
#include <vector>
#include <iterator>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

double Weather_changes::MaxTemperature(){
    std::vector<climate> :: iterator iter = regions.begin();
    double maxi = iter->getTemp();
    ++iter;
    for(;iter != regions.end();++iter){
        if(maxi < iter->getTemp()){
            maxi = iter->getTemp();
        }
    }
    return maxi;
}
double Weather_changes::minTemperature(){
    std::vector<climate> :: iterator iter = regions.begin();
    double mini = iter->getTemp();
    ++iter;
    for(;iter != regions.end();++iter){
        if(mini > iter->getTemp()){
            mini = iter->getTemp();
        }
    }
    return mini;
}

double Weather_changes::MaxHumidity(){
    std::vector<climate> :: iterator iter = regions.begin();
    double maxi = iter->getHumidity();
    ++iter;
    for(;iter != regions.end();++iter){
        if(maxi < iter->getHumidity()){
            maxi = iter->getHumidity();
        }
    }
    return maxi;
}
double Weather_changes::MinHumidity(){
    std::vector<climate> :: iterator iter = regions.begin();
    double mini = iter->getHumidity();
    ++iter;
    for(;iter != regions.end();++iter){
        if(mini > iter->getHumidity()){
            mini = iter->getHumidity();
        }
    }
    return mini;
}

/*void Weather_changes::checkConditionCloudy(){

}*/

