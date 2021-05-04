Algoritmo gas_Station
	//Algoritmo para calcular precio y venta de gasolina
	//Gal = 3.78 Lt
	//Lt = $8.20
	Escribir "Ingrese galones comprados";
	Leer galones;
	
	litros <- (galones * 3.785);
	precio_total <- (litros * 8.20);
	
	Escribir "Galones: ", galones;
	Escribir "Litros: ", litros;
	Escribir "Precio a pagar: $", precio_total;
FinAlgoritmo
