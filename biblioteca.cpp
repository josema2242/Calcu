#include"biblioteca.hpp"


int suma(int n1, int n2){
	if (n1>=0 && n2>=0){
		return n1+n2;
	}
		return 0;
}



int resta(int n1, int n2){
	if (n1>=0 && n2>=0){
		if (n1>n2){
		return n1-n2;
	}else {
		return n2-n1;
	}
	}
	return 0;	
}


int multiplicacion(int n1, int n2){
	if (n1>=0 && n2>=0){
		return n1*n2;
	}
		return 0;
}



int division(int n1, int n2){
return n1 / n2;
}










