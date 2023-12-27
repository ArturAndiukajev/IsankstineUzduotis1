#include "mylib.h";

int main()
{
    cout<<"Iveskite failo pavadinima."<<endl;
    string failoPav;
    cin>>failoPav;
    string tekstas;
    tekstas=skaitymas(failoPav);
    map<string, int> zodziu_kiekis = zodziai(tekstas);
    crossReference(tekstas);
    isvedimas(zodziu_kiekis, "rezultatai.txt");
    return 0;
}
