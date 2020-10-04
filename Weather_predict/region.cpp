#include "region.h"

region :: region(): m_state(""),m_district(""){}
region :: region(std::string state,std::string district): m_state(state),m_district(district){}

std::string region :: getState(){
    return m_state;
}

std::string region :: getDistrict(){
    return m_district;
}
