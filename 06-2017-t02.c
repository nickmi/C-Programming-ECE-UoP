#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int * charCounter(char * characterSequence,int size);
int * resultsEditing(int LetterCounter[]);

int main() {

    char word[10]={"aaawawAzZ"};


    int *p;

    p=resultsEditing(charCounter(word, strlen(word)));

    printf("Max |%d| |%c|\n",p[0],p[1]);
    printf("Min |%d| |%c|",p[2],p[3]);


    return 0;
}

int * charCounter(char characterSequence[],int size){

    int *LetterCounter = malloc(127 * sizeof *LetterCounter);

    for (int i=0;i< size;i++){

        LetterCounter[characterSequence[i]]++;



    }



    return LetterCounter;
}


int * resultsEditing(int LetterCounter[]){
    int charMax=0;
    int charMin=0;
    int valMax=0;
    int valMin=100;

int * results = malloc(4 * sizeof *results);





    for (int k=0;k<127;k++){

        if(LetterCounter[k]!=0){

            if (LetterCounter[k]>valMax){

                valMax=LetterCounter[k];
                charMax=k;
            }
            if (LetterCounter[k]<valMin){

                valMin=LetterCounter[k];
                charMin=k;
            }




          //  printf("\n | %c Appears %d | ",k,LetterCounter[k]);

        }}


            results[0]=valMax;
            results[1]=charMax;
            results[2]=valMin;
            results[3]=charMin;


           // printf("\n%d %c\n",valMax,charMax);
            //printf("%d %c",valMin,charMin);


    return results;

}




