#include <stdio.h>

// TODO: Define array size at compile time
int main(void) {

    int lineNum;
    int lineArray[200];
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

        int i;
        for (i = 0; i < count; i++) {
            fscanf(myfile, "%d\n", &lineArray[i]);
        }
    }

    int n = sizeof(lineArray)/sizeof(lineArray[0]);
    int i, j, k;
    for (i=0; i < n; i++){
        for (j=0;j < n-i-1;j++){
            if((lineArray[i]+lineArray[j]) == 2020){
                printf("Numbers are %d and %d, product is %d\n",lineArray[i],lineArray[j],lineArray[i]*lineArray[j]);
            }
            for(k = 0; k < n;k++){
                if((lineArray[i]+lineArray[j]+lineArray[k]) == 2020){
                    printf("Numbers are %d, %d, and %d, product is %d\n",lineArray[i],lineArray[j],lineArray[k],lineArray[i]*lineArray[j]*lineArray[k]);
                }
            }
        }
    }

}