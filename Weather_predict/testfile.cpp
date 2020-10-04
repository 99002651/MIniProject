#include "gtest/gtest.h"
#include "Weather_changes.h"
#include <iostream>
#include <list>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>
#include <fstream>
#include<cstdlib>

namespace{
class WeatherTest : public ::testing::Test {

protected:
  void SetUp(){

std::fstream fin;
fin.open("data.csv");
std::vector<std::string> row;

std::string line, word;

 while(!fin.eof()){
    row.clear();
    getline(fin,line);

    std::stringstream s(line);

    while(getline(s,word,',')){
        row.push_back(word);
    }

    double temp,humidity;
    std::string state,district;
    std::vector<std::string> strg;
    std::vector<double> num;

   /*for(int i=0; i < 2;i++){
       //std::string  str = row[i];
       strg.push_back(str);
   }*/

   for(int i=2; i < 4;i++){
       double n = atof(row[i].c_str());
       num.push_back(n);
   }

    state = strg[0];
    district = strg[1];
    temp = num[2];
    humidity = num[3];
}
}
void TearDown() {}

Weather_changes obj;
};


TEST_F(WeatherTest,maxtemp)
{
    EXPECT_EQ(24.8,obj.MaxTemperature());
}

TEST_F(WeatherTest,mintemp)
{
    EXPECT_EQ(24.8,obj.minTemperature());
}
TEST_F(WeatherTest,maxHumidity)
{
    EXPECT_EQ(2.8,obj.MaxHumidity());
}
TEST_F(WeatherTest,minhumidity)
{
    EXPECT_EQ(24.8,obj.MinHumidity());
}

}
