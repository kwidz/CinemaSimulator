
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
#include "../include/FilmStruct.h"
#include "../include/SalleStruct.h"
#include "../include/caissiere.h"
#include "../include/client.h"
#include "../include/abonnee.h"
#include "../include/argStruct.h"
#include "../include/caisseAuto.h"

#define NBSalles 5
#define NBFilms 5

pthread_t* tid;
pthread_mutex_t mutex_attenteClient;
pthread_cond_t attendre, dormir, attendreAuto, dormirAuto, attendreAbonnee;
SalleStruct * lesSalles[NBSalles];
FilmStruct * lesFilms[NBFilms];

int nbClientsAttente;
int nbClientsAttenteAuto;
int nbAppelCaisse;
int nbAbonneeAttente;
int nbAbonnee;
int nbAbonneeAcheteBillet;
int Nbcaisses;
int NbcaissesAuto;
int NbClients;
int PourcentAbonnee;