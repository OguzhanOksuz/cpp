#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>


int charCount(std::string str, char ch);
int isFormat(std::string str);
int checkDate(std::string str);
int checkValue(std::string str);
int getIntDate(std::string str);
double getIntValue(std::string str);
int  checkLineValue(std::string str);
double getValue(std::map<int, double> dataMap, int date, double value);
#endif
