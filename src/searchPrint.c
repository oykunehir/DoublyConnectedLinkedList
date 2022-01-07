#include "main.h"
#include "searchPrint.h"


void Print() {
	DirectoryEntry* temp = head;
	while(temp->next != NULL) {
		printf("%s %s\n",temp->name,temp->number);
        
		temp = temp->next;
	}
   
}


void searchEntry(char *nam){
    
    DirectoryEntry *iter=head;
    while (iter->next != NULL){
            if(strcmp(iter->name,nam)==0){
                printf("%s %s\n", iter->name, iter->number);
                return;
            }
            else 
            iter = iter->next;
        }
    printf("couldt found your search.\n");
    
}