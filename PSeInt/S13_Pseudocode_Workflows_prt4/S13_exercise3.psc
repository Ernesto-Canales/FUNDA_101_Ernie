Funcion resul_suma <- suma()
	Escribir "Ingrese n1: ";
	Leer sn1;
	
	Escribir "Ingrese n2: ";
	Leer sn2;
	
	resul_suma <- (sn1 + sn2);
Fin Funcion
//------------------------------------------------------
Funcion resul_resta <- resta()
	Escribir "Ingrese n1: ";
	Leer rn1;
	
	Escribir "Ingrese n2: ";
	Leer rn2;
	
	resul_resta <- (rn1 - rn2);
Fin Funcion
//------------------------------------------------------
Algoritmo uso_funciones
	Escribir "1 para sumar y 2 para restar"
	leer opcion;

	Segun opcion Hacer
		1:
			Escribir suma;
		2:
			Escribir resta;
	Fin Segun
FinAlgoritmo
