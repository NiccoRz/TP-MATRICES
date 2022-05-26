#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>


int main()
{
    int op;
    do
    {
        system("cls");
        printf("RUIZ NICOLAS - TP MATRICES\n\n");
        for(int i=1; i<=19; i++)
        {
            printf("- Ejercicio %i\n",i);
        }
        printf("\nPresione 0 (cero) para salir...\n");
        printf("\nDigite un ejercicio: ");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
            system("cls");
            Ejercicio1();
            printf("\n\n");
            system("PAUSE");
            break;
        case 2:
            system("cls");
            Ejercicio2();
            printf("\n\n");
            system("PAUSE");
            break;
        case 3:
            system("cls");
            Ejercicio3();
            printf("\n\n");
            system("PAUSE");
            break;
        case 4:
            system("cls");
            Ejercicio4();
            printf("\n\n");
            system("PAUSE");
            break;
        case 5:
            system("cls");
            Ejercicio5();
            printf("\n\n");
            system("PAUSE");
            break;
        case 6:
            system("cls");
            Ejercicio6();
            printf("\n\n");
            system("PAUSE");
            break;
        case 7:
            system("cls");
            Ejercicio7();
            printf("\n\n");
            system("PAUSE");
            break;
        case 8:
            system("cls");
            Ejercicio8();
            printf("\n\n");
            system("PAUSE");
            break;
        case 9:
            system("cls");
            Ejercicio9();
            printf("\n\n");
            system("PAUSE");
            break;
        case 10:
            system("cls");
            Ejercicio10();
            printf("\n\n");
            system("PAUSE");
            break;
        case 11:
            system("cls");
            Ejercicio11();
            printf("\n\n");
            system("PAUSE");
            break;
        case 12:
            system("cls");
            Ejercicio12();
            printf("\n\n");
            system("PAUSE");
            break;
        case 13:
            system("cls");
            Ejercicio13();
            printf("\n\n");
            system("PAUSE");
            break;
        case 14:
            system("cls");
            Ejercicio14();
            printf("\n\n");
            system("PAUSE");
            break;
        case 15:
            system("cls");
            Ejercicio15();
            printf("\n\n");
            system("PAUSE");
            break;
        case 16:
            system("cls");
            Ejercicio16();
            printf("\n\n");
            system("PAUSE");
            break;
        case 17:
            system("cls");
            Ejercicio17();
            printf("\n\n");
            system("PAUSE");
            break;
        case 18:
            system("cls");
            Ejercicio18();
            printf("\n\n");
            system("PAUSE");
            break;
        case 19:
            system("cls");
            Ejercicio19();
            printf("\n\n");
            system("PAUSE");
            break;
        case 0:
            break;
        default:
            system("cls");
            gotoxy(40,0);
            printf("El ejercicio ingresado no existe...");
            printf("\n\n");
            system("PAUSE");
            break;
        }
    }
    while(op!=0);

    return 0;
}

