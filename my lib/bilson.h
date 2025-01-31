#include <stdio.h>
#include <ctype.h>
#include <math.h>


// FONCTION SERVANT A CALCULER LA MOYENNE DE TROIS NOTE

double avecal(int note[], int Numnote)
{
    int somme = 0;

    for (int i = 0; i < Numnote; i++)
    {
        somme += note[i];
    }

    double moyenne = (double)somme / Numnote;

    return moyenne;
    
}


// FONCTION SERVANT A CALCULER LA MOYENNE DE TROIS NOTE


// Fonction pour convertir des secondes en heures, minutes et secondes

void time(int sec1,int *heure,int *min,int *sec2)//DECLARATION DE VARIABLE ET POINTEUR DANS LE TYPE VOID
{
    
    *heure = sec1 / 3600;
    *min = (sec1 % 3600) / 60;
    *sec2 = (sec1 % 3600) % 60;
}

// Fonction pour convertir des secondes en heures, minutes et secondes

// FONCTION POUR VERIFIER SI UN NOMBRE EST PAIR OU IMPAIR

int pairodd(int nombre)
{

    return(nombre % 2 == 0);
}

// FONCTION POUR VERIFIER SI UN NOMBRE EST PAIR OU IMPAIR

// Fonction pour vérifier si un caractère est une lettre majuscule et le convertir en minuscule

char uplow (char crt)
{

    if (isupper(crt))
    {
        return tolower(crt);

    } else{
        
        return crt; // Retourne le caractère inchangé s'il est miniscule
    }
    
}


// Fonction pour vérifier si un caractère est une lettre majuscule et le convertir en minuscule

// FONCTION QUI CALCULE LE FACTORIELLE D'UN NOMBRE

int fact(int nombre)
{
    int factorial;

    if (nombre == 0)
    {
        factorial = 1;
    } else
    {
        factorial = 1;
        for (int i = 1; i <= nombre; i++)
        {
            factorial *= i;
        }
        
    }
    
    return factorial;
}

// FONCTION QUI CALCULE LE FACTORIELLE D'UN NOMBRE

// FONCTION POUR RESOUDRE UNE EQUATION DE SECOND DEGRE

void eqnd(float a, float b, float c, float *delta, float *racine1, float *racine2)
{

    *delta = b * b - 4 * a * c;

    // VERIFICATION DU DISCRIMINANT
    if (*delta < 0)
    {
        // PAS DE RACINES REELLES

        *racine1 = 0;
        *racine2 = 0;

    } else if (*delta == 0)
    {
        // UNE RACINE RELLE DOUBLE

        *racine1 = -b /(2*a);
        *racine2 = *racine1;
    } else if (*delta > 0)
    {
        // DEUX RACINES REELES DISTINCTES

        *racine1 = (-b + sqrt(*delta)) / (2*a);
        *racine2 = (-b - sqrt(*delta)) / (2*a);
        
    }
    
}

// FONCTION POUR RESOUDRE UNE EQUATION DE SECOND DEGRE

// FONCTIONS POUR AFFICHER LE NOMBRE D'OCCURENCE LA PLUS HAUTE

void disval(int tab[],int tailletab)// AFFICHER LA SAISIR
{ 

    for (int i = 0; i < tailletab; i++)
    {
        printf("Veillez saisir le nombre %d:\n",i+1);
        scanf("%d",&tab[i]);
    }
    
}

// TROUVER LA NOTE MAXIMUN

int findmax(int tab[], int tailletab)
{
    int max = tab[0];

    for (int i = 1; i < tailletab; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
        
    }
    
    return max;
}

// COMPTER L'OCCURENCE

int ocu(int tab[],int tailletab, int max)
{
    int Nmbreocu = 0;

    for (int i = 0; i < tailletab; i++)
    {
        if (tab[i] == max)
        {
            Nmbreocu++;
        }
        
    }
    
    return Nmbreocu;
}

// FONCTIONS POUR AFFICHER LE NOMBRE D'OCCURENCE LA PLUS HAUTE

// Fonction pour saisir 10 entiers, trouver la note la plus haute et compter ses occurrences

