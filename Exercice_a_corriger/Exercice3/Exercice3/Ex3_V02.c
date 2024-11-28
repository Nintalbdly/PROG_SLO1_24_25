//-----------------------------------------------------------------------------------//
// Nom du projet 		: Exercice 
// Nom du fichier 		: Exercice3
// Date de création 	: xx.xx.2016
// Date de modification : 28.11.2024
//
// Auteur 				: ANE (Alain B D Nintunze)
//                        Philou (Ph. Bovey)
//
// Description          : 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

#include <stdio.h>	// pour usage printf
#include <stdint.h> // uniformation du type entier 

// Déclaration globales des constantes
// -----------------------------------
const int16_t VMAX = 10000;       //constante 16 bits signee
const int16_t VMIN = -10000;		//constante 16 bits signee
const int64_t PI = 3.14159;
enum e_Typefigure { celcre, ellispe, carre, rectangle, triangle };  //definition d un type enumer 

int main(void)
{
	// Déclarations locales des variables
	// ----------------------------------
	double surface;
	double rayon;
	char lettre;
	enum e_Typefigure figure;



	//Declaration locales avec initialisation
	int16_t tension = 0;
	uint32_t bigval = 0;
	


	// Affectations
  // ------------
	figure = carre;
	//lettre = 'B';
	lettre = 0x42; 
	tension = VMIN;
	bigval = 123456789;
	rayon = 2;
	surface = rayon * rayon * PI;


    
	// Affichages pour controle
	
		printf("Tension = %d \n", tension);  //afficher la tension 

		printf("BigVal = %lx \n", bigval); //afficher le Big valeur 
		printf("Lettre = %c \n", lettre);		//afficher une lettre
		printf("Figure = %d \n", figure);		//afficher une figure
		printf("Rayon = %8.3f Surface = %8.3f \n",rayon ,surface ); // afficher rayon et le resultat de la surface
	
  return(0);
}
