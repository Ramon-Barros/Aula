#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    /*int n = 21;

    if ((n % 2 == 0) && n < 20)
    {
      cout << "numero par e menor que 20";
    } else
    {
        cout << "Esse numero nao eh par ou eh maior que 20";
    }*/

    /*Faça um algoritmo que leia os valores A, B e C e imprima na tela se a soma de A + B é menor que C.
    int a,b,c;

    cout << "Lendo o valor de A \n";
    cin >> a;
     cout << "Lendo o valor de B \n";
    cin >> b;
     cout << "Lendo o valor de C \n";
    cin >> c;
    if(a+b<c){
        cout << " A + B eh menor que C";
    }
    */

   /* Faça um algoritmo que leia o nome, o sexo e o estado civil de uma pessoa.
    Caso sexo seja “F” e estado civil seja “CASADA”, solicitar o tempo de casada (anos). */
/*
    string nome;

    char sexo, estCivil;

    int tempoCasado;

    cout << "Digite seu nome: \n";
    cin >> nome;

    cout << "Digite F(sexo feminino) ou M (sexo masculino): \n";
    cin >> sexo;
      cout << "Digite S (solteiro), C (casado), V (viuvo) O (outross) \n";
    cin >> estCivil;

    if(sexo == 'f' && estCivil == 'c')
    {
        cout <<"Digite quantos anos esta casada: \n";
        cin >> tempoCasado;
    } else
    {
        cout << "Não queremos seus dados";
     }
*/

/*Faça um algoritmo para receber um número qualquer e informar na tela se é par ou ímpar. */

   /* int num;

    cout << "Digite um numero inteiro \n";
    cin >> num;

    if(num % 2 == 0 )
    {
        cout << "O numero digitado eh par";

    } else
    {

        cout << "o numero digitado eh impar";
    }
*/
/* Faça  um  algoritmo  que  leia  dois  valores  inteiros  A  e  B  se  os  valores  forem  iguais  deverá  se  somar  os  dois,
  caso  contrário  multiplique  A  por  B.
Ao  final  de  qualquer  um  dos  cálculos  deve-se  atribuir o resultado para uma variável C e mostrar seu conteúdo na tela*/