void cargarMatriz(int dimC,int A[][dimC],int dimF)
{
    for (int i=0;i<dimF;i++)
    {
        for(int j=0;j<dimC;j++)
        {
            printf("Ingrese elemento [%i][%i]: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
}
void mostrarMatriz(int dimC,int A[][dimC],int dimF)
{
    for(int i=0;i<dimF;i++)
    {
        for(int j=0;j<dimC;j++)
        {
            printf("| %d |",A[i][j]);
        }
        printf("\n");
    }
}
void cargaRandom(int dimC,int matriz[][dimC],int dimF)
{
    srand(time(NULL));
    for(int fila=0;fila<dimF;fila++)
    {
        for(int col=0;col<dimC;col++)
        {
            matriz[fila][col]=rand()%10;
        }
    }
}
int sumaElementos(int dimC,int matriz[][dimC],int dimF)
{
    int suma=0;
    for(int fila=0;fila<dimF;fila++)
    {
        for(int col=0;col<dimC;col++)
        {
            suma=suma + matriz[fila][col];
        }
    }
    return suma;
}
float promedioMatriz(int dimC,int m[][dimC],int dimF)
{
    int suma=0;
    float prom=0;
    int cont=0;
    for(int fila=0;fila<dimF;fila++)
    {
       for(int col=0;col<dimC;col++)
       {
        suma=suma + m[fila][col];
        cont++;
       }
    }
    prom=(float)suma/(float)cont;
    return prom;
}
int buscarNumero(int dimC,int matriz[][dimC],int dimF,int dato)
{
    int flag=0;
    int fila=0;
    int col=0;
    while(dato!=matriz[fila][col] && fila<dimF && col<dimC)
    {
        for(fila=0; fila<dimF; fila++)
        {
            for(col=0; col<dimC; col++)
            {
                if (dato==matriz[fila][col])
                {
                    flag=1;
                }
            }
        }
    }
    return flag;
}
int cargarString(char A[][30],int dim)
{
    char op='s';
    int i=0;
    while(i<dim && op=='s')
    {
        printf("Cargue una palabra: ");
        fflush(stdin);
        gets(A[i]);
        i++;
        printf("Desea seguir cargado? Presione 's' o 'n': ");
        fflush(stdin);
        scanf("%c",&op);
        printf("\n");
    }
    return i;
}
void mostrarString(char A[][30],int val)
{
    for(int i=0;i<val;i++)
    {
        printf("- %s\n",A[i]);
    }
}
int buscarString(char A[][30],int val,char dato[][30])
{
    int i=0;
    int flag=-1;
    while(i<val && strcmpi(A[i],dato[0])!=0)
    {
        i++;
    }
    if(strcmpi(A[i],dato[0])==0)
    {
       flag=i;
    }
    return flag;
}
void ordSeleccionString(char A[][30],int val)
{
    int i,j,min,comp;
    char aux[val][30];
    for(i=0;i<val;i++)
    {
        min=i;
        for(j=i+1;j<val;j++)
        {
            comp = strcmp(A[j],A[min]);
            if(comp<0)
            {
                min=j;
            }
        }
        strcpy(aux,A[i]);
        strcpy(A[i],A[min]);
        strcpy(A[min],aux);
    }
}
int determinanteOrdenDos(int A[2][2])
{
    int determinante=0;

    determinante = A[0][0] * A[1][1] - (A[0][1] * A[1][0]);

    return determinante;
}
void multiplicarMatrices(int dFA,int dCA,int A[][dCA],int dCB,int B[][dCB],int AB[dFA][dCB])
{

    for(int a=0;a<dCB;a++) ///Necesitamos hacer esto por cada columna de la segunda matriz (B).
    {
        for(int i=0;i<dFA;i++) ///Recorremos la fila de la primera matriz (A).
        {
            int suma=0;
            for(int j=0;j<dCA;j++) ///Recorremos cada columna de la primera matriz (A).
            {
                suma+=A[i][j]*B[j][a]; ///Multiplicamos y sumamos resultado.
            }
            AB[i][a]=suma; ///Lo acomodamos dentro de AxB.
        }
    }
}
void inversaOrdenDos(int A[2][2],int IA[2][2])
{
    IA[0][0] = A[1][1];
    IA[0][1] = -(A[0][1]);
    IA[1][0] = -(A[1][0]);
    IA[1][1] = A[0][0];
}
int sumaVotantes(int A[],int B[],int C[],int D[],int dim)
{
    int suma=0;
    for(int i=0;i<dim;i++)
    {
        suma = suma + A[i] + B[i] + C[i] + D[i];
    }
    return suma;
}
float mostrarPorcentaje(int A[],int dim,int total)
{
    int suma=sumaCand(A,dim);
    float porcentaje=0;
    porcentaje = (float)suma*100/total;
    return porcentaje;
}
int sumaCand(int A[],int dim)
{
    int suma=0;
    for(int i=0;i<dim;i++)
    {
      suma += A[i];
    }
    return suma;
}
int verificarSimetrica(int dimC,int A[][dimC],int dimF)
{
    int flag=0;

    for(int i=0;i<dimF;i++)
    {
        for(int j=0;j<dimC;j++)
        {
            if(A[i][j]!=A[j][i])
            {
                flag=-1;
            }
        }
    }
    return flag;
}
void generarMatrizIdentidad(int orden,int A[orden][orden])
{
    for(int i=0;i<orden;i++)
    {
        for(int j=0;j<orden;j++)
        {
            if(i==j)
            {
                A[i][j]=1;
            }
            else
            {
                A[i][j]=0;
            }
        }
    }
}
void convertirTraspuesta(int dimC,int A[][dimC],int dimF,int At[][dimF])
{
    for(int i=0;i<dimF;i++)
    {
        for(int j=0;j<dimC;j++)
        {
            At[j][i]=A[i][j];
        }
    }
}


int Ejercicio1()
{
    printf("EJERCICIO 1 - TP MATRICES\n\n");
    printf("Hacer una funcion que reciba como parametro una matriz de numeros enteros y permita que el usuario ingrese valores al mismo por teclado. La funcion debe cargar la matriz por completo.\n\n");
    int matriz[4][4];
    cargarMatriz(4,matriz,4);
    mostrarMatriz(4,matriz,4);
}

int Ejercicio2()
{
    printf("EJERCICIO 2 - TP MATRICES\n\n");
    printf("Hacer una funcion que reciba como parametro una matriz de numeros enteros y la muestre por pantalla (en formato matricial).\n\n");
    int matriz[10][10];
    cargaRandom(10,matriz,10);
    mostrarMatriz(10,matriz,10);
}

int Ejercicio3()
{
    printf("EJERCICIO 3 - TP MATRICES\n\n");
    printf("Hacer una funcion que reciba como parametro una matriz de numeros enteros y que cargue la misma con numeros aleatorios (sin intervencion del usuario). La funcion debe cargar la matriz por completo.\n\n");
    int matriz[5][5];
    cargaRandom(5,matriz,5);
    mostrarMatriz(5,matriz,5);
}

int Ejercicio4()
{
    printf("EJERCICIO 4 - TP MATRICES\n\n");
    printf("Hacer una funcion tipo int que sume el contenido total de una matriz de numeros enteros.\n\n");
    int matriz [3][3];
    cargarMatriz(3,matriz,3);
    mostrarMatriz(3,matriz,3);
    int suma = sumaElementos(3,matriz,3);
    printf("\n\nLa suma de todos los elementos de la matriz es: %d",suma);
}

int Ejercicio5()
{
    printf("EJERCICIO 5 - TP MATRICES\n\n");
    printf("Hacer una funcion tipo float que calcule el promedio de una matriz de numeros enteros.\n\n");
    int matriz[3][3];
    cargarMatriz(3,matriz,3);
    mostrarMatriz(3,matriz,3);
    float prom=promedioMatriz(3,matriz,3);
    printf("\nEl promedio los elementos de la matriz es: %.2f",prom);
}

int Ejercicio6()
{
printf("EJERCICIO 6 - TP MATRICES\n");
    printf("Hacer una funcion que determine si un elemento se encuentra dentro de una matriz de numeros enteros. La funcion recibe la matriz y el dato a buscar.\n\n");
    int matriz[4][4];
    int dato;
    cargaRandom(4,matriz,4);
    mostrarMatriz(4,matriz,4);
    printf("\nIngrese el elemento a buscar: ");
    scanf("%d",&dato);
    int flag=buscarNumero(4,matriz,4,dato);
    if(flag==1)
    {
        printf("\nEl numero %d, se encuentra en la matriz!",dato);
    }
    else
    {
        printf("\nEl numero %d, no se encuentra en la matriz...",dato);
    }
}

int Ejercicio7()
{
    printf("EJERCICIO 7 - TP MATRICES\n\n");
    printf("Hacer una funcion que cargue un arreglo de palabras (strings). La funcion debe retornar cuantas palabras se cargaron.  (puede ser a traves del parametro como puntero)\n\n");
    char aChar[50][30];
    int val=cargarString(aChar,50);
    printf("La cantidad de palabras cargadas es de: %d",val);
}

int Ejercicio8()
{
    printf("EJERCICIO 8 - TP MATRICES\n\n");
    printf("Hacer una funcion que muestre un arreglo de palabras.\n\n");
    char A[20][30];
    int val=cargarString(A,20);
    mostrarString(A,val);
}

int Ejercicio9()
{
printf("EJERCICIO 9 - TP MATRICES\n\n");
    printf("Hacer una funcion que determine si un string se encuentra dentro de un arreglo de strings. La funcion recibe el arreglo, la cantidad de palabras que contiene y la palabra a buscar. ///devuelve el indice de la fila en que se encuentra, de lo contrario -1\n\n");
    char A[20][30];
    int val = cargarString(A,20);
    char dato[1][30];
    mostrarString(A,val);
    printf("Ingrese una palabra a buscar: ");
    fflush(stdin);
    scanf("%s", &dato[0]);

    int flag = buscarString(A,val,dato);
    if(flag==-1)
    {
        printf("\nLa palabra ingresada no se encuentra...");
    }else{
    printf("\nLa palabra ingresada se encuentra en la posicion: %d",flag);
    }
}

int Ejercicio10()
{
    printf("EJERCICIO 10 - TP MATRICES\n\n");
    printf("Hacer una funcion que determine si un string se encuentra dentro de un arreglo de strings ordenado alfabeticamente. La funcion recibe el arreglo, la cantidad de palabras que contiene y el string a buscar.  ///devuelve el indice de la fila en que se encuentra, de lo contrario -1\n\n");
    char A[5][30]={"Algoritmo","Busqueda","Caracter","Diamante","Electronica"};
    mostrarString(A,5);
    char B[1][30];
    printf("\nIngrese la palabra a buscar: ");
    fflush(stdin);
    scanf("%s",&B[0]);

    int flag = buscarString(A,5,B);
    if(flag==-1)
    {
        printf("\nLa palabra ingresada no se encuentra...");
    }else{
        printf("\nLa palabra ingresada se encuentra en la posicion: %d",flag);
    }
}

int Ejercicio11()
{
    printf("EJERCICIO 11 - TP MATRICES\n\n");
    printf("Hacer una funcion (o varias) que ordene un arreglo de palabras por orden alfabetico. (Por seleccion o insercion, el que mas te guste).\n\n");
    char A[20][30];
    int val = cargarString(A,20);
    printf("\nCadena DADA: \n");
    mostrarString(A,val);
    ordSeleccionString(A,val);
    printf("\nCadena Ordenada: \n");
    mostrarString(A,val);
}

int Ejercicio12()
{
    printf("EJERCICIO 12 - TP MATRICES\n\n");
    printf("Hacer una funcion que retorne el determinante de una matriz de 2x2. \n\n");
    int A[2][2];
    cargarMatriz(2,A,2);
    printf("Matriz A: \n");
    mostrarMatriz(2,A,2);
    int det=determinanteOrdenDos(A);
    printf("El determinante de la Matriz A es: %d",det);
}

int Ejercicio13()
{
    printf("EJERCICIO 13 - TP MATRICES\n\n");
    printf("Funcion que verifique si una matriz de 2x2 tiene inversa.\n\n");
    int A[2][2];
    cargarMatriz(2,A,2);
    mostrarMatriz(2,A,2);
    int det = determinanteOrdenDos(A);
    if(det!=0)
    {
        printf("\nTiene Inversa! Su determinante es: %d",det);
    }else{

    printf("\nNo tiene inversa, su determinante es %d...",det);
    }
}

int Ejercicio14()
{
    printf("EJERCICIO 14 - TP MATRICES\n\n");
    printf("Hacer una funcion que multiplique una matriz de 2x2 por una matriz de 2x5.\n\n");
    int A[2][2];
    int B[2][5];
    int AB[2][5];

    printf("Matriz A: \n");
    cargaRandom(2,A,2);
    mostrarMatriz(2,A,2);

    printf("\nMatriz B: \n");
    cargaRandom(5,B,2);
    mostrarMatriz(5,B,2);


    multiplicarMatrices(2,2,A,5,B,AB);
    printf("\nAxB: \n");
    mostrarMatriz(5,AB,2);
}

int Ejercicio15()
{
    printf("EJERCICIO 15 - TP MATRICES\n\n");
    printf("Hacer una funcion que calcule la matriz inversa de una matriz de 2x2.\n\n");
    int A[2][2];
    int IA[2][2];
    cargaRandom(2,A,2);
    printf("Matriz A: \n");
    mostrarMatriz(2,A,2);
    printf("\nMatriz Inversa de A: \n");
    inversaOrdenDos(A,IA);
    mostrarMatriz(2,IA,2);
}

int Ejercicio16()
{
    printf("EJERCICIO 16 - TP MATRICES\n\n");
    printf("Los resultados de las ultimas elecciones a Intendente en el pueblo 'La Matrix' han sido los siguientes: \n\n");
    int A[5]={194,180,221,432,820};
    int B[5]={48,20,90,51,61};
    int C[5]={206,320,140,821,946};
    int D[5]={45,16,20,14,18};
    gotoxy(0,5);
    printf("Distrito");
    gotoxy(3,7);
    printf("1");
    gotoxy(3,9);
    printf("2");
    gotoxy(3,11);
    printf("3");
    gotoxy(3,13);
    printf("4");
    gotoxy(3,15);
    printf("5");

    gotoxy(15,5);
    printf("Candidato A");
    gotoxy(19,7);
    printf("194");
    gotoxy(19,9);
    printf("180");
    gotoxy(19,11);
    printf("221");
    gotoxy(19,13);
    printf("432");
    gotoxy(19,15);
    printf("820");

    gotoxy(30,5);
    printf("Candidato B");
    gotoxy(34,7);
    printf("48");
    gotoxy(34,9);
    printf("20");
    gotoxy(34,11);
    printf("90");
    gotoxy(34,13);
    printf("51");
    gotoxy(34,15);
    printf("61");

    gotoxy(45,5);
    printf("Candidato C");
    gotoxy(49,7);
    printf("206");
    gotoxy(49,9);
    printf("320");
    gotoxy(49,11);
    printf("140");
    gotoxy(49,13);
    printf("821");
    gotoxy(49,15);
    printf("946");

    gotoxy(60,5);
    printf("Candidato D");
    gotoxy(64,7);
    printf("45");
    gotoxy(64,9);
    printf("16");
    gotoxy(64,11);
    printf("20");
    gotoxy(64,13);
    printf("14");
    gotoxy(64,15);
    printf("18");


    int total= sumaVotantes(A,B,C,D,5);
    printf("\n\nLa cantidad total de votantes es de: %d",total);

    int sA = sumaCand(A,5);
    float pA = mostrarPorcentaje(A,5,total);
    printf("\nEl candidato A obtuvo el %.2f%% de los votos con %d votos.",pA,sA);

    int sB = sumaCand(B,5);
    float pB = mostrarPorcentaje(B,5,total);
    printf("\nEl candidato B obtuvo el %.2f%% de los votos con %d votos.",pB,sB);

    int sC = sumaCand(C,5);
    float pC = mostrarPorcentaje(C,5,total);
    printf("\nEl candidato C obtuvo el %.2f%% de los votos con %d votos.",pC,sC);

    int sD = sumaCand(D,5);
    float pD = mostrarPorcentaje(D,5,total);
    printf("\nEl candidato D obtuvo el %.2f%% de los votos con %d votos.",pD,sD);

    printf("\n\n\nEl candidato C es el ganador con un %.2f%% de votos total!",pC);
    printf("\nEl candidato A y B pasan a la siguiente ronda!");
}

int Ejercicio17()
{
    printf("EJERCICIO 17 - TP MATRICES\n\n");
    printf("Hacer una funcion que verifique si una matriz cuadrada es simetrica. (A[i][j] == A[j][i])\n\n");
    int A[4][4];
    cargarMatriz(4,A,4);
    printf("\n\nMatriz A: \n");
    mostrarMatriz(4,A,4);
    int flag=verificarSimetrica(4,A,4);
    if(flag==0)
    {
        printf("\nEs una matriz simetrica!");
    }else{
        printf("\nNo es una matriz simetrica...");
    }
}

int Ejercicio18()
{
    printf("EJERCICIO 18 - TP MATRICES\n\n");
    printf("Hacer una funcion que genere la matriz identidad.\n\n");
    int orden;
    printf("Ingrese orden de la matriz identidad: ");
    scanf("%d",&orden);
    int A[orden][orden];
    generarMatrizIdentidad(orden,A);
    printf("\nMatriz Identidad: \n");
    mostrarMatriz(orden,A,orden);
}

int Ejercicio19()
{
    printf("EJERCICIO 19 - TP MATRICES\n\n");
    printf("Hacer una funcion que calcule la matriz traspuesta.\n\n");
    int A[3][5];
    int At[5][3];
    cargarMatriz(5,A,3);

    printf("\nMatriz A: \n");
    mostrarMatriz(5,A,3);
    convertirTraspuesta(5,A,3,At);
    printf("\nMatriz traspuesta de A: \n");
    mostrarMatriz(3,At,5);
}
