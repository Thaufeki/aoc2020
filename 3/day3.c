#include <stdio.h>

// TODO: Define array size at compile time
int main(int argc, char **argv) {

    char *a = argv[1];
    char *b = argv[2];
    int row = atoi(a);
    int col = atoi(b);
    char lineArray[323][31];
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
        int j = 0;
        int temp;
        int counter = 0;
        for (i = 0; i <= count; i+=row) {
            fscanf(myfile, "%s\n", &lineArray[i]);
            // printf("%s\n", lineArray[i]);
         }
        i = 0;
        do
        {
            temp = j % 31;
            char c = lineArray[i][temp];
            printf("%c :: [%d][%d]\n", c, i, temp);
            if ( '#' == c)
            {
                counter++;
            }
            i+=row;
            j+=col;
        } while (i<=count);
        
        printf("%d", counter);
    }

//    Why is it printing 34 for last inputs? Should be 35, everything else correct

}