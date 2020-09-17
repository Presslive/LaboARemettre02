//But:	Écrire un programme qui calcule le montant qu'un individu devra débourser pour faire un voyage dans une automobile louée
//:Auteur: Diallo Abdoulaye
//Date:	2020-09-16



#include<iostream>


int main()

{
					setlocale(LC_ALL, "");


	int Kilometrage, DureeVoyage, Location, TotalEssence;            //Variables utilisées dans ce programme
																	//Kilometrage=Nombre de kilometre que l'utilisatteur va rentré
	                                                                //DureeVoyage=Nombre de (jours) que le voyage va durer
																	
	

	std::cout << "Répondez aux deux questions suivantes pour avoir un apercu\ndu montant que vous débourseriez pour votre voyage!\n\n\n";

	//L'utilsateur voit sa en premier lieu

	



	std::cout << "Quelle sera le Kilométrage à parcourir :";//L'utilisateur voit cette question en premier 
	std::cin >> Kilometrage;								//L'utilisateur répond à la question en rentrant le nombre de Kmetrage parcouru

	std::cout << "Quelle sera la durée du voyage en(jours) : "; //L'utilisateur voit cette question en deuxième
	
    std::cin >> DureeVoyage;									//L'utilisateur répond à la question en rentrant le nombre de JOURS pour le voyage


	Location = 45 * DureeVoyage;								//Location=Prix du véhicule louée multiplier par La Duree du Voyage
	TotalEssence = (((Kilometrage * 7.6) / 100) * 1.25);        //TotalEssence= Le Kilometrage multiplier par 7.6L divisé par 100 et le total multiplier par le prix 
																//d'un litre d'essence c'est-à-dire 1.25$
	

	
	if (Kilometrage> 250)										//Condition: Si le Kilometrage rentrer par L'utilisateur est plus grand que 250 pour 1 journée,

	{
		(Kilometrage - 250) * 0.05;								//sa calcule le kilometrage -250 km multiplier par 0,05$ qui répresente le prix pour chaque km supplementaire

		std::cout <<"\n Le montant que vous débourserez est de "<< Kilometrage + Location<<"$\n";  //Si c'est le cas, sa affiche comme résultatm le Kilometrage
																								//Plus la Location et affiche le résultat

	}
	
	else
	{
		std::cout << "Le montant que vous débourserez est de " << Location + TotalEssence << "$\n";// Si il n'y a pas de kilometrage supplementaire, il calcule le total
																									//de Location plus le TotalEssence et affiche le résultat

	}


	/*
		Plan tests

		Légendes

		Km=Kilometrage(cin)
		Dur=DureeVoyage(cin)

							Km=300										Le montant que vous débourserez est de 525$												
							Dur=5	


							Km=10										Le montant que vous débourserez est de 225$
							Dur=5


							KM=-588										Le montant que vous débourserez est de 35$
							Dur=2

				


				
								  J'ai pas bien compris ce qui est demander
								 les 250km gratuit par jour (j'ai pas compris)
	
	
	
	*/

	      



	

	
	


	



















	return 0;
}