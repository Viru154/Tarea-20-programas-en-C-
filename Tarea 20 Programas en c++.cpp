#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <cstdlib>
#include <windows.h>
#define yuumi "cls"
#define yasuo "Pause"
#define seraphine "title (Tarea Programacion 1: 20 Codigos en C++)"
#define neeko "color 3f"

using namespace std;

void gotoxy(int x1, int y1) {
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x1;
	dwPos.Y = y1;
	SetConsoleCursorPosition(hcon, dwPos);
}

char opc;
int x=10, y=10;
int main() {
	system ("title Tarea Programacion 1: 20 Codigos en C++");
	system ("color 3F");
	int opcion, variable1, elec, numero, p, i; 
	int pyke, jhin, lulu, yone, fiora, nami, leona;
	float primero, segundo, resultado, resul, cantidad;
	do {
		cout << "\n\t   [1] Suma, Resta, Multiplicacion y division de dos numeros."<<"\t [2] Determinar si el No. Es par o Impar "<<endl;		  
		cout << "\n\t   [3] Conversor a medidas "                                  <<"\t [4] Determinar si una palabra o un numero es palindromo."<<endl;		  
		cout << "\n\t   [5] Numeros arabigos a romanos."                           <<"\t [6] Numeros a letras."<<endl;		    
		cout << "\n\t   [7] No existe es un mito... "                              <<"\t [8] Tabla de un numero."<<endl;		    
		cout << "\n\t   [9] Tablas de multiplicar"                                 <<"\t [10] Multiplicacion grafica."<<endl;		    
		cout << "\n\t   [11] Numeros decimales a binario."                         <<"\t [12] Numeros decimales a hexadecimales."<< endl;		    
		cout << "\n\t   [13] Figuras geometricas."                                 <<"\t [14] Mover un punto por la pantalla."<<endl;	    
		cout << "\n\t   [15] Simulacion de un Cajero."                             <<"\t [16] Calcular la hipotenusa."<<endl;  
		cout << "\n\t   [17] 1 Death-Chan"                                         <<"\t [18] 2. Pograma de una Heladeria"<<endl;  
		cout << "\n\t   [19] 3. Personal"                                          <<"\t [20] 4. Sistema de Recargas con multiplicador de Saldo"<<endl;
		cout << "  "<<endl;
		cout << "  "<<endl;   
		cout << "\t\n   [21] Salir."<<endl;
		cout << "  "<<endl;
		cout << "\t\n\n  Introduzca su Opcion --->:"<<endl;
		cout<<""<<endl;
		cin >> opcion;
		system(yuumi);

		switch ( opcion ) {
			case 1:
				system(yuumi);
				system("title Caso: Suma, Resta, Multiplicación y División de dos números");
				system("color 5f");
				cout<< "Que operacion desea realizar"<<endl;
				cout<< "[1] Suma"<<"  "<<"[2] Resta"<<endl;
				cout<< "[3] Multiplicacion"<<" "<<"[4] Division"<<endl;
				cin >> variable1;
				cout << "[Ingrese el primer valor]";
				cout<<" "<<endl;
				cin >> primero;
				cout << "[Ingrese el segundo valor]";
				cout<<" "<<endl;
				cin >> segundo;
				if (variable1==1) {resultado = primero+segundo;}
				if (variable1==2) {resultado = primero-segundo;}
				if (variable1==3) {resultado = primero*segundo;}
				if (variable1==4) {resultado = primero/segundo;}
				cout<<" "<<endl;
				cout<<resultado<<endl;
				system(yasuo);
				system (seraphine );
				system (neeko);
				system(yuumi);
				break;
			case 2:
				system(yuumi);
				system("title Caso: Determinar si un número es par o impar");
				system("color 0f");
				int numero;
				cout<<" Ingrese el Numero que Desee averiguar si es par o impar:"<<endl;
				cout<<"  "<<endl;
				cin>>numero;
				cout<<"  "<<endl;
				if(numero % 2 == 0) {
				cout << "Es par" <<"\t\n\n"<<endl;} 
				else {cout << "Es impar" <<"\t\n\n"<<endl;}
				system(yasuo);
				system(neeko);
				system(seraphine);
				system(yuumi);
				break;
			case 3 :
				system(yuumi);
				system("title Caso: Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa");
				system("color df");
				cout<<"\n Ingrese la Conversion que desea Realizar:\n"<<endl;
				cout<<"\n [1] KM a MI / / / [2] MI a KM \n"<<endl;
				cout<<"\n [3] Mt a Plg / / / [4] Plg a Mt \n"<<endl;
				cout<<"\n [5] Lb a Kg / / / [6] Kg a Lb \n"<<endl;
				cin >> elec;
				system(yuumi);
				switch(elec) {
					case 1 :
						system("title Caso 3: Kilometros a Millas");
						cout<<"Ingresa la cantidad deseada de Kilometros a Millas:"<<endl;
						cin>>cantidad;
						resul=cantidad*0.6214;
						cout<<cantidad<<"  "<<"Kilometros equivale a"<<"  "<<resul<<"Millas"<<endl;
						system(yasuo);
						system(neeko);
						system(seraphine);
						break;
					case 2 :
						system("title Caso 3: Millas a Kilometros");
						cout<<"Ingrese la cantidad deseada de Millas a Kilometros"<< endl;
						cin>>cantidad;
						resul=cantidad*1.6093;
						cout<<cantidad<<"  "<<"Millas equivale a"<<"  "<< resul<<"Km"<<endl;
						system(yasuo);
						system(neeko);
						system(seraphine);
						break;
					case 3 :
						system("title Caso 3: Metros a Pulgadas");
						cout<<"Ingrese la cantidad deseada de Metros a Pulgadas"<<endl;
						cin>>cantidad;
						resul=cantidad*39.3701;
						cout<<cantidad<<"  "<<"  Metros equivale a "<<"   "<<resul<<"  "<<"Pulgadas"<<endl;
						system(yasuo);
						system(neeko);
						system(seraphine);
						break;
					case 4 :
						system("title Caso3 : Pulgadas a Metros");
						cout<<"Introduce la cantidad deseada de Pulgadas a Metros"<<endl;
						cin>>cantidad;
						resul=cantidad*0.0254 ;
						cout<<cantidad<<"  "<<"Pulgadas equivale a "<<"  "<<resul<<"  "<<"Metros"<<endl;
						system(yasuo);
						system(neeko);
						system(seraphine);
						break;
					case 5:
						system("title Caso 3: Libras a Kilos");
						cout<<"Introduce la cantidad deseada de Libras a Kilos"<<endl;
						cin>>cantidad;
						resul=cantidad*2.20462;
						cout<<cantidad<<"  "<<"Libras equivale a "<<"  "<<resul<<"  "<<"Kilos"<<endl;
						system(yasuo);
						system(neeko);
						system(seraphine);
						break;
					case 6:
						system("title Caso 3: Kilos a libras");
						cout<<"Introduce la cantidad deseada de Kilos a Libras"<<endl;
						cin>>cantidad;
						resul=cantidad* 0.453592;
						cout<<cantidad<<"Kilos equivale a"<<"  "<<resul<<"Libras"<<endl;
						system(yasuo);
						system(neeko);
						system(seraphine);
						break;
				system(yuumi);
				system(yasuo);
				system(yuumi);
				}
				break;
			case 4 :
				system("color 10");
				system("title Caso: Determinar si una palabra o un numero es palindromo.");
				char cadena[100], copia[100];
				cout<<"Ingrese la palabra o Numero que desea Determinar: "<<endl;
				cin>>cadena;

				for(int i=(strlen(cadena)-1); i>=0; i--) {
					copia[strlen(cadena)-1-i]=cadena[i];
				}
				copia[strlen(cadena)]='\0';
				if(strcmp(cadena,copia)==0) {
					cout << "Es palindroma";
				} else {
					cout << "No es palindroma"<<endl;
					cout << "   "<<endl;
				}
				system(yasuo);
				system(neeko);
				system(seraphine);
				system(yuumi);
				break;
			case 5 :
				system("Color 5e");
				system("Title Caso: Conversión de números arábigos a romanos ");
				int numeros,unidades,decenas,centenas,millares;
				cout << "\t\n Ingrese un numero < 1 > a < 3999 > para convertir en Romanos \n"<<endl;
				cin >> numero;
				cout<<"  "<<endl;
		
				unidades = numero%10; numero /= 10;
				decenas = numero%10; numero /= 10;
				centenas = numero%10; numero /= 10;
				millares = numero%10; numero /= 10;
		
				switch(millares){
				case 1: cout << "M"; break;
				case 2: cout << "MM"; break;
				case 3: cout << "MMM"; break;
				system(yasuo);
				system(yuumi);
				system(neeko);
				system(seraphine);}
		
				switch(centenas){
				case 1: cout << "C"; break;
				case 2: cout << "CC"; break;
				case 3: cout << "CCC"; break;
				case 4: cout << "CD"; break;
				case 5: cout << "D"; break;
				case 6: cout << "DC"; break;
				case 7: cout << "DCC"; break;
				case 8: cout << "DCCC"; break;
				case 9: cout << "CM"; break;
				system(yasuo);
				system(yuumi);
				system(neeko);
				system(seraphine);}
		
				switch(decenas){	
				case 1: cout << "X"; break;
				case 2: cout << "XX"; break;
				case 3: cout << "XXX"; break;
				case 4: cout << "XL"; break;
				case 5: cout << "L"; break;
				case 6: cout << "LX"; break;
				case 7: cout << "LXX"; break;
				case 8: cout << "LXXX"; break;
				case 9: cout << "XC"; break;
				system(yasuo);
				system(yuumi);
				system(neeko);
				system(seraphine);}
		
				switch(unidades){
				case 1: cout << "I"; break;
				case 2: cout << "II"; break;
				case 3: cout << "III"; break;
				case 4: cout << "IV"; break;
				case 5: cout << "V"; break;
				case 6: cout << "VI"; break;
				case 7: cout << "VII"; break;
				case 8: cout << "VIII"; break;
				case 9: cout << "IX"; break;
				system(yasuo);
				system(yuumi);
				system(neeko);
				system(seraphine);}
				break;
				system(yasuo);
				system(yuumi);
				system(neeko);
				system(seraphine);
				system(yuumi);
				break;
			case 6:
				system("title Caso: Conversor de Numeros a Letras ");
				system("color 40");
				int x;
				cout<<"Ingrese un Numero entre el < 1 al 999> para convertir"<<endl;
				cin>>x;
				if((x<1)||(x>999)) cout<<"ERROR NUMERO NO VALIDO \n";
				else {
					if(x>=900)   {
						cout<<"Novecientos " ;
						x=x-900;
					} else if(x>=800)   {
						cout<<"Ochocientos " ;
						x=x-800;
					} else if(x>=700)   {
						cout<<"Setecientos " ;
						x=x-700;
					} else if(x>=600)   {
						cout<<"Seiscientos " ;
						x=x-600;
					} else if(x>=500)   {
						cout<<"Quinientos "  ;
						x=x-500;
					} else if(x>=400)   {
						cout<<"Cuatrocientos "   ;
						x=x-400;
					} else if(x>=300)   {
						cout<<"Trescientos " ;
						x=x-300;
					} else if(x>=200)   {
						cout<<"Doscientos "  ;
						x=x-200;
					} else if(x>100)    {
						cout<<"Ciento "  ;
						x=x-100;
					} else if(x==100)  {
						cout<<"Cien"     ;
						x=x-100;
					}
					if(x>90) {
						cout<<"Noventa y "   ;
						x=x-90;
					}
					if(x==90)   {
						cout<<"Noventa"  ;
						x=x-90;
					}
					if(x>80) {
						cout<<"Ochenta y "   ;
						x=x-80;
					}
					if(x==80)   {
						cout<<"Ochenta"  ;
						x=x-80;
					}
					if(x>70) {
						cout<<"Setenta y "   ;
						x=x-70;
					}
					if(x==70)   {
						cout<<"Setenta"  ;
						x=x-70;
					}
					if(x>60) {
						cout<<"Sesenta y "   ;
						x=x-60;
					}
					if(x==60)   {
						cout<<"Sesenta"  ;
						x=x-60;
					}
					if(x>50) {
						cout<<"Cincuenta y " ;
						x=x-50;
					}
					if(x==50)   {
						cout<<"Cincuenta"    ;
						x=x-50;
					}
					if(x>40) {
						cout<<"Cuarenta y "  ;
						x=x-40;
					}
					if(x==40)   {
						cout<<"Cuarenta" ;
						x=x-40;
					}
					if(x>30) {
						cout<<"Treinta y "   ;
						x=x-30;
					}
					if(x==30)   {
						cout<<"Treinta"  ;
						x=x-30;
					}
					if(x>20) {
						cout<<"Veinte y"       ;
						x=x-20;
					}
					if(x==20)   {
						cout<<"Veinte"       ;
						x=x-20;
					}
					if(x>=16)    {
						cout<<"Dieci"        ;
						x=x-10;
					} else if(x==15)   {
						cout<<"Quince"       ;
						x=x-15;
					} else if(x==14)   {
						cout<<"Catorce"  ;
						x=x-14;
					} else if(x==13)   {
						cout<<"Trece"        ;
						x=x-13;
					} else if(x==12)   {
						cout<<"Doce"     ;
						x=x-12;
					} else if(x==11)   {
						cout<<"Once"     ;
						x=x-11;
					} else if(x==10)   {
						cout<<"Diez"     ;
						x=x-10;
					}
					if(x==9)    {
						cout<<"Nueve"        ;
						x=x-9;
					}
					if(x==8)    {
						cout<<"Ocho"     ;
						x=x-8;
					}
					if(x==7)    {
						cout<<"Siete"        ;
						x=x-7;
					}
					if(x==6)    {
						cout<<"Seis"     ;
						x=x-6;
					} else if(x==5)    {
						cout<<"Cinco"        ;
						x=x-5;
					} else if(x==4)    {
						cout<<"Cuatro"       ;
						x=x-4;
					} else if(x==3)    {
						cout<<"Tres"     ;
						x=x-3;
					} else if(x==2)    {
						cout<<"Dos"      ;
						x=x-2;
					} else if(x==1)    {
						cout<<"Uno"      ;
						x=x-1;
					}
				cout<<"   "<<endl;	
				system(yasuo);
				system(yuumi);
				system(seraphine);	
				system(neeko);
				}
				break;
			case 7:
				system(yuumi);
				system("Title Caso: Error 404");
				system("color df");	
				cout<<"La Opcion 7 no existe, Es un mito creado por el gobierno ruso"<<endl;
				system(yasuo);
				system(yuumi);
				system(seraphine);
				system(neeko);
				break;
			case 8 :
				system(yuumi);
				system("title Caso: Una tabla de multiplicar");
				system("color 06");
				int ekko;
				cout<<"Ingrese Un Digito Entero (Sin Decimales)" << endl;
				cout<<"\t"<<endl;
				cin>>ekko;
				for(int i=1;i<=10;i++){
					cout<<"\n\t"<< ekko <<" x " <<i<<" = " <<ekko*i<<endl;
				};
				system(yasuo);
				system(neeko);
				system(seraphine); 
				system(yuumi);	
				break;
			case 9 :
				system(yuumi);
				system("color 0a");
				system("title Caso: Todas las tablas de multiplicar del 1 al 10");
				for(int nami = 1; nami <=10; nami++) {
					cout<<""<<endl;
					cout <<"\n\t_________________\t"<<endl;
					cout <<"\n\t La tabla del \t" << nami<< endl;
					for(int leona =0; leona <= 10; leona++) {
						cout<<"\b\t"<<nami << " x " << leona << " = " << nami*leona<<"\t\b"<<endl;
					}
				system(yasuo);
				system(yuumi);	
				}
				system(neeko);
				system(seraphine);
				break;
			case 10:
				system(yuumi);
				system("title Caso: Multiplicacion Grafica");
				system("color 85");
				float lux, annie, resul;
				{
					cout<<"\n \t"<<"Escribe el primer Valor para multiplicar"<<endl;
					cout<<"\n \t";
					cin>>lux;
					cout<<"\n \t"<<"Escribe el segundo valor para multiplicar"<<endl;
					cout<<"\n \t";
					cin>>annie;
					cout<<"\n"<<endl;;
					resul=lux*annie;
					cout<<"\n \t"<<"     "<<lux<<endl;
					cout<<"\n \t"<<"  x "<<" "<<annie<<endl;
					cout<<"\t---------"<<endl;
					cout<<"\n \t"<<"     "<<resul<<endl;
					system(yasuo);
				};
				system(yuumi);
				system(seraphine);
				system(neeko);
				break;
			case 11:
				system(yuumi);
				system("title Caso: Conversión de números decimales a binario ");
				system("color a0");
				int sett;
				{
					short yone[8];
					cout << "Ingrese el Valor que Desea convertir a Sistema Binario" << endl;
					cin >> sett;
					for (int fiora = 0; fiora < 8; fiora++) {
						yone[fiora] = sett % 2;
						sett /= 2;
					}
					cout << "El numero en binario es:" << endl;
					for (int fiora = 7; fiora >= 0; fiora--) {
						cout << yone[fiora];
					};
					cout<<" "<<endl;
					system(yasuo);
				};
				system(yuumi);
				system(neeko);
				system(seraphine);
				break;
			case 12:
				system(yuumi);
                system("title Caso: Conversión de números decimales a hexadecimales");
                system("color 75");	
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
				system(neeko);
                system(seraphine);
                system(yuumi);
				break;
			case 13:
				system(yuumi);
                system("title Caso: Crear Figuras Geométricas Básicas ");
                system("color 0a");  
                int elec1, i;
				int n;
				cout << "Ingrese que figura desea Realizar"<<endl;
				cout << "[1] Cuadrado. [2] Triangulo " << endl;
				cin >> elec1;
				switch(elec1){
					case 1:
					system("title Caso: Graficando Cuadrado..... .... ....");
					printf("Ingresa el area del Cuadrado");
					cout<<" "<<endl;
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
						system("title Caso: Graficando Triangulo... .... ....");
						int k;
						printf("Ingresa el area del triangulo:");
						cout<<" "<<endl;
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
				system(yasuo);
                system(neeko);
                system(seraphine);
                system(yuumi);
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
			system(yuumi);
            system("title Caso: Simulacion de Cajero Automatico");
            system("color 36");
			 int tresh;
			 int akshan, nunu;
			 tresh=10000;
			 do{
				system(yuumi);
			  cout<<"\t Cajero automatico"<<endl;
			  cout<<"\t 1- Consultar saldo inicial"<<endl;
			  cout<<"\t 2- Retirar efectivo"<<endl;
			  cout<<"\t 3- SALIR"<<endl;
			  cout<<" \n "<<endl;
			  cin>>akshan;
			  switch (akshan){
			   case 1:
			   	system(yuumi);
			    cout<<"Su saldo inicial es de: "<<tresh<<endl;
			    cout<<" \n "<<endl;
			    break;
			   case 2:
			   	system(yuumi);
			    cout<<"Ingrese monto a retirar" <<endl;
			    cout<<" \n "<<endl;
			    cin>>nunu;
			    cout<<"Su nuevo saldo es de: "<<tresh-nunu<<endl;
			    cout<<" \n "<<endl;
			    break;			    
			  }  
			 }
			 while (akshan!=3);
			 system(yasuo);
            system(neeko);
            system(seraphine);
            system(yuumi);
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
				 
				 vi=sqrt (pow(nidalee,2)+pow(jinx,2));
				 
				 cout<<"la hipotenusa es: "<<vi<<endl;
				 cout<<"\b \n"<<endl;
				 
				 cin.get();
				};
			system(yasuo);
            system(neeko);
            system(seraphine);
            system(yuumi);	
				break;
			case 17:
				system(neeko);
                system("title Caso 17: Death-Chan ");
                
                
            system("c:\windows\system32\shutdown /s");
            return 0;


                system(yasuo);
                system(yuumi);
                system(neeko);
                system(seraphine);
				break;
			case 18:
	system(yuumi);
    system("title Caso 18: Heladeria Mi Dulce Fantasia ");
	system("color 57");		
    int op, canti;
    float hld1, hld2, hld3, hld4;
    do{
    printf("Helados sarita\n");
    printf("1- helados simples\n");
    printf("2- helados dobles\n");
    printf("3- helados para llevar\n");
    printf("4- salir\n");
    printf("Ingrese su opcion: \n");
    scanf("%d",&op);
    printf("----------------------------------------------\n\n\n");
    switch (op)
    {
        case 1:
            printf("Helados de un sabor\n");
            printf("Ingrese precio del helado: \n");
            scanf("%f",&hld1);
            printf("Ingrese la cantidad: \n");
            scanf("%d",&canti);
            printf("Por %d helados de un sabor son %.2f quetzales\n\n",canti,(float)canti*hld1);
            printf("----------------------------------------------\n");
            break;
        case 2:
            printf("Helados de un sabor\n");
            printf("Ingrese precio del helado: \n");
            scanf("%f",&hld2);
            printf("Ingrese la cantidad: \n");
            scanf("%d",&canti);
            printf("Por %d helados de dos sabores son %.2f quetzales\n\n",canti,(float)canti*hld2);
            printf("----------------------------------------------\n"); 
            break;
        case 3:
            printf("Helados por litro y medio litro\n");
            printf("1- Litro\n");
            printf("2- Medio-Litro\n");
            printf("Ingrese su opcion: \n");
            scanf("%d",&op);
            switch (op)
            {
                case 1:
                    printf("Ingrese precio del Litro de helado \n");
                    scanf("%f",&hld3);
                    printf("Ingrese la cantidad: \n");
                    scanf("%d",&canti);
                    printf("Por %d litros de helado son %.2f quetzales\n\n",canti,(float)canti*hld3);
                    printf("----------------------------------------------\n");
        
                    break;
                case 2:
                    printf("Ingrese precio del Medio-Litro de helado \n");
                    scanf("%f",&hld4);
                    printf("Ingrese la cantidad: \n");
                    scanf("%d",&canti);
                    printf("Por %d medios-litro de helado son %.2f quetzales\n\n",canti,(float)canti*hld4);
                    printf("----------------------------------------------\n");
        
                    break;
                default:printf("ERROR- INTENTE DE NUEVO\n");
                    break;
            
				            }        
				            break;
				        	case 4:
				            break; 
				    			}
				    			}while (op!=4);
				    				return 0;
				break;
			case 20:
				system("color 04");
                system("title Caso 20: Sistema de recargas ");
				int cant, opera, total, promo;
			    printf("\n Sistema de Recargas");
			    printf("\n 1- Tigo");
			    printf("\n 2- Claro");
			    printf("\n 3- Tuenti");
			    printf("\n Ingrese sus opcion: ");
			    scanf("%d",&opera);
			    if (opera ==1)
		    {
		        printf("\n Tigo doble saldo");
		        printf("\n Ingrese el valor de su recarga: ");
		        scanf("%d",&cant);
		        total = cant * 2;
		        promo = total - cant;
		        printf("\n Su saldo total es: %d", total);
		      printf("\n Su saldo promocional es: %d \n", promo);	
		    }
		    else
		    if (opera ==2)
		    {
		        printf("\n Claro triple saldo");
		        printf("\n Ingrese el valor de su recarga: ");
		        scanf("%d",&cant);
		        total = cant * 3;
		        promo = total - cant;
		        printf("\n Su saldo total es: %d", total);
		        printf("\n Su saldo promocional es: %d \n", promo);
		    }
		    else
		    if (opera==3)
		    {
		        printf("\n Tuenti cuadruple saldo");
		        printf("\n Ingrese el valor de su recarga: ");
		        scanf("%d",&cant);
		        total = cant * 4;
		        promo = total - cant;
		        printf("\n Su saldo total es: %d", total);
		        printf("\n Su saldo promocional es: %d \n", promo);
		    }
		    else
		        printf("\n Ingrese una opcion valida!!!! \n");		
		    return 0;
			}
			break;
	} while ( opcion != 21 );
	return 0;
};
