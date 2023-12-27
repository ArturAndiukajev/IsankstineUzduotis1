#include "mylib.h";

//----------------------------------------------------------------------------------
string skaitymas(string Fname)
{
    ifstream input_file(Fname);
    if (!input_file.is_open())
    {
        cerr << "Failo atidarymas negalimas: " << Fname << endl;
        exit(1);
    }
    std::stringstream bufferis;
    bufferis << input_file.rdbuf();
    string tekstas = bufferis.str();
    input_file.close();
    return tekstas;
}
//--------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------
map<string,int> zodziai(const string& tekstas)
{
    map<string,int> zodziu_sk;
    std::istringstream iss(tekstas);
    string zodis;

    while(iss>>zodis)
    {
        while (!isalnum(zodis.front()) && !zodis.empty())
        {
            zodis.erase(zodis.begin());
        }
        while (!isalnum(zodis.back()) && !zodis.empty())
        {
            zodis.pop_back();
        }
        std::transform(zodis.begin(), zodis.end(), zodis.begin(), ::tolower);
        zodziu_sk[zodis]++;
    }
    return zodziu_sk;
}
//------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------
void isvedimas(map<string, int> zodziu_kiekis, string fileName)
{
    ofstream outputFile(fileName);
    if (!outputFile.is_open())
    {
        cerr << "Failo atidarymo klaida: "<<fileName<<endl;
        return;
    }
    for (const auto& pair : zodziu_kiekis)
    {
        if (pair.second>1)
        {
            outputFile<<pair.first<<": "<<pair.second<<" kartus"<<endl;
        }
    }
    outputFile.close();
}
//----------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------
void crossReference(const string& tekstas)
{
    std::istringstream iss(tekstas);
    map<string, set<int>> wordOccurrences;
    string zodis;
    int eilute = 1;
    while(getline(iss, zodis, ' '))
    {
        while (!isalnum(zodis.front()) && !zodis.empty())
        {
            zodis.erase(zodis.begin());
        }
        while (!isalnum(zodis.back()) && !zodis.empty())
        {
            zodis.pop_back();
        }
        transform(zodis.begin(), zodis.end(), zodis.begin(), ::tolower);
        if (!zodis.empty())
        {
            wordOccurrences[zodis].insert(eilute);
        }
        if (zodis.find('\n') != string::npos)
        {
            eilute++;
        }
    }
    cout<<"Cross-reference tipo lentele:"<<endl;
    for (const auto& pair : wordOccurrences)
    {
        if (pair.second.size() > 1)
        {
            cout << pair.first << ": ";
            for (int line : pair.second)
            {
                cout << line << " ";
            }
            cout << endl;
        }
    }
}
//----------------------------------------------------------------------------------------------------
