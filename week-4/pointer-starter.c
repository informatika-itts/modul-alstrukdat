#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 2024
#define MIN_LENGTH 1945

void lessThanRequired (){
    // TODO
}

void equalThanRequired (){
    // TODO
}

void moreThanRequired (){
    // TODO
}

int checkLenghtRequirement(char* text){
    int length = strlen(text);
    if (length < MIN_LENGTH)
        return 0;
    else if (length == MIN_LENGTH)
        return 1;
    else
        return 2;
}

int main() {
    int length, lengthOfText, selectOption;
    FILE *fptr = NULL;
    char text[MAX_LENGTH];

    fptr = fopen("file.txt", "r");

    if(fptr == NULL){
        printf("Error");
        exit(1);
    }

    fgets(text, MAX_LENGTH, fptr);

    fclose(fptr);

    selectOption = checkLenghtRequirement(text);

    // TODO
    // Pada fungsi checkLenghtRequirement akan mengembalikan sebuah angka
    // angka tersebut digunakan untuk memilih secara otomatis salah satu fungsi yang harus diisi
    // jika fungsi checkLenghtRequirement() mengembalikan nilai 0, maka
    //      tampilkan - > The length of your text is less than specified, please update your text
    //      update nilai lengthOfText ke minimum requirement melalui pointer menggunakan operasi aritmatika

    // jika fungsi checkLenghtRequirement() mengembalikan nilai 1, maka
    //      tampilkan - > Thank you, Your text length is correct

    // jika fungsi checkLenghtRequirement() mengembalikan nilai 2, maka
    //      tampilkan - > Your text is to long, please reduce the text
    //      update nilai lengthOfText ke minimum requirement melalui pointer menggunakan operasi aritmatika
    //
    // Catatan :
    //      - tidak diperkenankan menggunakan if atau switch dalam perpindahan fungsi
    //        sesuai dengan requirement diatas.
    //      - baris kode tidak lebih dari 100 (include comment ini)
    //      - tidak diperkenankan mengganti yang tertera pada starter code dalam alasan apapun

    printf("\nThe Lenght is updated to %d", lengthOfText);

    return 0;
}