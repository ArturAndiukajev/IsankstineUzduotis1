#include "mylib.h";

//----------------------------------------------------------------------------------
string skaitymas(string Fname)
{
    ifstream input_file(Fname);
    if (!input_file.is_open())
    {
        cout << "Failo atidarymas negalimas: " << Fname << endl;
        exit(1);
    }
    std::stringstream bufferis;
    bufferis << input_file.rdbuf();
    string tekstas = bufferis.str();
    return tekstas;
}
//--------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------
map<string,int> zodziai(const string& tekstas)
{
    map<string,int> zodziu_sk;
    std::istringstream iss(tekstas);
    string zodis;

    while (iss >> zodis) {
        zodis.erase(std::remove_if(zodis.begin(), zodis.end(), ispunct), zodis.end());
        std::transform(zodis.begin(), zodis.end(), zodis.begin(), ::tolower);
        zodziu_sk[zodis]++;
    }
    return zodziu_sk;
}
//------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------
