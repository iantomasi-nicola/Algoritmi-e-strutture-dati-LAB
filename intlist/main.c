#include"intlist.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void copy_dato(dato *out, dato in){
    out->valint = in.valint;
    strcpy(out->codice, in.codice);
    out->ID = in.ID;
}

intlist* list_create(void){
    return NULL;
}

intlist* list_insert2(intlist* head, intlist *q){

}

intlist* list_insert(intlist* head, dato d){

}


intlist* list_search(intlist* head, dato d){

}

intlist* list_delete2(intlist* head, intlist* todel){


}
intlist* list_delete(intlist* head, dato d){

}

void list_destroy(intlist* head){

    if(!head)
        while( ( head = list_delete2(head,head) ));

}
