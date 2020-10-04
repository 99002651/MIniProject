#include "climate.h"

climate :: climate(): m_temp(0.0),m_humidity(0.0){}
climate :: climate(double temp,double humidity): m_temp(temp),m_humidity(humidity){}

double climate :: getTemp(){
    return m_temp;
}

double climate :: getHumidity(){
    return m_humidity;
}
