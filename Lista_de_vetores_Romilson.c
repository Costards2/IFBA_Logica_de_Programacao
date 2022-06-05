/*1 - Faça um programa que apresente o menu de opções a seguir: 
Menu de opções: 
1. Média aritmética 
2. Média ponderada 
3. Sair 
Digite a opção desejada. Na opção 1: receber duas notas, calcular e mostrar a 
média aritmética. Na opção 2: receber três notas e seus respectivos pesos, 
calcular e mostrar a média ponderada. Na opção 3: sair do programa.*/int main()
{
    float arit[2];
    float resultarit = 0.0;
    float pond[3];
    float resultpond = 0.0;
    float peso[3];
    float opc = 0.0;
    int i, j;
    
    printf("1. Média aritmética\n");
    printf("2. Média ponderada\n");
    printf("3. Sair\n");
    scanf("%f", &opc);
    
    if(opc == 1){
        for(i = 0; i < 2 ; i++){
            printf("Digite sua notas: ");
            scanf("%f", &arit[i]);
        }
        resultarit =(arit[0] + arit[1]) / 2;
        printf("Seu resultado é: %.2f ", resultarit);
    
    }else if(opc == 2){
        for(j = 0; j < 3; j++){
            printf("Digite sua nota: ");
            scanf("%f", &pond[j]);
            printf("Digite o peso dela: ");
            scanf("%f", &peso[j]);
        }
        resultpond = ((pond[0] * peso[0]) + (pond[1] * peso[1]) + (pond[2] * peso[2])) / (peso[0] + peso[1] + peso[2]);
        printf("Seu resultado é: %.2f", resultpond);
        
    }else if(opc == 3){
    
    }else
    printf("O valor digitado não é válido");
    
}

/*Forma do Vitor com o SWITCH (Particularmente gostei mais dessa forma dele)*/ 
int opcao, i;
float mediaA, nota, mediaP, peso, pesotot;

do
{
printf("Menu de opcoes:\n\t\t1.Media aritmetica\n\t\t2.Media poderada\n\t\t3.Sair\n\n\t\t\tDigite a opcao desejada: ");
scanf("%d", &opcao);
/*Zerando as variaveis acumuladoras antes de iniciar novo
loopp ara que não permaneçam com informação do loop anterior*/
mediaA=0;
mediaP=0;
pesotot=0;

switch (opcao)
{
	case 1:
	{
		printf("\t\t---- MEDIA ARITMETICA ----\n");
		for(i=1; i<3; i++)
		{
			printf("Informe a nota %d: ",i);
			scanf("%f",&nota);
			mediaA += nota;
		}
		printf("Media aritimetica = %.2f\n\n", mediaA/2);
		break;		
	}
	case 2:
	{
		printf("\t\t---- MEDIA PONDERADA ----\n");
		for(i=1; i<4; i++)
		{
			printf("Informe a nota %d: ",i);
			scanf("%f", &nota);
			printf("Informe o peso %d: ",i);
			scanf("%f", &peso);
			
			mediaP += nota*peso;
			pesotot += peso;
		}
		printf("Media ponderada = %.2f\n\n", mediaP/pesotot);
		break;
	}
	case 3:
	{
		printf("Encerrando o programa...\n");
		continue;
	}
	default:
	printf("ERRO: opcao invalida!\n\n");
}
}while(opcao!=3);

}

/*2 - Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um 
programa que receba o código e o valor de quinze transações, calcule e mostre: 
a. O valor total das compras à vista; 
b. O valor total das compras a prazo; 
c. O valor total das compras efetuadas; e 
d. O valor da primeira prestação das compras a prazo juntas, sabendo-se que serão 
pagas em três vezes.*/
int main()
{
    int VouP = 0;
    float transacaoV[15], transacaoP[15];
    float transacaototal, transacaoVtotal, transacaoPtotal;
    float primeirapre;
    float resultA;
    float resultB;
    float resultC;
    float resultD;
    int i;
    
   
    
    for(i = 0; i < 15; i++){
        printf("Digite 1 se a transação foi a vista, ou 2 se foi a prazo:\n");
        scanf("%i", &VouP);
        
        if(VouP == 1){
        printf("Digitge o valor da transação:\n ");
        scanf("%f", &transacaoV[i]);
        }
        else if (VouP == 2){
        printf("Digitge o valor da transação:\n ");
        scanf("%f", &transacaoP[i]);
        }
        else
        printf("Operação invalida!!!\n");
    }
    for(i = 0; i < 15; i++){
    transacaototal += transacaoV[i] + transacaoP[i]; 
    transacaoVtotal += transacaoV[i];
    transacaoPtotal += transacaoP[i];
    /*transacaototal = transacaoVtotal + transacaoPtotal */
        
    }
    primeirapre = transacaoPtotal / 3;
    
    printf("O valor total das compras à vista é : %.2f\n", transacaoVtotal);
    printf("O valor total das compras a prazo é : %.2f\n", transacaoPtotal);
    printf("O valor total das compras efetuadas é : %.2f\n", transacaototal);
    printf("O valor da primeira prestação das compras a prazo juntas é: %.2f\n", primeirapre);
}
/*3 - Faça um programa que receba várias idades, calcule e mostre a média das idades digitadas. 
Finalize digitando idade igual a zero.*/
int main()
{
    int idade;
    int soma = 0;
    int cont = 1;
    int media = 0;
    
    while(idade != 0){
        printf("Digite a idade:");
        scanf("%i", &idade);
        soma += idade;
        media = soma / cont;
        cont++;
        printf("A média é: %i\n", media);
    }
    printf("O programa foi finalizado");
    
}

/*4 - Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (A-azul; P- preto; Vverde; e C-castanho) e a cor dos cabelos (P-preto; C-castanho; L-louro; e R-ruivo) de seis 
pessoas, e que calcule e mostre: 
 a. A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg; 
b. A médias das idades das pessoas com altura inferior a 1,50 m; 
c. A porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas; 
d. A quantidade de pessoas ruivas e que não possuem olhos azuis.*/
#define TAM 5
    
    int i;
    int idade[TAM];
    int medidade, somaidade;
    float peso[TAM];
    float altura[TAM];
    char olhos[TAM];
    float porcolhos;
    char cabelos[TAM];
    float a = 0, b = 0, c = 0, d = 0;
    
    for(i = 0; i < TAM; i++){
        printf("Digite a idade: ");
        scanf("%i", &idade);
        printf("Digite a altura: ");
        scanf("%f", &altura);
        printf("Digite a peso: ");
        scanf("%f", &peso);
        printf("Digite a cor dos olhos (A-azul; P- preto; V-verde; e C-castanho): ");
        scanf("%c", &olhos);
        printf("Digite a cor dos cabelso (P-preto; C-castanho; L-louro; e R-ruivo): ");
        scanf("%c", &cabelos);
    }
    for(i = 0; i < TAM; i++){
        if (idade[i] > 50 && peso[i] > 50){
            a++;
        }
        if(altura[i] < 1.50){
            b++
            somaidade += idade[i]
            medidade = somaidade / b;
        }
        if(olhos[i] == 'A'){
            c++;
        porcolhos = c * 100 / TAM
        }
        if(cabelos[i] == 'C' && olhos[i] != A){
            d++;
        }
        } //imcompleta
}
/*5 - Fazer um programa que calcule e escreva a seguinte soma: 	2^1/50 + 2^2/49 + 2^3/48 + ... + 2^50/1 */


