#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <cstring>
#include <windows.h>
#include<cmath>
using namespace std;
void gotoxy(int x1, int y1){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x1;
	dwPos.Y = y1;
	SetConsoleCursorPosition(hcon, dwPos);
}
char opc;
int x=10, y=10;
int main()
{
    int opcion, ele, elec, numero, p, i;
    float primero, segundo, resultado, resul, cantidad;
    do
    {
        cout << "\n  1. Suma, Resta, Multiplicacion y division de dos numeros." << "\t   11. Numeros decimales a binario."<< endl;
        cout << "\n  2. Numero Par o Impar." << "\t \t \t \t \t   12. Numeros decimales a hexadecimales."<<endl;
        cout << "\n  3. Conversor." << "\t \t \t \t \t \t \t   13. Figuras geometricas." << endl;
        cout << "\n  4. Numero o palabra palindromo." << "\t \t \t \t   14. Mover un punto por la pantalla." << endl;
        cout << "\n  5. Numeros arabigos a romanos." << "\t \t \t \t   15. Simulacion de un Cajero." << endl; 
        cout << "\n  6. Numeros a letras."  << "\t \t \t \t \t \t   16. Calcular la hipotenusa." << endl;
        cout << "\n  7. Numeros decimales a letras." << endl;
        cout << "\n  8. Tabla de un numero." << endl;
        cout << "\n  9. Tablas de multiplicar del 1 al 10." << endl;
        cout << "\n  10. Multiplicacion grafica." << endl;
        cout << "\n \t \t \t \t \t \t \t \t \b    21. Salir." << endl;
        cout << "\n\n   Introduzca opcion (): " << endl;

        cin >> opcion;

        switch ( opcion )
        {
            case 1: 
			cout << "Que operacion desea realizar Suma [1] Resta [2] Multiplicacion [3] Division [4]." << endl;
			cin >> ele;
			cout << "Ingrese el primer numero: ";
			cin >> primero;
			cout << "Ingrese el segundo numero: ";
			cin >> segundo;
			if (ele==1){
			 resultado = primero+segundo;}
			if (ele==2){
			resultado = primero-segundo;}
			if (ele==3){
			resultado = primero*segundo;}
			if (ele==4){
			resultado = primero/segundo;}
			cout << resultado;
			break;
			
			case 2: int numero;
    		cout << " Escribe un numero :" << endl;
    		cin >> numero;
    			if(numero % 2 == 0){
    				cout << "Es par" << endl;
    				}else{
    				cout << "Es impar" << endl;
					}
                    break;
            case 3 :
            	cout << "Que conversion desea realizar km a mi [1] mi a km [2] " << endl;
            	cout << " m a pul [3] pul a m [4] lb a kg [5] kg a lb [6]  " << endl;
				cin >> elec;
				switch(elec){
				case 1 :
					cout << " Introduce la cantidad de km: " << endl;
					cin>>cantidad;
					resul=cantidad*0.6214;
					cout << cantidad << "km equivale a " << resul << " millas" << endl;
					break;
				case 2 :
				 cout << " Introduce la cantidad de millas: " << endl;
					cin>>cantidad;
					resul=cantidad*1.6093;
					cout << cantidad<< " millas equivale a " <<  resul <<" km" << endl;
					break;
				case 3 :
				cout << " Introduce la cantidad de metros: " << endl;
					cin>>cantidad;
					resul=cantidad*39.3701;
					cout << cantidad<< " m equivale a " <<  resul <<" pul" << endl;
					break;
			case 4 :
				cout << " Introduce la cantidad de pulgadas: " << endl;
				cin>>cantidad;
				resul=cantidad*0.0254 ;
				cout << cantidad<< " pul equivale a " <<  resul << " m" << endl;
				break;
			case 5:
				cout << " Introduce la cantidad de libras: " << endl;
					cin>>cantidad;
					resul=cantidad*2.20462;
					cout << cantidad<< " lb equivale a " <<  resul << " kg" << endl;
					break;
				case 6:
				 	cout << " Introduce la cantidad de kilogramos: " << endl;
					cin>>cantidad;
					resul=cantidad* 0.453592;
					cout << cantidad<< " kg equivale a "  <<  resul << " lb" << endl;
					break;
				}
            	break;
            case 4 :
    			char cadena[100], copia[100];
    			cout<<"Ingrese palabra o numero: "<<endl;
    			cin>>cadena;
    			
    			for(int i=(strlen(cadena)-1);i>=0;i--){
    				copia[strlen(cadena)-1-i]=cadena[i];
				}
				copia[strlen(cadena)]='\0';
				if(strcmp(cadena,copia)==0){
					cout << "Es palindroma";
				}else{
					cout << "no es palindroma";
				}
    			break;
    		case 5 :
				int numeros,unidades,decenas,centenas,millares;
				cout << "\nIngresa un numero entre [1-3999] para convertirlo a romano: ";
				cin >> numero;
		
				unidades = numero%10; numero /= 10;
				decenas = numero%10; numero /= 10;
				centenas = numero%10; numero /= 10;
				millares = numero%10; numero /= 10;
		
				switch(millares){
				case 1: cout << "M"; break;
				case 2: cout << "MM"; break;
				case 3: cout << "MMM"; break;}
		
				switch(centenas){
				case 1: cout << "C"; break;
				case 2: cout << "CC"; break;
				case 3: cout << "CCC"; break;
				case 4: cout << "CD"; break;
				case 5: cout << "D"; break;
				case 6: cout << "DC"; break;
				case 7: cout << "DCC"; break;
				case 8: cout << "DCCC"; break;
				case 9: cout << "CM"; break;}
		
				switch(decenas){	
				case 1: cout << "X"; break;
				case 2: cout << "XX"; break;
				case 3: cout << "XXX"; break;
				case 4: cout << "XL"; break;
				case 5: cout << "L"; break;
				case 6: cout << "LX"; break;
				case 7: cout << "LXX"; break;
				case 8: cout << "LXXX"; break;
				case 9: cout << "XC"; break;}
		
				switch(unidades){
				case 1: cout << "I"; break;
				case 2: cout << "II"; break;
				case 3: cout << "III"; break;
				case 4: cout << "IV"; break;
				case 5: cout << "V"; break;
				case 6: cout << "VI"; break;
				case 7: cout << "VII"; break;
				case 8: cout << "VIII"; break;
				case 9: cout << "IX"; break;}
    			break;
    		case 6:
    			int x;
   				 cout<<"ingrese un numero"<<endl;
  				  cin>>x;
				if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
				else{
        		if(x>=900)   {cout<<"Novecientos " ;x=x-900;}
      			else if(x>=800)   {cout<<"Ochocientos " ;x=x-800;}
       			else if(x>=700)   {cout<<"Setecientos " ;x=x-700;}
       			else if(x>=600)   {cout<<"Seiscientos " ;x=x-600;}
       			else if(x>=500)   {cout<<"Quinientos "  ;x=x-500;}
       			else if(x>=400)   {cout<<"Cuatrocientos "   ;x=x-400;}
       			else if(x>=300)   {cout<<"Trescientos " ;x=x-300;}
       			else if(x>=200)   {cout<<"Doscientos "  ;x=x-200;}
      			else if(x>100)    {cout<<"Ciento "  ;x=x-100;}
       			else if(x==100)  {cout<<"Cien"     ;x=x-100;}
        		if(x>90) {cout<<"Noventa y "   ;x=x-90; }
            	if(x==90)   {cout<<"Noventa"  ;x=x-90; }  
           		if(x>80) {cout<<"Ochenta y "   ;x=x-80; }
            	if(x==80)   {cout<<"Ochenta"  ;x=x-80; }
            	if(x>70) {cout<<"Setenta y "   ;x=x-70; }
            	if(x==70)   {cout<<"Setenta"  ;x=x-70; }
            	if(x>60) {cout<<"Sesenta y "   ;x=x-60; }
            	if(x==60)   {cout<<"Sesenta"  ;x=x-60; }
            	if(x>50) {cout<<"Cincuenta y " ;x=x-50; }
            	if(x==50)   {cout<<"Cincuenta"    ;x=x-50; }
            	if(x>40) {cout<<"Cuarenta y "  ;x=x-40; }
            	if(x==40)   {cout<<"Cuarenta" ;x=x-40; }
            	if(x>30) {cout<<"Treinta y "   ;x=x-30; }
            	if(x==30)   {cout<<"Treinta"  ;x=x-30; }
            	if(x>20) {cout<<"Veinte y"       ;x=x-20; }
            	if(x==20)   {cout<<"Veinte"       ;x=x-20; }
        		if(x>=16)    {cout<<"Dieci"        ;x=x-10; }
       			else if(x==15)   {cout<<"Quince"       ;x=x-15; }
       			else if(x==14)   {cout<<"Catorce"  ;x=x-14; }
       			else if(x==13)   {cout<<"Trece"        ;x=x-13; } 
       			else if(x==12)   {cout<<"Doce"     ;x=x-12; }
       			else if(x==11)   {cout<<"Once"     ;x=x-11; }
       			else if(x==10)   {cout<<"Diez"     ;x=x-10; }      
        		if(x==9)    {cout<<"Nueve"        ;x=x-9;  }
        		if(x==8)    {cout<<"Ocho"     ;x=x-8;  }
        		if(x==7)    {cout<<"Siete"        ;x=x-7;  }
            	if(x==6)    {cout<<"Seis"     ;x=x-6;  }
       			else if(x==5)    {cout<<"Cinco"        ;x=x-5;  }
       			else if(x==4)    {cout<<"Cuatro"       ;x=x-4;  }
       			else if(x==3)    {cout<<"Tres"     ;x=x-3;  }
       			else if(x==2)    {cout<<"Dos"      ;x=x-2;  }
       			else if(x==1)    {cout<<"Uno"      ;x=x-1;  }
       			}
    			break;
    		case 7:
    			
    			
  				break;
			case 8 :
				int num;
				cout <<"ingrese un numero entero positivo: " << endl;
				cin>>num;
				for(int i=1;i<=10;i++){
					cout << num <<" x " <<i<<" = " <<num*i<<endl;
				}
				break;
			case 9 :
				for(int i = 1; i <=10; i++){
					cout <<"_________________"<<endl;
					cout <<"La tabla del " << i<< endl;
					for(int m =0; m <= 10; m++){
						cout << i << " x " << m << " = " << i * m << endl;
					}
				}
				break;
			case 10:
				float n1, n2, n3, n4, resul;{
				cout<<"\n \t"<<"Escribe el primer Valor para multiplicar"<<endl;
				cout<<"\n \t";
				cin>>n1;
				cout<<"\n \t"<<"Escribe el segundo valor para multiplicar"<<endl;
				cout<<"\n \t";
				cin>>n2;
				cout<<"\n"<<endl;;
				resul=n1*n2;
				cout<<"\n \t"<<"     "<<n1<<endl;
				cout<<"\n \t"<<"  x "<<" "<<n2<<endl;
				cout<<"\t---------"<<endl;
				cout<<"\n \t"<<"     "<<resul<<endl;
				};
				return 0;
				break;
			case 11:
				int decimal;
			    short binario[8];
			    cout << "Teclea el valor en decimal a convertir:" << endl;
			    cin >> decimal;
			    for (int i = 0; i < 8; i++)
			    {
			    binario[i] = decimal % 2;
			    decimal /= 2;
			    }
			    cout << "El numero en binario es:" << endl;
			    for (int i = 7; i >= 0; i--)
			    {
			    cout << binario[i];
			    }
				break;
			case 12:
				int o, hexadecimal[999];
				printf("Ingresa un numero en sistema decimal: ");
				scanf("%i",&o);
				    
			     while (o!=0)
			     {
			           hexadecimal[i] = o%16; 
			           o = o /16; 
			           i++; 
			     }
			    
				i--;
				printf("Resultado en Hexadecimal: ");
				 
			     while (i>=0) 
			     {
			           switch(hexadecimal[i]) 
			           {
			                             case 10:
			                                  printf("A");
			                             break;
			                             case 11:
			                                  printf("B");
			                             break;
			                             case 12:
			                                  printf("C");
			                             break;
			                             case 13:
			                                  printf("D");
			                             break;
			                             case 14:
			                                  printf("E");
			                             break;
			                             case 15:
			                                  printf("F");
			                             break;
			                             default:
			                                   printf("%i",hexadecimal[i]); 
			                             break;
			           } 
			           i--;
			     }
			     printf("\n");
				return 0;
				break;
			case 13:
				int elec1, i;
				int n;
				cout << "Que Figura desea realizar cuadrado [1] triangulo [2]" << endl;
				cin >> elec1;
				switch(elec1){
					case 1:
					printf("Especifica el tamanio del cuadrado: ");
					scanf("%i",&n);
					printf("\n");
					  	for(int r = 1; r <= n; r++)
					  	{
					  	  for(int l = 1 ; l <=n ; l++)
							{
								printf("*");
						    }
						    printf("\n");
						}return 0;
						break;
					case 2:
						int k;
						printf("Ingresa el tamanio del triangulo: ");
						scanf("%i",&k);
						printf("\n");
						int ast=1, esp=k-1;
						  	for(int ren=1; ren<=k; ren++) 
							{
							  for(int i=1; i<=esp ; i++) 
								printf(" ");
							  for(int i=1; i<=ast ; i++)
					        	printf("*");
								printf("\n");
								ast= ast+2; 
								esp= esp-1; 
							}return 0;
						break;
				}
				break;
		case 14:
			while(opc !='z'){
				system("cls");
				gotoxy(x,y);cout<<"*";
				opc=getch();
				switch(opc)
				{
					case'w': y--;break;
					case's': y++;break;
					case'a': x--;break;
					case'd': x++;break;
				}
			}
			return 0;
			break;
		case 15:
			 int tresh;
			 int akshan, nunu;
			 tresh=10000;
			 do{
			  cout<<"Cajero automatico"<<endl;
			  cout<<"1- Consultar saldo inicial"<<endl;
			  cout<<"2- Retirar efectivo"<<endl;
			  cout<<"3- SALIR"<<endl;
			  cin>>akshan;
			  switch (akshan){
			   case 1:
			    cout<<"Su saldo inicial es de: "<<tresh<<endl;
			    break;
			   case 2:
			    cout<<"Ingrese monto a retirar" <<endl;
			    cin>>nunu;
			    cout<<"Su nuevo saldo es de: "<<tresh-nunu<<endl;
			    break;
			  }  
			 }
			 while (akshan!=3);
			break;
		case 16:
			system(yuumi);
            system("title Caso: Calcular la hipotenusa ");
            system("color 0f");
			int nidalee, jinx;
				 float vi;
				 {
				 
				 cout<<"digite cateto opuesto: ";
				 cin>>nidalee;
				 
				 cout<<"digite cateto adyacente: ";
				 cin>>jinx;
				 
				 lola=sqrt (pow(nidalee,2)+pow(jinx,2));
				 
				 cout<<"la hipotenusa es: "<<vi;
				 
				 cin.get();
				};
			system(yasuo);
            system(neeko);
            system(seraphine);
            system(yuumi);	
			break;
    	}
  	} while ( opcion != 21 );
    return 0;
}
