#include <stdio.h>

int main(){
    FILE *ptr;
    // ptr = fopen("sampleC++.txt", "r");// --> for reading a file
    ptr = fopen("sampleC.txt", "w");// --> for writing a file
    return 0;
}