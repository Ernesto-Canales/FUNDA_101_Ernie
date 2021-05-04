Algoritmo ulam
	// Solo enteros positivos
	// Par = (numero / 2)
	// impar = ((numero * 3) + 1)
	Definir numero Como Entero
	numero <- 0
	Repetir
		Escribir 'Ingrese un numero entero positivo'
		Leer numero
		Si numero<0 Entonces
			Escribir ''
			Escribir 'Solo enteros positivos'
			Escribir ''
		FinSi
	Hasta Que (numero>0)
	Mientras numero<>1 Hacer
		Escribir numero
		Si (((-1)^numero)>0) Entonces
			numero <- (numero/2)
		SiNo
			numero <- ((numero*3)+1)
		FinSi
	FinMientras
	Escribir numero
FinAlgoritmo
