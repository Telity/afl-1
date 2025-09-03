# Hamming-afstand

Din krop består af celler, der indeholder DNA. Disse celler slides ned regelmæssigt og skal
udskiftes, hvilket de opnår ved at dele sig i datterceller. Faktisk oplever den gennemsnitlige
menneskelige krop omkring 10 kvadrillioner celleindelinger i løbet af et liv!

Når celler deler sig, replikeres deres DNA også. Sommetider sker der fejl under denne proces, og
enkelte DNA-stykker bliver kodet med forkerte informationer.  Hvis vi sammenligner to DNA-strenge og
tæller forskellene mellem dem, kan vi se, hvor mange fejl der opstod. Dette kaldes
"Hamming-afstanden".

Hamming-afstanden er nyttig inden for mange områder af videnskaben, ikke kun biologi, så det er et
godt begreb at kende til :)

## Opgave

Beregn Hamming-afstanden mellem to DNA-strenge.

Vi læser DNA ved hjælp af bostaverne C, A, G og T. To sekvenser kan se sådan her ud:

```
GAGCCTACTAACGGGAT
CATCGTAATGACGGCCT
^ ^ ^  ^ ^    ^^
```

Der er 7 forskelle markeret med pile, og derfor er Hamming-afstanden 7.

## Trin

1. Lav et nyt par af filer der hedder hamming.c / hamming.h. Sørg for at det er .c-filer og ikke .cpp-filer,
   og sørg for at der er sat hak i "Create an associated header", så begge filer bliver oprettet.
2. Definér funktionen `int hamming_distance(char dna1[], char dna2[])` både som prototype i hamming.h og
   som faktisk funktion i hamming.c. Gør så den tæller antallet a forskelle i to DNA-strenge
3. Commit og push din løsning til GitHub Classroom når det virker.

## Detaljer

Hamming-afstande er kun defineret for sekvenser af samme længde, så hvis to strenge har forskellig
længde, er svaret ikke veldefineret. Man kunne godt sige at så er der en forskel på hver plads i
den længste streng, men det er ikke nødvendigt at understøtte.

Da der ikke findes en åbenlys måde at afgøre, hvor stort et array er, kan du nøjes med at antage at de
indeholder C strings, som slutter med en NUL-byte. Det er valgfrit at håndtere hvis de to strings ikke
er lige lange.