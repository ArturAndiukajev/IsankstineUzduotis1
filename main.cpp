#include "mylib.h";

int main()
{
    cout<<"Ar norite atlikti veiksmus su tekstu(be URL)? Jeigu taip - rasykite T, jeigu ne - N."<<endl;
    char pasirinkimas;
    cin>>pasirinkimas;
    if(pasirinkimas=='T'||pasirinkimas=='t')
    {
        cout<<"Iveskite failo pavadinima."<<endl;
        string failoPav;
        cin>>failoPav;
        string tekstas;
        tekstas=skaitymas(failoPav);
        map<string, int> zodziu_kiekis = zodziuPasikartojimas(tekstas);
        map<string, set<int>> lentele = crossReference(tekstas);
        cout<<"Ar norite isvesti rezultatus i failus ar i ekrana? Jeigu i failus - rasykite F, jeigu i ekrana - E."<<endl;
        char pasirinkimas2;
        cin>>pasirinkimas2;
        if(pasirinkimas2=='F'||pasirinkimas2=='f')
        {
           isvedimas(zodziu_kiekis, "rezultatai.txt");
           crossReferenceIsvedimas(lentele,"rezCrossRef.txt");
        }
        else if(pasirinkimas2=='E'||pasirinkimas2=='e')
        {
            cout<<"Zodziu pasikartojimai: "<<endl;
            for(const auto& pair:zodziu_kiekis)
            {
                if(pair.second>1)
                {
                    cout<<pair.first<<" : "<<pair.second<<" kartus"<<endl;
                }
            }
            cout<<"------------------------------------------------------------------------"<<endl;
            cout<<"Cross reference lentele: "<<endl;
            for(const auto& pair:lentele)
            {
                if(pair.second.size() > 1)
                {
                    cout<<pair.first<<": ";
                    for(int line:pair.second)
                    {
                        cout<<line<<" ";
                    }
                    cout<<endl;
                }
            }
            cout<<"-----------------------------------------------------------------------"<<endl;
        }
        else
        {
            cout<<"Netinkamas pasirinkimas"<<endl;
            return 1;
        }
    }
    cout<<"Ar norite atlikti veiksmus su tekstu su URL? Jeigu taip - rasykite T, jeigu ne - N."<<endl;
    char pasirinkimas3;
    cin>>pasirinkimas3;
    if(pasirinkimas3=='T'||pasirinkimas3=='t')
    {
        cout<<"Iveskite failo pavadinima su nuorodomis."<<endl;
        string failoPav2;
        cin>>failoPav2;
        string tekstas2;
        tekstas2=skaitymas(failoPav2);
        set<string> urlSet;
        rastiURL(tekstas2, urlSet);
        cout<<"Ar norite isvesti rezultatus i failus ar i ekrana? Jeigu i failus - rasykite F, jeigu i ekrana - E."<<endl;
        char pasirinkimas4;
        cin>>pasirinkimas4;
        if(pasirinkimas4=='F'||pasirinkimas4=='f')
        {
            isvedimasURL(urlSet, "rezultataiURL.txt");
        }
        else if(pasirinkimas4=='E'||pasirinkimas4=='e')
        {
            for(const auto& url: urlSet)
            {
                cout<<url<<endl;
            }
        }
        else
        {
            cout<<"Netinkamas pasirinkimas"<<endl;
            return 1;
        }
    }
    cout<<"Programos veikimo pabaiga."<<endl;
    return 0;
}
