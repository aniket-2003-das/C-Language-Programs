#include <stdio.h>
typedef struct date{
    int date;
    int month;
    int year;
}date;
void display(date d){
    printf("the date is %d/%d/%d\n", d.date, d.month, d.year);
}
int dateCmp(date d1, date d2){    
    if (d1.year>d2.year){
        return 1;
    }
    if (d1.year<d2.year){
        return -1;
    }
    if (d1.month>d2.month){
        return 1;
    }
    if (d1.month<d2.month){
        return -1;
    }
    if (d1.date>d2.date){
        return 1;
    }
    if (d1.date<d2.date){
        return -1;
    }
    else{
        return 0;
    }
}
int main(){
    date d1 = {2, 03, 2023};
    date d2 = {2, 04, 2023};
    display(d1);
    display(d2);
    int a = dateCmp(d1, d2);
    printf("date comparision function returns %d\n", a);
    return 0;
}