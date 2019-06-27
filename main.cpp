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

    return 0;
}
