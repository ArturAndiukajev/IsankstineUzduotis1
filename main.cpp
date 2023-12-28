#include "mylib.h";

int main()
{

    cout<<"Iveskite failo pavadinima."<<endl;
    string failoPav;
    cin>>failoPav;
    string tekstas;
    tekstas=skaitymas(failoPav);
    map<string, int> zodziu_kiekis = zodziuPasikartojimas(tekstas);
    crossReference(tekstas);
    isvedimas(zodziu_kiekis, "rezultatai.txt");
    cout<<"Iveskite failo pavadinima su nuorodomis."<<endl;
    string failoPav2;
    cin>>failoPav2;
    string tekstas2;
    tekstas2=skaitymas(failoPav2);
    set<string> urlSet;
    rastiURL(tekstas2, urlSet);
    for(const auto& url: urlSet)
    {
        cout<<url<<endl;
    }
    isvedimasURL(urlSet, "rezultataiURL.txt");
    return 0;
}
