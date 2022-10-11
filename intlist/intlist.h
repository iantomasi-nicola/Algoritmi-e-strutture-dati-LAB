struct dato{
    int valint;
    char codice[16];
    long unsigned int ID;
};
typedef struct dato dato;

void copy_dato(dato *, dato);



struct intlist{
    dato info;
    struct intlist * next;
};



typedef struct intlist intlist;


intlist* list_create();

intlist* list_insert(intlist*, dato);
intlist* list_insert2(intlist*, intlist*);

intlist* list_search(intlist*, dato);

intlist* list_delete2(intlist*, intlist*);
intlist* list_delete(intlist*, dato);

void list_destroy(intlist*);