#include <stdio.h>

int main ()
{
	
	int dv, noob, cons, SouN, qdv, pvMax, num;
	
	printf ("BEM VINDOS A CALCULADORA DE VIDA CALOTEX ENTERPRISES DND 5E!!!\n		(todos os direitos reservados)\n\nEsse indispensavel programa da CaloteX Entreprises foi desenvolvido para voce nao roubar na vida maxima de \nseu personagem quando estiver usando a media (partindo do pressuposto que ele realmente funciona direito)\n\nSem mais delongas, vamos ao que interessa!");

// Quantidade de DVs
	printf ("\n\nPRIMEIRO DE TUDO: quantos DVs seu personagem tem ao total? ");
	scanf ("%d", &dv);
	dv = dv-1;
		if (dv<4) {printf ("	\nNoobao da porra. Provavelmente nao vai durar muito... Mas nao se preocupe, esse programa tem o carater de seu \ninclusivo e busca nao julgar os jogadores ou suas escolhas...\n\nContinuando...\n");}
		if (dv<10 && dv >= 4) {printf ("	\nOlha o jovem, ja tem alguma experiencia no mundo dos aventureiros. Mas ainda depende do time, entao ja sabe...\n\nContinuando...\n");}
		if (dv<16 && dv >= 10) {printf ("	\nOopa, o cara aqui ja passou por poucas e boas. Provavelmente deve estar salvando o universo ou algo do genero...\n\nContinuando...\n");}
		if (dv >= 16) {printf ("	\nAgora sim! Provavelmente tu nao joga os RPGs do Felipe, que tem medo dos niveis epicos! Provavelmente tu ja \nMANDA no universo e nem teria porque usar esse programa!\n\nMas ja que estamos aqui...\n");}
	
//  Constituição (Variavel 'cons')	
	printf ("\nTu tem que me dizer teu bonus de constituicao: ");
	scanf ("%d", &cons);
		if (cons<2) {printf ("	\nPersonagem gripado ne? Escolheu outro atributo 'mais importante' ne?? Ja te digo: provavelmente tu morra antes \nde saber tua vida maxima, mas vamos tentar continuar, se isso nao afetar tua saude.\n");}
		if (cons == 2 || cons == 3) {printf ("	\nO tipico player de Elite Array. Muito bom, vamos seguindo!\n");}
		if (cons == 4 || cons == 5) {printf ("	\nOh o esponjao de dano aiii geeeetche!\n");}
		if (cons > 5) {printf ("	\nProvavelmente tu errou a tecla ou ta zoando (mas se for verdade, mandar instrucoes detalhadas para calx@centerprises.com,\nobrigado)\n");}

//Classe inicial	
	printf ("\nAgora vamos ao que interessa! Me diz qual classe tu pegou no primeiro nivel, diante das seguintes opcoes: \n\n||	1. Barbaro		|	7. Paladino		||\n||	2. Bardo		|	8. Ranger		||\n||	3. Clerigo		|	9. Ladino		||\n||	4. Druida		|	10. Feiticeiro		||\n||	5. Guerreiro		|	11. Bruxo		||\n||	6. Monge		|	12. Mago		||\n\nE entao...? ");
	scanf ("%d", &noob);
	
	switch (noob)
	{
	// Barbaro	
		case 1:
			pvMax = 12 + cons;
			printf ("\nBarbaro? Sabia escolha. Tanker, linha de frente, porradeiro... Simplesmente brutal."); break;
	// Bardo
		case 2:
			pvMax = 8 + cons;
			printf ("\nBardo eh...? Eh, os artistas ate tem o seu potencial..."); break;
	// Clerigo
		case 3:
			pvMax = 8 + cons;
			printf ("\nClerigo na 5e? Ta nerfado, exige coragem (ou combo)..."); break;
	// Druida
		case 4:
			pvMax = 8 + cons;
			printf ("\nDruida? Classe early game. Se der tempo de mudar de classe, mude, senao..."); break;
	// Guerreiro
		case 5:
			pvMax = 10 + cons;
			printf ("\nGuerreiro? Esse cheiro e de combo ou de arqueiro?? Tanto faz, acho que e a mesma coisa, afinal."); break;
	// Monge
		case 6:
			pvMax = 8 + cons;
			printf ("\nMonge? Versatil e porradeiro, corre feito o diabo e da 10 ataques no primeiro nivel... escolheu bem."); break;
	// Paladino
		case 7:
			pvMax = 10 + cons;
			printf ("\nPaladino? Ah, esse sim. Ninguem em sa consciencia bate de frente um paladino (barbaros nao tem sanidade nem consciencia)!"); break;
	// Ranger
		case 8:
			pvMax = 10 + cons;
			printf ("\nRangers? Fazem um pouco de tudo, ou seja, nao sao bons em nada."); break;
	// Ladino
		case 9:
			pvMax = 8 + cons;
			printf ("\nLadino? Classe mais divertida, diversas pericias, mas aconselho a se manter longe dos combates."); break;
	// Feiticeiro
		case 10:
			pvMax = 6 + cons;
			printf ("\nFeiticeiro? A classe dos metamagicos. Comeco a sentir cheiro de combo. Muito bem!"); break;
	// Bruxo
		case 11:
			pvMax = 8 + cons;
			printf ("\nBruxo? Voce nao parece ter vergonha na cara. Firmou um pacto com uma entidade perigosa em troca de poder. Eu respeito!"); break;
	// Mago
		case 12:
			pvMax = 6 + cons;
			printf ("\nMago? O famoso rato de biblioteca. Eles tem muitos recursos, espero que saiba usa-los."); break;
	// Qualquer outro numero
		default:
			printf ("\nEu me dou ao trabalho de fazer essa calculadora pra ti ficar zoando? Vlwflw vacilao!");
	}
		
	if (dv == 0)
	
	{
		printf ("\nAh, voce e muito noob! Me questiono o proposito de usar um programa pra somar um dado maximo com teu bonus de \nconstituicao... Enfim, tua vida maxima e \n\n >>> %d <<<", pvMax);
		printf ("\n\n\nULTIMATE CALCULATOR DELUXE e um produto exclusivo da CaloteX Enterprises, patente pendente");		
		return 0;		
	}
	
	else
		
		{
		printf ("\n\nE sobre o resto dos DVs...? Tem algum na classe informada? Vamos usar [1] para SIM e [2] para NAO: ");
		scanf ("%d", &SouN);
		}
		
			if (SouN == 1)
			
			{
				printf ("\n\nQuantos? ");
				scanf ("%d", &num);
				if (noob == 1) {pvMax = pvMax + num * (7 + cons); dv = dv - num;}
				if (noob == 5 || noob == 7 || noob == 8) {pvMax = pvMax + num * (6 + cons); dv = dv - num;}
				if (noob == 2 || noob == 3 || noob == 4 || noob == 6 || noob == 9 || noob == 11) {pvMax = pvMax + num * (5 + cons); dv = dv - num;}
				if (noob == 10 || noob == 12) {pvMax = pvMax + num * (7 + cons); dv = dv - num;}
			}
			
				if (dv == 0)
				{
				printf ("\nAo que parece, todos os niveis na mesma classe. Seu total de pontos de vida e \n\n\n >>> %d <<<\n\n", pvMax);
				printf ("\n\n\nULTIMATE CALCULATOR DELUXE e um produto exclusivo da CaloteX Enterprises, patente pendente");
				return 0;
				}
				
			else
			{
						
			printf ("\nOpa, mas tem %d DV ainda pra ser calculado! Ao que parece, temos um combista multiclasse safadao aqui!", dv);
		
			while (dv > 0)
			
			{
				
				printf ("\nEm qual outra classe tu pegou nivel, seguintes opcoes: \n\n||	1. Barbaro		|	7. Paladino		||\n||	2. Bardo		|	8. Ranger		||\n||	3. Clerigo		|	9. Ladino		||\n||	4. Druida		|	10. Feiticeiro		||\n||	5. Guerreiro		|	11. Bruxo		||\n||	6. Monge		|	12. Mago		||\n\nE ai? ");
				scanf ("%d", &num);
				
				switch (num)
				{
				// Barbaro	
					case 1:
					printf ("\nBarbaro...? Sempre boa escolha! Me diz quantos niveis tu pegou em barbaro: ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (7+cons);
					break;
				// Bardo
					case 2:
					printf ("\nBardao da massa. Me diz quantos niveis tu vai pegou pra buffar teus amigos: ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (5+cons);
					break;
				// Clerigo
					case 3:
					printf ("\nClerigo...? Melhor ir rezando... Me diz quantos niveis tu pegou em clerigo: ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (5+cons);
					break;
				// Druida
					case 4:
					printf ("\nDruida? Ledo engano... Enfim, me diz quantos niveis de pessimas escolhas: ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (5+cons);
					break;
				// Guerreiro
					case 5:
					printf ("\nMulticlasse com guerreiro? \n\n>>>COMBOALERT<<<\n\n Quantos dvs em guerreiro foram? ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (6+cons);
					break;
				// Monge
					case 6:
					printf ("\nQue o Ki esteja com voce. Me diz quantos niveis em monge tu pegou: ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (5+cons);
					break;
				// Paladino
					case 7:
					printf ("\nAhhh, o combo das auras, smite... Eu gostei! Quantos niveis dessa boa escolha (Paladino)? ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (6+cons);
					break;
				// Ranger
					case 8:
					printf ("\nSe ainda fosse o Ranger do UA eu entendia, mas sei que nao e que eu sei. Enfim, quantos dvs em Ranger? ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (6+cons);
					break;
				// Ladino
					printf ("\nMulticlasse com Ladino tem cheiro de combo de pericias. Escreve aqui quanto tu tá investindo nele (em niveis): ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (5+cons);
					break;
				// Feiticeiro
					case 10:
					printf ("\nLa vem os Eldrich Blasts acelerados...\n\n>>>COMBOALERT<<<\n\nQuantos niveis em feiticeiro tu pegou? ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (4+cons);
					break;
				// Bruxo
					case 11:
					printf ("\nOs jovens de hoje em dia so pensando em recuperar magias com descanso curto...\n\n>>>COMBOALERT<<<\n\nQuantos niveis tu pegou em Warlock? ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (5+cons);
					break;
				// Mago
					case 12:
					printf ("\nNiveis em mago melhoram qualquer personagem (menos Barbaro, que e imelhoravel). Quantos niveis em mago? ");
					scanf ("%d", &num);
					dv = dv - num;
					pvMax = pvMax + num * (4+cons);
					break;
				// Qualquer outro numero
					default:
						printf ("Tanta luta, tantas linhas de programação pra nada! Favor me desinstalar, ADEUS!!!");
				
				printf ("\nVoce ainda tem %d DVs nao informados, vai falando ai, o que mais tu pegou?", dv);
				}
			}
		}
		
		if (dv < 0)
		{
			printf ("\nPerai, perai... Tu botou mais DVs do que tu disse no inicio. Da uma revisada na tua ficha e tenta de novo quando\ntu aprender a somar. Obrigado por escolher a CaloteX Enterprises!");
		}
		else
		{
		printf ("\nFim dos DVs, chegamos a um veredito!");		
		printf ("\nDiante das informacoes prestadas e, e importante dizer que sao de sua inteira responsabilidade, seu total de pontos de vida e: \n\n\n -> %d <-", pvMax);
		printf ("\n\n\nULTIMATE CALCULATOR DELUXE e um produto exclusivo da CaloteX Enterprises, patente pendente");
		}
		
}
