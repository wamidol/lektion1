#include <stdio.h>
#include <string.h>


const char* printer(FILE *stream, char *arr, int i, int c);

int counter();

void bigA(char *arr);

const char* stringAdd(char *arr1, char *arr2);

int main() {

/** =========== Uppgifter 1-4 =========== **/

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

/** =========== Uppgifter 5-8 =========== **/

    char arr[100] = {0};
    int i = 0;
    int c;

    int counter1 = 0;
    int counter2 = 0;

    //String 1
    char *string1 = printer(stdin, arr, i, c);

    counter1 = counter(string1);

    bigA(string1);

    //String 2
    char *string2 = printer(stdin, arr, i, c);

    printf("string 1 a string2 %s",string1);   //Here string1 == string2 why?

    counter2 = counter(string2);

    bigA(string2);

    printf("string 1%s",string1);
    printf("string 2%s",string2);

    //String concativate
    stringAdd(string1, string2);
}

const char* printer(FILE *stream, char *arr, int i, int c) {

    do {

        c = fgetc(stdin);

        arr[i] = c;

        i++;

    } while(i < 100 && c != '\0' && c != '\n');

    printf("%s", arr);

    return arr;
}

int counter(char *arr) {

    int counter = 0;
       while(arr[counter] != '\0') {

        counter++;
    }

    printf("Length: %d\n", counter-1);
    return counter;


}

void bigA(char *arr) {

    int counter = 0;

    while(arr[counter] != '\0') {

        if (arr[counter] == 'a') {
            arr[counter] = 'A';
        }
        counter++;
    }

    printf("%s", arr);

}

const char* stringAdd(char *arr1, char *arr2) {

    char str[] = "abcdefaaabce";
    char str1[] = "abcdeabce";
    char str2[800];
    int j = 0, i = 0;

    while(arr1[i] != '\0') {
        
        if(arr1[i] == '\n') {
            arr1[i] = '\0';
        }
        str2[j]=arr1[i];
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

    printf("%s\n", str2);
}