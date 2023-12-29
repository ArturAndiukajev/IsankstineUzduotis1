# IsankstineUzduotis1
Šios užduoties tikslas buvo apdoroti tekstus ir:
1)Suskaičiuoti, kiek kartų kiekvienas skirtingas žodis pasikartoja tekste. Išvesti skirtingus žodžius(be skyrybos ženklų), kurie pasikartojo dažniau negu 1 kartą, o taip pat ir count'erį, nurodantį kiek kartų konkretus žodis pasikartojo.
2)Sukurti cross-reference tipo lentelę kurioje būtų nurodyta, kurioje teksto vietoje(kurioje(-iose) teksto eilutėse) kiekvienas iš daugiau negu vieną kartą pasikartojantis žodis buvo paminėtas.
3)Surasti visus URL'us tekste.
Šioje uždotyje buvo nagrinėjami asociatyvūs konteineriai, kurie yra tinkamesni šiai uždočiai spręsti, negu nuoseklaus tipo konteineriai.

Šiam uždaviniui buvo paimtas tekstas apie objektiškai orientotą programavimą c++ kalboje iš Vikipedijos : https://en.wikipedia.org/wiki/Object-oriented_programming ir tekstas apie tai kas yra URL : https://www.constantcontact.com/blog/website-what-is-a-url-link/ .

Pasikartojančių žodžių paieškai buvo panaudotas konteineris map. Taip atrodo rezultatai:
![Screenshot_1](https://github.com/ArturAndiukajev/IsankstineUzduotis1/assets/144611797/1317c8a0-3b0c-4a89-9590-e9f7e194975a)

Cross reference lentelei buvo panaudotas konteineris map, ir jame buvo panaudotas konteineris set. Taip atrodo rezultatai:
![Screenshot_2](https://github.com/ArturAndiukajev/IsankstineUzduotis1/assets/144611797/7cd1597c-1064-460f-8164-63b83652cb52)

URL suradimui buvo panaudotas konteineris set ir buvo panaudoti regex'ai. Taip atrodo rezultatai:
![Screenshot_3](https://github.com/ArturAndiukajev/IsankstineUzduotis1/assets/144611797/c03fd7d1-392a-436e-947d-9e0d3dec7842)

Naudojimosi instrukcija:
1)Naudotojas bus paklaustas, ar jis nori atlikti veiksmus su tekstu ir rasti jame pasikartojančius žodžius ir sukūrti cross reference lentelę. Naudotojui reikės įvesti failo pavadinimą su kuriuo jis norės dirbti.(turėtų būti .txt plėtinys). Tada naudotojas turi pasirinkimą išvesti rezultatus į failus ar į ekraną. Rezultatai bus failuose "rezultatai.txt" ir "rezCrossRef.txt".
2))Naudotojas bus paklaustas, ar jis nori atlikti veiksmus su tekstu ir rasti jame visus URL'us.  Naudotojui reikės įvesti failo pavadinimą su kuriuo jis norės dirbti.(turėtų būti .txt plėtinys). Tada naudotojas turi pasirinkimą išvesti rezultatus į failą ar į ekraną. Rezultatai bus faile "rezultataiURL.txt".



