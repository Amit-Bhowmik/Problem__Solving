#include <stdio.h>
#include <string.h>
int main()
{
    char name1[30], name2[30], name3[30];
    gets(name1);
    gets(name2);
    gets(name3);
    
    if(strcmp(name1, "vertebrado") == 0){
        if (strcmp(name2, "ave") == 0){
            if (strcmp(name3, "carnivoro") == 0){
                puts("aguia\n");
            }
            else if (strcmp(name3, "onivoro") == 0){
                puts("pomba\n");
            }
            
        }
        else if (strcmp(name2, "mamifero") == 0){
            if (strcmp(name3, "onivoro") == 0){
                puts("homem\n");
            }
            else if (strcmp(name3, "herbivoro") == 0){
                puts("vaca\n");
            } 
        } 
    }

    else if(strcmp(name1, "invertebrado") == 0){
        if (strcmp(name2, "inseto") == 0){
            if (strcmp(name3, "hematofago") == 0){
                puts("pulga\n");
            }
            else if (strcmp(name3, "herbivoro") == 0){
                puts("lagarta\n");
            }
            
        }
        else if (strcmp(name2, "anelideo") == 0){
            if (strcmp(name3, "hematofago") == 0){
                puts("sanguessuga\n");
            }
            else if (strcmp(name3, "onivoro") == 0){
                puts("minhoca\n");
            } 
        } 
    }

    return 0;
}