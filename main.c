#include "main.h"

/*Función que inserta números aleatorios en una lista*/
void inserta_datos_de_prueba(Lista lista);

int main()
{
    // Se crea la lista
    Lista lista = crea_lista();
    printf("La lista tiene %d elementos\n", longitud(lista));

    // Se insertan datos de prueba
    inserta_datos_de_prueba(lista);
    printf("La lista tiene %d elementos\n", longitud(lista));

    // Se remueve un elemento de la lista
    Elemento *borrado = quita_elemento(lista, 0);
    if (borrado != NULL) {free(borrado->valor);}
    free(borrado);
    printf("La lista tiene %d elementos\n", longitud(lista));

    // Se remueve un elemento que no existe en la lista
    quita_elemento(lista, longitud(lista));
    printf("La lista tiene %d elementos\n", longitud(lista));

    //Se imprime la lista antes de ordenar
    imprime_lista_int(lista);
    ordena_lista(lista, &cmp_int);

    //Se imprime la lista después de ordenar
    imprime_lista_int(lista);

    //Se libera la memoria ocupada
    borra_lista(lista);
}

void inserta_datos_de_prueba(Lista lista)
{
    srand(time(NULL));
    int *num_a_insertar;
    int indice;
    for (indice = 0; indice < 20; ++indice) {
        num_a_insertar = malloc(sizeof(int));
        *num_a_insertar = rand() % 100;
        inserta_elemento(lista, num_a_insertar);
    };
}

/*Compara 2 'Elemento' que contienen como valor un 'int'*/
int cmp_int(const void* a, const void* b){
    // Los apuntadores se convierten a enteros.
    int _a = *(int *)a;
    int _b = *(int *)b;
    // Se comparan los elementos
    if(_a == _b){
          return 0;
          }
    if(_a > _b){
          return 1;
          }
    return -1;
    }

/*Función que ordena una lista usando una función comparadora*/
//Recomiendo apoyarte de tu función 'cmp_int', qsort y un arreglo
void ordena_lista(Lista, int(*cmp)(const void*, const void*)){
     }

/*Libera(free) la memoria ocupada por la lista, sus elementos y valores*/
//No se te olvide liberar la memoria de cada elemento y su valor.
void borra_lista(Lista){
     }

/*Remueve un elemento de una lista en una posición dada*/
//Si la posición no coincide con ningún elemento se regresa NULL
Elemento *quita_elemento(Lista, size_t posicion){
         }

/*Imprime los elementos de la lista como enteros*/
void imprime_lista_int(Lista lista){
     }

/*Crea una lista vacía*/
Lista crea_lista(){
      struct Lista *l;
      l = NULL;
      }

/*Inserta un elemento en la lista y se regresa el nuevo tamaño de la lista*/
int inserta_elemento(Lista lista, void *valor){
    return 0;
    }

/*Regresa el número de elementos en la lista*/
size_t longitud(Lista lista){
       Lista aux;
       int n;
       n = 0;
       aux = lista;
       while(aux !=  NULL){
                 ++n;
                 aux = p.siguiente;
                 }
       return n;
       }