/*
    int num1, num2, num3;

    cout << "Digite um valor para A: \n";
    cin>> num1;
    cout << "Digite um valor para B: \n";
    cin>> num2;

    if (num1 == num2)
    {
        num3 = num1 + num2;
       cout << "O valor de C: " << num3;
    } else
    {

        num3 = num1*num2;
        cout << "O valor de C: " << num3;
    }*/

    /** Esse construção de uma pequena calculadora*/
    /** onde irá fazer adição, subtração, multiplicação e divisão*/

    /*int num1, num2, num3, resultado;
    char op; //variavel que vai ser dada como opção do que a pessoa deseja

    cout << "Digite o primeiro numero  \n";
    cin >> num1;
    cout << "Digite o segundo numero  \n";
    cin >> num2;
    cout << "Digite a operacao desejada ( +, -, *, /)  \n";
    cin >> op;

    switch(op)
    {
    case '+':
        resultado = num1 + num2;
        cout << "A Soma dos valores: "<< resultado << endl;
        break;
    case '-':
        resultado = num1 - num2;
        cout << "A diferença dos valores: "<< resultado << endl;
        break;
    case '*':
        resultado = num1 * num2;
        cout << "A multiplicacao dos valores: "<< resultado << endl;
        break;
    case '/':
        resultado = num1 / num2;
        cout << "A divisao dos valores: "<< resultado << endl;
        break;
    default:
            cout << "Operacao inexistente" << endl;
            break;
    }
*/
/*Encontrar o dobro de um numero caso ele seja positivo e o seu triplo caso ele seja negativo, imprimit o resultado

    int num1, resultado;

    cout << "Digite um numero \n";
    cin  >> num1;

    if (num1 > 0)
    {
        resultado = num1*2;
        cout << "Numero positivo e seu resultado e: " << resultado << endl;
    } else
    {
        resultado = num1*3;
        cout << "Numero negativo e seu resultado e: " << resultado << endl;
    }*/
    /*Faça um algoritmo que leia uma variável
    e some 5 caso seja par ou some 8 caso seja ímpar, imprimir o resultado desta operação

     int num1, resultado;

    cout << "Digite um numero \n";
    cin  >> num1;

    if (num1 %2 == 0)
    {
        resultado = num1 + 5;
        cout << "Numero par e seu resultado e: " << resultado << endl;
    } else
    {
        resultado = num1 + 8;
        cout << "Numero impar e seu resultado e: " << resultado << endl;
    }
    */

    /*Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem decrescente*/
    /*
    int a, b,c;
    cout << "Digite primeiro numero \n";
    cin  >> a;
    cout << "Digite segundo numero \n";
    cin  >> b;
    cout << "Digite terceiro numero \n";
    cin  >> c;

    if((a> b) && (b>c) )
    {
        cout << "Ordem decrescente "<< a <<" "<< b <<" "<< c <<endl;
    }
    if((a> b) && (b<c) )
    {
        cout << "Ordem decrescente "<< a <<" "<< c <<" " <<b <<endl;
    }
    if (b>c && (c>a))
    {
        cout << "Ordem decrescente "<< b <<" "<< c <<" "<< a <<endl;
    }
     if (b>c && (c<a))
    {
        cout << "Ordem decrescente "<< b<<" " << a <<" "<< c <<endl;
    }
    if(c>a && (a>b))
    {
        cout << "Ordem decrescente "<< c <<" "<< a <<" "<< b <<endl;
    } if(c>a &&(a<b))
    {
        cout << "Ordem decrescente "<< c <<" "<< b <<" "<< a <<endl;
    }

    /*
    Tendo  como  dados  de  entrada  a  altura  e  o  sexo  de  uma  pessoa,
    construa  um  algoritmo  que  calcule seu peso ideal, utilizando as seguintes fórmulas:
    ●para homens: (72.7 * h) – 58;
    ●para mulheres: (62.1 * h) – 44.7.


    float altura, homem, mulher;
    char sexo;
    string nome;

        cout << "Digite seu nome: "<< endl;
        cin >> nome;
        cout << "Digite sua altura: "<< endl;
        cin >> altura;
        cout << "Digite seu M (masculino) F (feminino):" << endl;
        cin >> sexo;

        switch (sexo)
        {

        case 'm':
            homem = (72.7*altura) - 58;
            cout << nome << " Seu peso ideal: " << homem <<endl;
            break;
        case 'f':
            mulher = (62.1 *altura) - 44.7;
            cout << nome << " Seu peso ideal: " << mulher <<endl;
            break;
        default:
            cout << "Operacao inexistente" << endl;
            break;
        }
        */
