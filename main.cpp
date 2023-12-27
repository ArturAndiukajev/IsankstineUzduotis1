#include "mylib.h";

int main()
{
    cout<<"Iveskite failo pavadinima."<<endl;
    string failoPav;
    cin>>failoPav;
    string tekstas;
    tekstas=skaitymas(failoPav);
    map<string, int> zodziu_kiekis = zodziai(tekstas);

    cout << "Zodziai ir kiek kartu jie pasikartojo:"<<endl;
    for (const auto& pair : zodziu_kiekis)
    {
        if (pair.second>1)
        {
            cout<<pair.first<<": "<<pair.second<<" kartus"<<endl;
        }
    }
    return 0;
}
