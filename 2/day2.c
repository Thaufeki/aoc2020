#include <stdio.h>

int countChars( char* s, char c )
{
    return *s == '\0'
              ? 0
              : countChars( s + 1, c ) + (*s == c);
}

// TODO: Define array size at compile time
int main(void) {

    struct passwordData {
        int lBound;
        int uBound;
        char c;
        char pword[50];
    };
    
    struct passwordData pwords[1000];
    FILE *myfile = fopen("input.txt", "r");
    if (myfile == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }
    else {
        //Check for number of line
            char ch;
            int count = 0;
        do
        {
        ch = fgetc(myfile);
        if (ch == '\n') count++;
        } while (ch != EOF);
        rewind(myfile);

        int i,j,c;
        int validPwords1 = 0;
        int validPwords2 = 0;
        for (i = 0; i < count+1; i++) {
            fscanf(myfile, "%d-%d %c: %s\n", &pwords[i].lBound, &pwords[i].uBound, &pwords[i].c, &pwords[i].pword);
            c = countChars( pwords[i].pword, pwords[i].c );
            if ( c >= pwords[i].lBound && c <= pwords[i].uBound){
                validPwords1++;               
            }
            int index1=pwords[i].lBound-1;
            int index2=pwords[i].uBound-1;
            char cm = pwords[i].c;
            //printf("%s - %d:%d - %c,%c\n", pwords[i].pword, index1+1, index2+1, pwords[i].pword[index1], pwords[i].pword[index2]);
            if (cm == pwords[i].pword[index1] ^ cm == pwords[i].pword[index2]){
                validPwords2++;
            }
            
        }
        printf("1st Policy: %d\n", validPwords1);
        printf("Second Policy: %d\n", validPwords2);
    }

}