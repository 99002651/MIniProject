#include "data.h"
#include <string>
data :: data(): climate(),region(){}
data :: data(double temp,double humidity,std::string state,std::string dist):
                                                                            climate(temp,humidity),
                                                                            region(state,dist){
                                                                            }

