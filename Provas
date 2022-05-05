/*Sabendo que triângulo é uma figura geométrica de três lados onde cada um dos lados é
menor que a soma dos outros dois, escreva um programa em C, que receba três valores e
verifique e imprima se eles podem ser os comprimentos dos lados de um triângulo. */
int main()
{
    int lado1, lado2, lado3, soma1, soma2, soma3;
    
    printf("Digite os três valores dos lados (espaçados): ");
    scanf("%i" "%i" "%i", &lado1, &lado2, &lado3);
    
    soma1 = lado1 + lado2;
    soma2 = lado1 + lado3;
    soma3 = lado3 + lado2;
    
    if (soma1 > lado3){
        printf("Lado1 e lado2 podem ser os comprimentos dos lados de um triângulo\n");
    }
    else 
    {
        printf("Lado1 e lado2 não Podem ser os comprimentos dos lados de um triângulo\n");
    }
    
    if (soma2 > lado2){
        printf("Lado1 e lado3 podem ser os comprimentos dos lados de um triângulo\n");
    }
    else 
    {
        printf("Lado1 e lado3 não Podem ser os comprimentos dos lados de um triângulo\n"); 
    }
    
    if (soma3 > lado1){
        printf("Lado3 e lado2 podem ser os comprimentos dos lados de um triângulo\n");
    }
    else
    {
        printf("Lado3 e lado2 não Podem ser os comprimentos dos lados de um triângulo");
    }
}

/*O algoritmo ou fórmula de Luhn é um algoritmo para validação de números de
identificação. O maior uso do algoritmo de Luhn é na validação de números de cartões
de crédito. Contudo o algoritmo de Luhn pode ser utilizado em sequencia de números de
tamanho qualquer. Para a verificação do número o algoritmo se baseia nas seguintes
operações:
Dada uma sequência de números inteiros positivos (inclusive o dígito verificador), a
inverta. Em seguida, adicione o primeiro número a um somatório geral. Multiplique o
segundo número por 2 e execute a operação "noves fora", adicionando o resultado ao
somatório. Faça o mesmo com os demais números, ou seja ora adicione diretamente o
número ao somatório, ora o multiplique por 2, realizando "noves fora" e adicionando ao
somatório.
Por fim, verifique se o somatório é divisível por 10. Se for, o número é válido. Senão, é
inválido.Escreva um algoritmo em C que lê um número de até quatro dígitos e verifica se é um
número de identificação válido de acordo com a fórmula de Luhn e imprima “Número
Válido”ou “Número Inválido”conforme o caso.*/
int main()
{
  int num, num1, num2, num3, num4;

    printf("Insira um número de até 4 dígitos \n");
    scanf("%i", &num);

    num1 = num/1000;
    num2 = (num/100)%10;
    num3 = (num/10)%10;
    num4 = num%10;

    if (num >= 1000)
    {
        num1 = 2;
        num3= 2;
    } 

    else if (num>= 100)
    {
        num2 = 2;
        num4= 2;
    }

    else if (num>=10)
    {
        num3 = 2;
    }

    else if (num>=1)
    {
        num3= 2;
    }

    if (num1>9)
    {
        num1 -= 9;
    }
    if (num2>9)
    {
        num2 -= 9;
    }
    if (num3>9)
    {
        num3 -= 9;
    }
    if (num4>9)
    {
        num4 -= 9;
    }

    int soma = num1+num2+num3+num4;
    int verifc = soma%10;

    if (verifc == 0)
    {
        printf("Seu número é válido");
    }else{
        printf("Seu número é inváalido");
    }
}
/*Ao continuar sua jornada, Biu se depara com seu primeiro oponente: um incrível Rattata. Como Biu é bastante calculista, ele pede 
ajuda a você para descobrir se a sequência de ataques que ele pretende utilizar contra o seu oponente irá derrotá-lo, considerando que seu 
pokémon não morra antes. 
No jogo, Biu utilizará apenas três ataques e cada ataque corresponde a um número. Para o Rattata ser derrotado, dos três ataques selecionados 
por Biu, deve existir:  Um número maior que dez.  Um número par. 
Caso essas duas condições não forem satisfeitas, o Rattata não será derrotado. Outra observação é que se Biu escolher o ataque de número 
0, independente se as condições de vitória forem satisfeitas, o Rattata também não será derrotado.*/
int main()
{
    int ataque1, ataque2, ataque3;
        
        printf("Digite o valor dos 3 ataques: ");
        scanf("%i" "%i" "%i", &ataque1, &ataque2, &ataque3);
        
        if ((ataque1 > 10 || ataque2 > 10 || ataque3 > 10) && (ataque1 %2 == 0 || ataque2 %2 == 0 || ataque3 %2 == 0  ) && (ataque1 != 0 && ataque2 != 0 && ataque3 != 0)){
            printf("Você derrotou o Rattata");
        }else{
            printf("O Rattata não foi derrotado");
        }
}
/*Chronos possui um relógio muito antigo e valioso. Contudo, embora seus ponteiros ainda
funcionem perfeitamente, seus marcadores e números se tornaram ilegíveis. Para a sorte de
Chronos, o relógio foi construído com um mostrador que indica o valor dos ângulos medidos entre
os ponteiros de hora e minutos e a posição de repouso, equivalente a 00:00. Assim, quando for
00:00 o marcador indica de ângulos indica 000 e 000. Às 06:00, o marcador de ângulos, indicará:
180 e 000. Às 06:30, contudo o valor do marcador de ângulos será: 195 e 180. Você deve escrever
um programa, que leia os valores do marcador de ângulos e calcule a hora indicada pelo relógio.*/

