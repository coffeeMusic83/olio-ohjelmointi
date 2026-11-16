# H3b – Perintä ja ylikirjoittaminen (Animal ja Dog)

Kantaluokka `Animal`, jossa on virtuaalinen metodi `callOut()` ja virtuaalinen destruktori,
sekä siitä periytyvä `Dog`, joka ylikirjoittaa `callOut()`-metodin. `main` luo oliot
`unique_ptr<Animal>`-osoittimilla, mikä näyttää polymorfismin toiminnan.

Lähteisiin on viitattu myös koodin kommenteissa niissä kohdissa, joissa niitä on hyödynnetty.

## Lähteet

- Opettajan kurssimateriaali: Polymorfismi luokkien Animal ja Dog välillä. Olio-ohjelmointi, Oulun ammattikorkeakoulu. (luettu 16.11.2026)
- Peatutor: Overriding. https://peatutor.com/cplus/index.php#overriding (luettu 16.11.2026)
- Learn C++. Chapter 25: Virtual Functions (25.1 Pointers and references to the base class of derived objects,
  25.2 Virtual functions and polymorphism, 25.3 The override and final specifiers, 25.4 Virtual destructors).
  https://www.learncpp.com/ (luettu 16.11.2026)
- The Cherno: C++-videosarja. YouTube. https://www.youtube.com/playlist?list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb (katsottu 16.11.2026)
- Claude (Anthropic), tekoälyavustaja: apuna vaiheittaisessa ohjeistuksessa ja virheiden selvittämisessä. (käytetty 16.11.2026)
