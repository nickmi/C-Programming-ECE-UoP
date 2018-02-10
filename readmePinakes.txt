!!!Sthn C den epistrefoume pinakes!!!

Sixno lathos pou kanoume oloi mas.

----------lathos---------
Otan mas zitaei thn epistrofh panw apo duo apotelesmaton apo mia synarthsh kai zitaei na apofigoume global variables klp
den kanoume apla ena RETURN PINAKAS; EINAI LATHOS 
Ama to kanoume apla girizoume ena pointer tou pinaka pou dixnei mono sto prwto stixio logo tou stack allocation, ta ypolipa 
stoixia mas ama kanoume p.x PINAKAS[3] tha einai oti nane!!!
----------/lathos---------

Lysh

----------swsto---------
Ftiaxnoume pinaka pointer me malloc vazoume ta apotelesmata mas ston pinaka kai mono tote mporoume na epistrepsoume ton pinaka
----------/swsto---------


----------lathos---------
int results[2]={0,1}
return results;

//stack allocation of memory
----------/lathos---------



----------swsto---------
int * results = malloc(2 * sizeof *results);
results[0]=0;
results[1]=1;

return results;

//heap allocation of memory
----------/swsto---------


Reading Material:
https://stackoverflow.com/questions/6804901/why-can-a-function-return-an-array-setup-by-malloc-but-not-one-setup-by-int-cat
https://www.programiz.com/c-programming/c-dynamic-memory-allocation
