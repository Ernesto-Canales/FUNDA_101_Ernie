Algoritmo gas_Station2
	//Algoritmo para calcular precio y venta de gasolina
	//Gal = 3.78 Lt
	//Lt = $8.20
	Definir galones, litros, precio_total Como Real;
	
	galonLitro <- 3.785;
	litroPrecio <- 8.20;
		
	Escribir "Ingrese galones comprados";
	Leer galones;
	
	litros <- (galones * galonLitro);
	precio_total <- (litros * litroPrecio);
	
	Escribir "Galones: ", galones;
	Escribir "Litros: ", litros;
	Escribir "Precio a pagar: $", precio_total;
FinAlgoritmo
