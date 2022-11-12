#ifndef QUERIE7_H
#define QUERIE7_H

#include <fixtures.h>
#include <sort.h>

typedef struct driver_city *DRIVER_CITY;


typedef struct driver_city_list *DRIVER_CITY_LIST;


void push_driver_score(DRIVER_CITY *abin, int id, double score, char *name);

void free_cities(DRIVER_CITY abin);


DRIVER_CITY fill_abin(
    RIDES rides_list, // estrutura de dados com as viagens
    DRIVERS drivers_list, // estrutura de dados com os condutores
    CITIES cities_list,
    char *city, // cidade que predentemos procurar nas viagens
    int N_CITIES
);


int count_nodes(DRIVER_CITY abin);


void convert_abin_to_array(
    DRIVER_CITY abin, // abin que será copiada para o array
    DRIVER_CITY_LIST array, // array no qual serão guardados os resuldados da abin
    int *index // posição atual do array
);


int compare_score_average(const void *a,const void *b);

int compare_id(const void *a, const void *b);


void resolve_querie7(
    char *command, // comando que está numa linha do input
    int ncommand, // indice do comando
    DRIVERS drivers_list, // estrutura de dados dos condutores
    RIDES rides_list, // estrutura de dados das viagens
    CITIES cities_list,
    int N_CITIES
);


#endif