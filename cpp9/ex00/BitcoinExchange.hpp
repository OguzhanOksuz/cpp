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
int getIntValue(std::string str);

#endif
