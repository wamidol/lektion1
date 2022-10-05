#include <stdio.h>


int printer(FILE *stream, char *arr, int i, int c);

int bigA(char* arr);

int main() {


/** =========== Uppgifter 1-4 ===========* **/

    /**
    char str[] = "abcdefaaabce";
    char str1[] = "abcdeabce";
    char str2[800];
    int counter = 0, j = 0, i = 0;

    while(str[counter] != '\0') {
        if (str[counter] == 'a') {
            str[counter] = 'A';
        }

        counter++;
    }

    while(str[i] != '\0') {
        str2[j]=str[i];
        i++;
        j++;
    }

    i = 0;
    while(str1[i] != '\0') {
        str2[j]=str1[i];
        i++;
        j++;
    }
    str2[j]= '\0';



    printf("%s is %d\n", str, counter);
    printf("%s\n", str2);
    return 0;
**/

/**=========== Uppgifter 5-8 ===========**/

    char arr[100] = {0};
    int i = 0;
    int c;
    int counter = 0;


    printer(stdin, arr, i, c);



    while(arr[counter] != '\0') {
        if (arr[counter] == 'a') {
            arr[counter] = 'A';
        }
        counter++;
    }


    printf("%s", arr);
    printf("Length: %d\n", counter-1);

    int j = 0;

    do {
        c = fgetc(stdin);

        arr[j] = c;

        j++;

    } while(i < 100 && c != EOF && c != '\n');

    printf("%s", arr);
    printf("(%c)", arr[j]);

}

int printer(FILE *stream, char *arr, int i, int c) {

    do {

        c = fgetc(stdin);

        arr[i] = c;

        i++;

    } while(i < 100 && c != EOF && c != '\n');

    printf("%s", arr);

    return *arr;
}

int bigA(char *arr);