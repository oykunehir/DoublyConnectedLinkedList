#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "addDelete.h"
#include "searchPrint.h"




void addNewNode(char *num,char *nam)
    
{
    DirectoryEntry *ptr=NULL;
    DirectoryEntry *temp = head;
    DirectoryEntry *iter = head;
    
    //create a new node 
    if(ptr==NULL){
        ptr =(DirectoryEntry*) malloc(sizeof(DirectoryEntry));

        ptr->number= (char *)malloc(strlen(num)+1);
        strcpy(ptr->number,num);
        ptr->name= (char *)malloc(strlen(nam)+1);
        strcpy(ptr->name,nam);
        ptr->next = NULL;
        ptr->prev = NULL;

    }
        
    //if the linked list is empty 
    if (head == NULL)
    {
        head = ptr;
    } 
    
    else
    {
        
        
        // traverse the linked list till the last node is reached 
        while (temp->next != NULL){
            temp = temp->next;
        }
        
        
        temp->next = ptr;
        temp = temp->next;
        //tail = ptr;
        ptr->prev = temp;
        
    }
}




void load(char *filename){
    char num[100];
    char nam[100];
    
       
    FILE *file;
    file=fopen(filename, "r");
    
       if(file!=NULL){
        rewind(file);
           while(!feof(file)){
               fscanf(file, "%s %s",nam,num);
               addNewNode(num,nam);
               
           }
       }
        
    }




int main(int argc, char *argv[] ){
    int choice;
    char searchName[20];
    char filename[20];
    if(argv[1]!='\0'){ 
    strcpy(filename,argv[1]);
        load(filename);
    //printf("%s", filename);
        
    }
    
    else 
        load("");
    
    printf("1 Add Entry\n2 Delete Entry\n3 Search Entry\n4 Print Phone Directory\n5 Save and Exit\n");
     scanf("%d",&choice );
    
    while(1){
        if(choice==1){
            addEntry();
        }
/*        if(choice==2){
            deleteEntry();
        }*/
        if(choice==3){
            scanf("%s", searchName);
            searchEntry(searchName);
        }
        if(choice==4){
            Print();
        }
        if(choice==5){
            //saveAndExit();
            break;
        }
        
       scanf("%d",&choice );  
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return (0);
}