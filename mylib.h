#ifndef MYLIB_H_INCLUDED
#define MYLIB_H_INCLUDED

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>
#include <regex>
#include <string>

using std::string;
using std::map;
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;


string skaitymas(string Fname);
map<string,int> zodziai(const string& tekstas);

#endif // MYLIB_H_INCLUDED
