#include<stdio.h>
union Number{
    int intNumber;
    float floatNumber;
};
int main(){
    Number number;
    number.intNumber = 3;
    number.floatNumber = 4;
    printf("%d %.2f",number.intNumber,number.floatNumber);
    return 0;
}