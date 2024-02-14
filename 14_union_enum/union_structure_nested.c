#include<stdio.h>
#pragma pack(1)

struct store{
    double price;
    union {
        struct {
                char *name;
                char *author;
                int pages;
        }book;
        struct {
                int color;
                int size;
                char *design;
        }shirt;
    }item;
};

int main (){
    struct store s;
    s.item.book.name = " C programming";
    s.item.book.author = "Dennis Ritchie";
    s.item.book.pages = 365;
    printf("%s\n",s.item.book.name);
    printf("%d",sizeof(s));

return 0;

}