#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef MAİN_H
#define MAİN_H

 struct dirEntry{
    char * number;
    char * name;
    struct dirEntry *next;
    struct dirEntry *prev;
};
typedef struct dirEntry DirectoryEntry;

DirectoryEntry *head;
DirectoryEntry *tail;

void addNewNode(char *num,char *nam);

#endif