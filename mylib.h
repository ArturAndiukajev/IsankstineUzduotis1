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
#include <cctype>
#include <set>

using std::string;
using std::map;
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::cerr;
using std::set;
using std::regex;
using std::smatch;


string skaitymas(string Fname);
map<string,int> zodziuPasikartojimas(const string& tekstas);
void isvedimas(map<string, int> zodziu_kiekis, string fileName);
void crossReference(const string& tekstas);
void rastiURL(const string& tekstas, set<string>& nuoroduAibe);
void isvedimasURL(set<string>& nuoroduAibe, string fileName);
#endif // MYLIB_H_INCLUDED
