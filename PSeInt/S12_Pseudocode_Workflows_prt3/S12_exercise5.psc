Algoritmo ulam
	//Solo enteros positivos
	//Par = (numero / 2)
	//impar = ((numero * 3) + 1)
	Definir numero Como Entero;
	numero <- 0;
	
	Escribir "Ingrese un numero entero positivo";
	Leer numero
	
	Si numero > 0 Entonces
		Mientras numero <> 1 Hacer
			Escribir numero;
			Si (((-1)^numero) > 0) Entonces
				numero <- (numero / 2);
			SiNo
				numero <- ((numero * 3) + 1);
			Fin Si
		Fin Mientras
		Escribir numero;
	SiNo
		Escribir "Solo se permiten enteros positivos";
	Fin Si
FinAlgoritmo
