//-----------------------------------------------------------------------------------//
// Nom du projet 		: Solution Exercice 2
// Nom du fichier 		: Ex2.c
// Date de création 	: xx.xx.2016
// Date de modification : 13.09.2017
//
// Auteur 				: CHR (C. Hubert)
//                        Philou (Ph. Bovey)
//
// Version				: 0.2
//
// Description          : Voir donnée exercice 2 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						
//----------------------------------------------------------------------------------//

#include <stdint.h> // normalisation type entier		
#include <stdio.h>	// pour usage printf et scanf_s
					// Nouveauté du VC++ 2005, 2008, 2010 et 2015 : le scanf_s remplace scanf

//-- Programme Principal --// 
int main(void)
{
	//-- déclaration de variable interne --// 
	uint8_t valDec, resultat, reste; 

	//-- Demande utilisateur --// 
	printf("Entrez un nombre de 0 a 255 !\n");
	scanf_s("%d%*c", &valDec);

	//-- test si < 0 ou >255 --//
	if ((valDec < 0) || (valDec > 255))
	{
		printf("\nValeur hors limites -> programme stoppe !!!\n"); 
		valDec = 0;		// permet de sortir du programme 
	}
	
	//-- boucle de traitement du calcul --//
	while (valDec > 0)
	{
		//-- résultat de la division avec le reste (modulo) --// 
		resultat = valDec / 2; 
		reste = valDec % 2;  

		//-- affichage console --//
		printf("%3d : 2 = %2d R = %d \n", valDec, resultat, reste);

		//-- MAJ de valDec --// 
		valDec = resultat; 
	}
	
  return(0);
}
