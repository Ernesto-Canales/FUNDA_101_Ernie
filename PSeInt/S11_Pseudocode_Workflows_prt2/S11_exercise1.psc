Algoritmo temperaturaGrillo
	Escribir 'Sonidos emitidos por el grillo:'
	Leer sonidoGrillo
	Si sonidoGrillo>=0 Entonces
		temperatura <- ((sonidoGrillo/4)+40)
		Escribir 'Temperatura: ',temperatura,'F°'
	SiNo
		Escribir 'No se permiten numeros negativos'
	FinSi
FinAlgoritmo
