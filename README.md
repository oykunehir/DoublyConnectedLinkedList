# Phone Directory Using Doubly Connected Linked List

Implemention of a doubly linked list to maintain a list of phone directory entries and organization of files in a logical way. 

## Functionality

Program starts by reading a binary file that it gets from argv[1] which contains a list of DirectoryEntry records, and store them in a doubly linked list of DirectoryEntry structures. Write a function called load to do this step. It maintains the linked list in alphabetical order of name. Note that initially the file may not exist (which means your directory is empty, and through the menu it will add new entries, and when exiting it will save your list in the file with the given filename.)

### Functions

* **void load(char *filename)**: Loads the binary file filename into the linkedlist. If filename does not exist, start with an empty linked list (nothing to load).
* **void addEntry(DirectoryEntry entry)**: Adds a new DirectoryEntry entry into the list. When adding a new entry, if the given name already exists in the list, update its number with the new one provided.
* **void searchEntry(char *name)**: Searches the list for the given name and displays the number associated with that entry if the name is found. If the name does not exist in the list, print an appropriate message.
* **void deleteEntry(char *name)**: Removes the entry with the specified name from the list, if found. If the name does not exist in the list, print an appropriate message.
* **void printPhoneDirectory()**: Writes the contents of the Phone Directory to standard output. This output should be in sorted alphabetical order of name.
* **void saveAndExit()**: Writes the contents of the Phone Directory to the same data file you used for loading entries initially.

* <a href="https://scan.coverity.com/projects/oykunehir-doublyconnectedlinkedlist">
  <img alt="Coverity Scan Build Status"
       src="https://scan.coverity.com/projects/28697/badge.svg"/>
</a>
