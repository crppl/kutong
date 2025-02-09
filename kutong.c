		     /*&&&&&&*\
		  /&&&&&&&&&&&&&&\
		 &&&&&&&&&&&&&&&&*/
		#include<stdio.h>///
	       #include<stdlib.h>/**/
	      #include<unistd.h>/*&&*/
	     #include<string.h>/*&&&*/
	     #include<math.h>/*&&&&&*/
	     int main(){float C,D,A=0,
	     B=0,z[1800],E=0.2,G=0.2,F
	     =8e-4,H=4e-4,h;int I=-6,J
	     =2,s=2,r=2.8,i,K=12,l=8 ;
	     char b[1800], R[17]=".,-"
	     "~:;=!+*?%#&$@\0";printf(
	     "\x1b[2J");for(;;){memset
	     (b, 32, 1800);memset(z, 0
	     , 7200);float Z=sin(A),X=
	     sin(B),Y=cos(A),W=cos(B);
	     for(h=0;h<12;h+=0.8)for(C
	     =0;C<6.28;C+=E){float V =
	     sin(C),U=cos(C),d=s*U,e=h
	     +I,f=s*V,D=1/(e*Z+f*Y+K); 
	     int x=35+20*D*(d*W-e*Y*X+
	     f*Z*X),y=14+14*D*(d*X+e*Y
	     *W-f*Z*W),L=l*(V*(Z*W-Y)-
	     X*U), M=x+60*y;if( y>0 &&
	     y<30&&x>0&&x<60&&D>z[M]){
	     z[M]=D;b[M]=R[L>0?L:0];}}
	     for(D=0;D<6.28;D+=G)for(C
	     =0;C<6.28;C+=E){float V =
	     sin(C),U=cos(C),T=sin(D),
	     S=cos(D),d=J+r*U,e=I-r*V*
	     T,f=r*V*S,D=1/(Z*X*d-Z*W*
	     e+f*Y+K);int x=35+20*D*(d
	    *W-e*Y*X+f*Z*X),y=14+14*D*(
	  d*X+e*Y*W-f*Z*W),L=l*(V*(Z*(W*S
	-T)+Y*(W*T-S))-X*U),M=x+60*y;if(y>0
     &&y<30&&x>0&&x<60&& D>z[M]){z[M]=D;b[M]=R
   [L>0?L:0];}d=-1*J+r*U;D=1/(Z*X*d-Z*W*e+f*Y+K)
  ;x=35+20*D*(d*W-e*Y*X+f*Z*X);y=14+14*D*(d*X+e*Y
 *W - f*Z*W);M=x+60*y;if(y>0 && y<30 && x>0 &&x<60
 && D>z[M]){z[M]=D;b[M]=R[L>0?L:0];}d=s*U,e=(I+h)-
 s*V*T,f=s*V*S;D=1/(Z*X*d-Z*W*e+f*Y+K);x=35+20*D*(
 d*W-e*Y*X+f*Z*X);y=14+14*D*(d*X+e*Y*W-f*Z*W);M=x+
  60*y; if(y>0&&y<30&&x>0 &&x<60&&D>z[M]){z[M]=D;
    b[M]=R[L>0?L:0];;;};} printf("\x1b[H");for(
      i=0;i<1801;i++){;;   putchar(i%60?b[i]:
	10);}A+=F;B+=H;     }return 0;}/**/
      	  /*********          **********/