int main(){
    
    int marcadorAnguloHH, marcadorAnguloMM;
    int hh, mm;
    
    printf("Informe os marcadores de angulos :\\> ");
    scanf("%d %d", &marcadorAnguloHH, &marcadorAnguloMM);
    
    hh = marcadorAnguloHH / 30;
    mm = marcadorAnguloMM / 6;
    
    printf("Hora Atual: %02d:%02d\n", hh, mm);
}
/*Na álgebra de inteiros foi definida uma nova operação chamada de maximização de inteiros. A
maximização de dois números inteiros A e B segue as seguintes regras:
1. Inicialmente fazemos A e B terem o mesmo número de dígitos, adicionando zeros à esquerda
conforme necessário.
2. Então cada dígito de A (do menos significativo ao mais significativo) é comparado com o dígito
correspondente de B. Nesta comparação, o dígito de menor valor é eliminado do número a que
pertence (se eles são iguais, nenhum é eliminado).
3. O resultado da operação é a dupla de números formados pelos dígitos remanescentes. Caso não
haja dígitos remanescentes em um dos números, o equivalente na dupla resultado para este número
é -1.
Por exemplo, considere a maximização de 453 e 92. Após o passo 1, teremos: 453 e 092; em
seguida compara-se 4 > 0; 5 < 9 e 3>2. Será eliminado o 5 do primeiro número e serão eliminados
o 0 e o 2 do segundo número. A dupla resultado será (43 e 5). 
Sua tarefa é escrever um programa em C, que calcule a operação maximização para dois inteiros
entre 0 e 999*/
int main(){
    int numA, numB;
    int res1, res2;
    int base1, base2;
    int numeralA, numeralB;
    
    res1 = res2 = 0;
    
    printf("Informe os dois números :\\> ");
    scanf("%d %d", &numA, &numB);
    
    base1 = base2 = 1;
    
    numeralA = numA % 10;
    numeralB = numB % 10;
    
    if(numeralA > numeralB){
        res1 = numeralA * base1;
        base1 *= 10;
    }else if(numeralA < numeralB){
        res2 = numeralB * base2;
        base2 *= 10;
    }else{
        res1 = numeralA * base1;
        res2 = numeralB * base2;
        base1 *= 10;
        base2 *= 10;
    }    

    numeralA = (numA % 100) / 10;
    numeralB = (numB % 100) / 10;
    
    if(numeralA > numeralB){
        res1 += numeralA * base1;
        base1 *= 10;
    }else if(numeralA < numeralB){
        res2 += numeralB * base2;
        base2 *= 10;
    }else{
        res1 += numeralA * base1;
        res2 += numeralB * base2;
        base1 *= 10;
        base2 *= 10;
    }    
    
    numeralA = numA / 100;
    numeralB = numB / 100;
    
    if(numeralA > numeralB){
        res1 += numeralA * base1;
        base1 *= 10;
    }else if(numeralA < numeralB){
        res2 += numeralB * base2;
        base2 *= 10;
    }else{
        res1 += numeralA * base1;
        res2 += numeralB * base2;
        base1 *= 10;
        base2 *= 10;
    }      

    if(base1 == 1)
        res1 = -1;
    if(base2 == 1)
        res2= -1;
    
    
    printf("Dupla Resultado: (%03d, %03d)\n", res1, res2);
}
