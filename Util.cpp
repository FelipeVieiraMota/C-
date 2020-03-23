#include <iostream>
#include <conio.h>
using namespace std;

bool excludeBadCaracters(char param){
	if(param=='\0' || param==8  || param=='0' || param=='-'
      || param=='='  || param=='+'|| param==' ' || param=='/'
 	  || param=='!'  || param=='@'|| param=='#' || param=='$'
  	  || param=='%'  || param=='¨'|| param=='&' || param=='('
	  || param==')'  || param=='_'|| param=='§' || param=='['
      || param==']'  || param=='{'|| param=='}' || param=='^'
	  || param=='º'  || param==' '|| param=='~' || param=='ª'
	  || param=='?'  || param=='°'|| param==';' || param==':'
	  || param=='.'  || param==','|| param=='<' || param=='>'
	  || param=='A'  || param=='B'|| param=='C' || param=='D'
	  || param=='E'  || param=='F'|| param=='G' || param=='H'
      || param=='I'  || param=='J'|| param=='K' || param=='L'
	  || param=='M'  || param=='N'|| param=='O' || param=='P'
	  || param=='Q'  || param=='R'|| param=='S' || param=='T'
	  || param=='U'  || param=='V'|| param=='W' || param=='X'
	  || param=='Y'  || param=='Z'|| param=='Ç' || param=='a'
      || param=='b'  || param=='c'|| param=='d' || param=='e'
	  || param=='f'  || param=='g'|| param=='h' || param=='i'
	  || param=='j'  || param=='k'|| param=='l' || param=='m'
	  || param=='n'  || param=='o'|| param=='p' || param=='q'
      || param=='r'  || param=='s'|| param=='t' || param=='u'
	  || param=='v'  || param=='w'|| param=='x' || param=='y'
	  || param=='z'  || param=='ç'|| param=='"' || param=='.'){
		return true;
	  }else{
	  	return false;
	  }
}








