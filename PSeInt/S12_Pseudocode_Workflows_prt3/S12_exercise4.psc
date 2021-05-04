Algoritmo gas_Station4
	// Algoritmo para calcular precio y venta de gasolina
	// Gal = 3.78 Lt
	// Lt = $8.20
	Definir galones,litros,precio_total Como Real
	// Constantes
	galonLitro <- 3.785
	litroPrecio <- 8.20
	// Variables
	galones <- 0
	litros <- 0
	precio_total <- 0
	Repetir
		Escribir 'Ingrese galones comprados'
		Leer galones
		Si galones<0 Entonces
			Escribir 'No se permiten numeros negativos'
			Escribir ''
		FinSi
	Hasta Que galones>=0
	litros <- (galones*galonLitro)
	precio_total <- (litros*litroPrecio)
	Escribir 'Galones: ',galones
	Escribir 'Litros: ',litros
	Escribir 'Precio a pagar: $',precio_total
FinAlgoritmo
