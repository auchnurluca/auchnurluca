Taschenrechner Demo

#include <stdio.h> //Standard-Ein- Ausgabe 
#include <math.h> //matschematische Funktionen 

int main(void) 
{//Block-Beginn

//Variablendeklaration
float numone, numtwo, ergebnis;
char operator, janein= 'n';
//---------------------------------------

printf("\n Willkommen im Rechner! ");
printf("\nFuer Addition waehle '+'\n Fuer Subtraktion waehle '-' \n Fuer Multiplikation waehle  '*' \n Fuer Division waehle '/' \n Fuer Wurzel waehle 'w' ");

//---------------------------------------
do
{	//erste Zahl eingeben
	printf("\n Bitte gib deine erste Zahl ein: ");
		fflush(stdin);
		scanf("%f", &numone);
	//Operator eingeben
	//Fragen so lange richtiger Operator eingegeben wurde: 
	do 
	{
	printf("\n Dein Operator:");
		fflush(stdin); //Eigabepuffer löschen
		scanf("%c", &operator);
	}
	while (operator !='+' && operator !='-' && operator !='*' && operator !='/' && operator !='w'); 
	//Nur eine Zahl bei Wurzelberechnung
	if(operator != 'w') 
	{
	//zweite Zahl eingeben
	printf("\n Bitte gib deine zweite Zahl ein: ");
		fflush(stdin);	
		scanf("%f", &numtwo);
	}
	//Rechenoperationen 
	switch(operator) 
	{
		case '+':
		ergebnis = numone + numtwo;
		break;
		
		case '-':
		ergebnis = numone - numtwo;
		break;
		
		case '*':
		ergebnis = numone * numtwo;
		break;
		
		case '/': if (numtwo == 0.0)
			{ printf("\n Division durch Null ist nicht definiert");
				return 1;
			}
		ergebnis = numone / numtwo;
		break;
		
		case 'w': if (numone < 0.0)
			{	printf("\n Wurzel aus negativer Zahl ist nicht definiert!");
				return 1;
			}
		ergebnis =  sqrt(numone);
		
		break;
	//falscher Operator eingegeben
		default: printf("Falscher Operator!");	
	}
	//Ergebnissausgabe
	printf("\n Ergebniss= %9.2f", ergebnis);
	printf("\n Noch eine Berechnung durchfuehren? [j/n]");
	fflush(stdin);
	scanf("%c", &janein);
}
while(janein == 'j');
  	return 0;
}


