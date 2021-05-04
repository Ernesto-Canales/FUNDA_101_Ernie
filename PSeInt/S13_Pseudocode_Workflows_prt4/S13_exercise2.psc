Algoritmo calcular_votantes2
	//Variables
	Definir voto, candi1, candi2, candi3, candi4, total_votos Como Entero;
	Definir por1, por2, por3, por4 Como Real;
	
	//Inicializar
	//Enteros
	voto <- 0;
	candi1 <- 0;
	candi2 <- 0;
	candi3 <- 0;
	candi4 <- 0;
	total_votos <- 0;
	//Reales
	por1 <- 0.0;
	por2 <- 0.0;
	por3 <- 0.0;
	por4 <- 0.0;
	
	//Inicio
	Repetir
		Escribir "Ingrese su voto, entre 1 y 4, 0 para terminar";
		Leer voto;
		
		Segun voto Hacer
			1:
				candi1 <- (candi1 + 1);
			2:
				candi2 <- (candi2 + 1);
			3:
				candi3 <- (candi3 + 1);
			4:
				candi4 <- (candi4 + 1);
			De Otro Modo:
				Escribir "Ingrese un Entero positivo ente 1 y 4";
		Fin Segun
	Hasta Que voto = 0
	
	//Calcular porcentajes
	Si ((candi1 = 0) Y (candi2 = 0) Y (candi3 = 0) Y (candi4 = 0)) Entonces
		Escribir "Se termino el programa sin meter un solo voto";
	SiNo
		total_votos <- (candi1 + candi2 + candi3 + candi4);
		por1 <- ((candi1 / total_votos) * 100);
		por2 <- ((candi2 / total_votos) * 100);
		por3 <- ((candi3 / total_votos) * 100);
		por4 <- ((candi4 / total_votos) * 100);
		
		//Mostrar resultados
		Escribir "Votos candidato 1: ", candi1, ", porcentaje: ", por1, "%";
		Escribir "Votos candidato 2: ", candi2, ", porcentaje: ", por2, "%";
		Escribir "Votos candidato 3: ", candi3, ", porcentaje: ", por3, "%";
		Escribir "Votos candidato 4: ", candi4, ", porcentaje: ", por4, "%";
		Escribir "Total de votantes: ", total_votos;
	Fin Si
FinAlgoritmo
