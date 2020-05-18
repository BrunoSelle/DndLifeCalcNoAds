#include <stdio.h>

int main ()
{
	
	int dv, noob, cons, SouN, qdv, pvMax, num;
	
	printf ("BEM VINDOS A CALCULADORA DE VIDA DND 5E!!!");

// Quantidade de DVs
	printf ("\n\nPRIMEIRO DE TUDO: quantos DVs seu personagem tem ao total? ");
	scanf ("%d", &dv);
	dv = dv-1;

//  Constituição (Variavel 'cons')	
	printf ("\nQual teu bonus de constituicao: ");
	scanf ("%d", &cons);

//Classe inicial	
	printf ("\nClasse inicial: \n\n||	1. Barbaro		|	7. Paladino		||\n||	2. Bardo		|	8. Ranger		||\n||	3. Clerigo		|	9. Ladino		||\n||	4. Druida		|	10. Feiticeiro		||\n||	5. Guerreiro		|	11. Bruxo		||\n||	6. Monge		|	12. Mago		||\n\nE entao...? ");
	scanf ("%d", &noob);
	
	switch (noob)
	{
	// Barbaro	
		case 1:
			pvMax = 12 + cons;
			break;
	// Bardo
		case 2:
			pvMax = 8 + cons;
			break;
	// Clerigo
		case 3:
			pvMax = 8 + cons;
			break;
	// Druida
		case 4:
			pvMax = 8 + cons;
			break;
	// Guerreiro
		case 5:
			pvMax = 10 + cons;
			break;
	// Monge
		case 6:
			pvMax = 8 + cons;
			break;
	// Paladino
		case 7:
			pvMax = 10 + cons;
			break;
	// Ranger
		case 8:
			pvMax = 10 + cons;
			break;
	// Ladino
		case 9:
			pvMax = 8 + cons;
			break;
	// Feiticeiro
		case 10:
			pvMax = 6 + cons;
			break;
	// Bruxo
		case 11:
			pvMax = 8 + cons;
			break;
	// Mago
		case 12:
			pvMax = 6 + cons;
			break;
	// Qualquer outro numero
		default:
			printf ("\nERRO");
	}
		
	if (dv == 0)
	
	{
		printf ("\nSua vida maxima e \n\n >>> %d <<<", pvMax);
		return 0;		
	}
	
	else
		
		{
		printf ("\n\nHa algum outro nivel na classe inicial? \n[1] SIM || [2] NAO: ");
		scanf ("%d", &SouN);
		}
		
			if (SouN == 1)
			
			{
				printf ("\n\nQuantos (alem do primeiro)? ");
				scanf ("%d", &num);
				if (noob == 1) {pvMax = pvMax + num * (7 + cons); dv = dv - num;}
				if (noob == 5 || noob == 7 || noob == 8) {pvMax = pvMax + num * (6 + cons); dv = dv - num;}
				if (noob == 2 || noob == 3 || noob == 4 || noob == 6 || noob == 9 || noob == 11) {pvMax = pvMax + num * (5 + cons); dv = dv - num;}
				if (noob == 10 || noob == 12) {pvMax = pvMax + num * (7 + cons); dv = dv - num;}
			}
			
				if (dv == 0)
				{
				printf ("\nSua vida maxima e \n\n >>> %d <<<", pvMax);
				return 0;
				}
				
			else
			{
						
			printf ("\nAinda restam %d DV nao informados", dv);
		
			while (dv > 0)
			
			{
				
				printf ("\nEm qual outra classe voce tem niveis? \n\n||	1. Barbaro		|	7. Paladino		||\n||	2. Bardo		|	8. Ranger		||\n||	3. Clerigo		|	9. Ladino		||\n||	4. Druida		|	10. Feiticeiro		||\n||	5. Guerreiro		|	11. Bruxo		||\n||	6. Monge		|	12. Mago		||\n\nR.: ");
				scanf ("%d", &num);
				
				switch (num)
				{
				// Barbaro	
					case 1:
					printf ("\nQuantidade: ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (7+cons);
					break;
				// Bardo
					case 2:
					printf ("\nQuantidade: ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (5+cons);
					break;
				// Clerigo
					case 3:
					printf ("\nQuantidade: ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (5+cons);
					break;
				// Druida
					case 4:
					printf ("\nQuantidade: ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (5+cons);
					break;
				// Guerreiro
					case 5:
					printf ("\nQuantidade: ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (6+cons);
					break;
				// Monge
					case 6:
					printf ("\nQuantidade: ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (5+cons);
					break;
				// Paladino
					case 7:
					printf ("\nQuantidade: ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (6+cons);
					break;
				// Ranger
					case 8:
					printf ("\nQuantidade: ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (6+cons);
					break;
				// Ladino
					printf ("\nQuantidade: ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (5+cons);
					break;
				// Feiticeiro
					case 10:
					printf ("\nQuantidade: ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (4+cons);
					break;
				// Bruxo
					case 11:
					printf ("\nQuantidade: ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (5+cons);
					break;
				// Mago
					case 12:
					printf ("\nQuantidade: ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (4+cons);
					break;
				// Qualquer outro numero
					default:
						printf ("\nERRO");
				
				printf ("\nVoce ainda tem %d DVs nao informados.", dv);
				}
			}
		}
		
		if (dv < 0)
		{
			printf ("\nERRO");
		}
		else
		{
		printf ("\nSua vida maxima e \n\n >>> %d <<<", pvMax);
		}
		
}
