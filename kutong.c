#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<math.h>

/*
 * dick
 * funne
 */

/*
 * zmienne:
 * - theta & fi - kąty do okręgów  (walec i koło)
 * - A, B - kąty obrotu kutonga
 * - dT, dF, dA, dB - różnice obrotu
 * - z - tablica wartości z, ergo 'bliskości od ekranu'
 * - b - tablica znaków zawierająca cnagę, rysowana
 * - d1 - przesunięcie prącia w osi Y
 * - d2 - przesunięcie jąder w osi X
 * - rS, r - promenie przyrodzenia oraz genitaliów
 * - dist - 'odległość' członka od ekranu (początku ukł. wsp.), w osi Z
 * - L - wartość naświetlenia, zastępuje współrzędną Z
 * - lM - skalar funkcji naświetlenia cocka (dobrać do l. znaków w str)
 * - str - słownik znaków do rysowania fallusa
 *
 */

int main(){
	float theta, fi, A=0, B=0, z[1800],
		dT = 0.2, dF = 0.2,
		dA = 8e-4, dB = 4e-4, h;	
	int d1=-6, d2=2, rS=2, r=2.8, i, dist=12, lM=8;
	char b[1800], str[16]=".,-~:;=!+*?%#&$@";
	printf("\x1b[2J");

	while(6!=9){
		memset(b, 32, 1800);
		memset(z, 0, 7200);
		float sA = sin(A), sB = sin(B),
		      cA = cos(A), cB = cos(B);
	// shaft
		for(h=0; h<12; h+=0.8)
			for(theta=0; theta<6.28; theta+=dT) {
				float sT = sin(theta), cT=cos(theta),
				      p1=rS*cT, p2=h+d1, p3=rS*sT,
				      D=1/(p2*sA + p3*cA + dist); 
					
				int x=35+20*D*(p1*cB - p2*cA*sB + p3*sA*sB),
				    y=14+14*D*(p1*sB + p2*cA*cB - p3*sA*cB),
				    L = lM*(sT*(sA*cB - cA) - sB*cT),	// góra, tył
				    loc=x+60*y;
				if(y>0 && y<30 && x>0 && x<60 && D>z[loc]) {
					z[loc]=D;
					b[loc]=str[L>0?L:0];
				}
			}
	// balls
		for(fi=0; fi<6.28; fi+=dF)
			for(theta=0; theta<6.28; theta+=dT) {
				
				// jajco jedne
				float sT = sin(theta), cT=cos(theta),
				      sF=sin(fi), cF=cos(fi),
				      p1=d2+r*cT, p2=d1-r*sT*sF, p3=r*sT*cF,
				      D=1/(sA*sB*p1 - sA*cB*p2 + p3*cA + dist);
				
				int x=35+20*D*(p1*cB - p2*cA*sB + p3*sA*sB),
				    y=14+14*D*(p1*sB + p2*cA*cB - p3*sA*cB),
				    L = lM * (sT*(sA*(cB*cF - sF) + cA*(cB*sF - cF)) - sB*cT),
				    loc=x+60*y;

				if(y>0 && y<30 && x>0 && x<60 && D>z[loc]) {
					z[loc]=D;
					b[loc]=str[L>0?L:0];
				}

				// jajco drugie
				p1 = -1*d2+r*cT;
				D=1/(sA*sB*p1 - sA*cB*p2 + p3*cA + dist);
				x=35+20*D*(p1*cB - p2*cA*sB + p3*sA*sB);
				y=14+14*D*(p1*sB + p2*cA*cB - p3*sA*cB);
				loc=x+60*y;

				if(y>0 && y<30 && x>0 && x<60 && D>z[loc]) {
					z[loc]=D;
					b[loc]=str[L>0?L:0];
				}

				// wierzchołek węża
				p1=rS*cT, p2=(d1+h)-rS*sT*sF, p3=rS*sT*cF;
				D=1/(sA*sB*p1 - sA*cB*p2 + p3*cA + dist);		
				x=35+20*D*(p1*cB - p2*cA*sB + p3*sA*sB);
				y=14+14*D*(p1*sB + p2*cA*cB - p3*sA*cB);
				loc=x+60*y;

				if(y>0 && y<30 && x>0 && x<60 && D>z[loc]) {
					z[loc]=D;
					b[loc]=str[L>0?L:0];
				}
			}

		// rysowanie
		printf("\x1b[H");
		for(i=0; i<1801; i++)
			putchar(i%60?b[i]:10);
		A = fmod(A+dA, 6.28);	//x
		B = fmod(B+dB, 6.28);	//z
	}

	return 0;
}



// inne naświetlenia:
// shaft:
// 	L=lM*(cB*cT+(sA*sB-cA)*sT),	// dół, przód
//	L = lM*(sT*(sA*cB + cA) - sB*cT),	// góra, przód
//
// balls:
// 	L=lM*(cB*cT+(sA*sB-cA)*sT);
//	L = lM * (sT*(sA*(cB*cF+sF) + cA*(cB*sF + cF)) - sB*cT);


