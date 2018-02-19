/*
@author:
 * Jhon velasco-Cesar villalobos
 * @frediv0406
 * Estudiantes: Ing.Sistemas UDI
*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(){
	int j=0,a=0,z=0,h=0,resto=0,invertido=0,b;
	bool n=false;
	while(n==false){// Condiccional que evitara que el codigo entre en bucle al llegar al limite de pow(10,8)
		a=0;
		z++;
		j=z;
		if((pow(z,2)+pow(z+1,2))>=100000000){
			n=true;
			break;
		}
		while(a<=100000000){
			a+=pow(j,2);
			j++;
			h=a;
			invertido=0;
			while(h!=0){//proceso de invertir un numero
				resto=h%10;
				h=h/10;
				invertido=invertido*10+resto;
			}
			if(invertido==a){//comprobar si el numero invertido es palindromo
			printf("\nEs palindromo %d",a);	
			}
			
		}
	}
	
}
