#include <stdio.h>

int main()
{
    int esp_1ch = 3;
    int esp_18h = 5;
    int esp_14h = 0;
    int esp_4;

//    eax = esp_1ch
//    eax = esp_1ch*esp_18h
//    edx = esp_1ch*esp_18h;
//    eax = esp_1ch;
//    ecx = esp_1ch >> 31;
//    eax = esp_1ch + (esp_1ch >> 31);
//    eax = (esp_1ch + (esp_1ch >> 31)) >> 1;
//    edx = esp_1ch*esp_18h - ((esp_1ch + esp_1ch >> 31) >> 1);
//    eax = esp_1ch*esp_18h - ((esp_1ch + esp_1ch >> 31) >> 1);
    esp_14h = esp_1ch*esp_18h - ((esp_1ch + (esp_1ch >> 31)) >> 1);
    esp_4 = esp_14h;
    printf("%d", esp_4);
    return 0;
}