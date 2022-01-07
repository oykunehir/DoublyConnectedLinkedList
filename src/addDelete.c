#include "main.h"
#include "addDelete.h"

void addEntry(){
    DirectoryEntry *p=head;
    int c=1;
    char num[100];
    char nam[100];
    printf("sayı ve isim girin:\n");
    scanf("%s %s",nam,num);
    //addNewNode(num,nam);
    
    while(p->next!=NULL){
        if(strcmp(p->name,nam)==0){
            strcpy(p->number,num);
            c=0;
        }
        p=p->next;
    }
    //printf("%d",c);
    if(c){
        addNewNode(num,nam);
    }
    
    
          
}