void disoc() 
{
    int tab[10];
    int maxNote;
    int nombreOccurrences = 0;

    // Saisir les entiers
    printf("Veuillez entrer 10 entiers :\n");
    for (int i = 0; i < 10; i++) {
        printf("Entier %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    // Trouver la note la plus haute
    maxNote = tab[0];
    for (int i = 1; i < 10; i++) {
        if (tab[i] > maxNote) {
            maxNote = tab[i];
        }
    }

    // Compter les occurrences de la note la plus haute
    for (int i = 0; i < 10; i++) {
        if (tab[i] == maxNote) {
            nombreOccurrences++;
        }
    }

    // Afficher les résultats
    printf("La note la plus haute est : %d\n", maxNote);
    printf("Le nombre d'occurrences de la note la plus haute est : %d\n", nombreOccurrences);
}

// Fonction pour saisir 10 entiers, trouver la note la plus haute et compter ses occurrences

// FONCTION QUI RECHERCHE ET AFFICHE LE MINIMUM ET LE MAXIMUM DES ENTIERS

void disfunc(int tab[], int taille) // AFFICHER LA SAISIR
{
    for (int i = 0; i < taille; i++)
    {
        printf("Veillez entrer le nombre %d:\n",i+1);
        scanf("%d",&tab[i]);
    }
    
}

int resmax(int tab[], int taille) //RECHERCHER LE MAXIMUM
{
    int max= tab[0];
    
    for (int i = 1; i < taille; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
        
    }
    
    return max;
}

int resmin(int tab[], int taille)//RECHERCHER LE MINIMUM
{
    int min = tab[0];

    for (int i = 1; i < taille; i++)
    {
        if (tab[i] < min)
        {
            min = tab[i];
        }
        
    }
    return min;
}

// FONCTION QUI RECHERCHE ET AFFICHE LE MINIMUM ET LE MAXIMUM DES ENTIERS

// FONCTION POUR TRIER TABLEAU PAR ORDE CROISSANT

void srtas (int tab[], int size)
{
    int i,j,inter;

    for ( i = 0; i < (size - 1); i++) //PREMIERE BOUCLE DE TRIE 
    {
        for ( j = (i + 1); j < size; j++) //SECONDE BOUCLE DE TRIE
        {
            if (tab[i] > tab[j]) //VERIFICATION DES ECHANGES SI NECESSAIRE
            {
                inter = tab[i]; 
                tab[i] = tab[j];  // INTERCHANGEMENT DES PLACES
                tab[j] = inter;
            }
            
        }
        
    }

    printf("[");  // AFFICHAGE DU CROCHET DE DEBUT 

    for ( i = 0; i < size; i++) //BOUCLE D'AFFICHAGE DE TOUT LES ELEMENENT TRIE
    {
        printf("%d", tab[i]);
        
        if (i < size - 1)
        {
            printf(", ");
        }
        
    }
    
    printf("]\n");  //AFFICHAGE DU CROHET DE FIN
    
}

// FONCTION POUR TRIER TABLEAU PAR ORDE CROISSANT

//FONCTION POUR TRIER UN TABLEAU PAR ORDRE DECROISSANT

void srtdes(int tab[], int size)
{
    int i,j,inter;

    for ( i = 0; i < (size - 1); i++)
    {
        for ( j = (i+1); j < size; j++)
        {
            if (tab[i]< tab[j])
            {
                inter = tab[i];
                tab [i] = tab[j];
                tab[j] = inter;
            }
            
        }
        
    }

    printf("[");

        for ( i = 0; i < size; i++)
        {
            printf("%d",tab[i]);

            if (i < size -1 )
            {
                printf(", ");
            }
            
        }
        
    printf("]\n");
}

/* 
    ┌─────────────────────────────────────┐
    │ espacement inter-fonction: 2 lignes │
    └─────────────────────────────────────┘
 */

/* 
    ┌────────────────────────────────────┐
    │ email: emmanuelbilson234@gmail.com │
    └────────────────────────────────────┘
 */

/* 
    ┌──────────────────────────┐
    │ phone number: 0799637242 │
    └──────────────────────────┘
 */