/*
O  IMC  –  Indice  de  Massa  Corporal  é  um  critério  da  Organização  Mundial  de  Saúde  para  dar  uma indicação
 sobre a condição de peso de uma pessoa adulta. A fórmula é IMC = peso / ( altura )2
 Elabore  um  algoritmo  que  leia  o  peso  e  a  altura  de  um  adulto  e  mostre  sua  condição  de  acordo  com a tabela abaixo.
  IMC em adultos Condição
   Abaixo de 18,5 Abaixo do peso
   Entre 18,5 e 25 Peso normal
   Entre 25 e 30 Acima do peso
   Acima de 30 obeso


    float altura, peso, imc;

    string nome;

        cout << "Digite seu nome: "<< endl;
        cin >> nome;
        cout << "Digite sua altura: "<< endl;
        cin >> altura;
        cout << "Digite seu peso:" << endl;
        cin >> peso;

        imc = peso / (altura * altura);

        if(imc < 18.5)
        {
            cout << nome << " seu IMC e: "<< imc <<" voce esta ABAIXO do peso" << endl;
        } if ((imc > 18.5) && (imc < 25))
        {
            cout << nome << " seu IMC e: "<< imc <<" voce esta com peso NORMAL" << endl;
        } if ((imc > 25) && (imc < 30))
        {
            cout << nome << " seu IMC e: "<< imc <<" voce esta ACIMA do peso" << endl;
        } if(imc> 30)
        {
            cout << nome << " seu IMC e: "<< imc <<" voce esta OBESO" << endl;
        }
        */
        /*
         Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço
        normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir
        para ler qual acondição de pagamento escolhida e efetuar o cálculo adequado.
        Código Condição de pagamento
        1 À vista em dinheiro ou cheque, recebe 15% de desconto
        2 À vista no cartão de crédito, recebe 10% de desconto
        3 Em duas vezes, preço normal de etiqueta sem juros
        4 Em duas vezes, preço normal de etiqueta mais juros de 10

        float preco, desconto;
        string produto;
        char op;

        cout << "Informe o produto" << endl;
        cin >> produto;
        cout << "Informe o preco do produto" << endl;
        cin >> preco;
        cout << "Escolha a forma de pagamento:\n A vista (v)\n Cartao (c)\n Duas vezes sem juros (s)\n Duas vezes com juros (j)" << endl;
        cin >> op;


        switch (op)
        {
            case 'v':
                desconto = preco*0.85;
                cout << "Seu pagamento R$ " << desconto <<" reais" << endl;
                break;
            case 'c':
                desconto = preco*0.9;
                cout << "Seu pagamento R$ " << desconto <<" reais" << endl;
                break;
            case 's':
                desconto = preco/2;
                cout << "Seu pagamento parcelado em 2x de R$ " << desconto <<" reais" << endl;
                break;
            case 'j':
                desconto = (preco+(preco*0.1))/2;
                cout << "Seu pagamento R$ " << desconto <<" reais" << endl;
                break;
            default:
            cout << "Operacao inexistente" << endl;
            break;
        }
        */
        /*Escreva um algoritmo que leia o número de identificação, as 3 notas obtidas por um aluno nas
        3 verificações e a média dos exercícios que fazem parte da avaliação, e calcule a média de
        aproveitamento, usando a fórmula:
        MA := (nota1 + nota 2 * 2 + nota 3 * 3 + ME)/7
        A atribuição dos conceitos obedece a tabela abaixo. O algoritmo deve escrever o número do aluno,
        suas notas, a média dos exercícios, a média de aproveitamento, o conceito correspondente e a
        mensagem 'Aprovado' se o conceito for A, B ou C, e 'Reprovado' se o conceito for D ou E.
        Média de aproveitamento Conceito
            >= 90 A
            >= 75 e < 90 B
            >= 60 e < 75 C
            >= 40 e < 60 D
            < 40 E */
            float nota1, nota2, nota3, MA, ME;
            string nome;

            cout << "Digite o nome do aluno" << endl;
            cin >> nome;
            cout << "Digite as notas do aluno" << endl;
            cin >> nota1>>nota2>>nota3;
            cout << "Digite a media de exercicio"<< endl;
            cin >> ME;
            MA = (nota1 + nota2*2 + nota3*3 + ME)/7;

            if (MA >= 9.0)
            {
                cout << nome << " voce foi aprovado com conceito A"<< endl;
            } if (MA < 9.0 && MA>=7.5)
            {
                cout << nome << " voce foi aprovado com conceito B"<< endl;
            } if (MA < 7.5 && MA >=6.0)
            {
                cout << nome << " voce foi aprovado com conceito C"<< endl;
            } if (MA < 6.0 && MA >= 4.0)
            {
                cout << nome << " voce foi aprovado com conceito D"<< endl;
            } if (MA < 4.0)
            {
                cout << nome << " voce foi aprovado com conceito E"<< endl;
            }

    return 0;
}
