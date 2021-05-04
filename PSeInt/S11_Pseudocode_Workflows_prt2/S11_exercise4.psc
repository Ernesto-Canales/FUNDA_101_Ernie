Algoritmo switchVSif
	Escribir 'Ingrese un dia de la semana del 1 al 7:'
	Escribir '1 para Domingo'
	Escribir '2 para lunes'
	Escribir '3 para martes'
	Escribir '4 para miercoles'
	Escribir '5 para jueves'
	Escribir '6 para viernes'
	Escribir '7 para sabado'
	Leer diaDeLaSemana
	Si diaDeLaSemana==1 Entonces
		Escribir 'Domingo'
	SiNo
		Si diaDeLaSemana==2 Entonces
			Escribir 'Lunes'
		SiNo
			Si diaDeLaSemana==3 Entonces
				Escribir 'Martes'
			SiNo
				Si diaDeLaSemana==4 Entonces
					Escribir 'Miercoles'
				SiNo
					Si diaDeLaSemana==5 Entonces
						Escribir 'Jueves'
					SiNo
						Si diaDeLaSemana==6 Entonces
							Escribir 'Viernes'
						SiNo
							Si diaDeLaSemana==7 Entonces
								Escribir 'Sabado'
							SiNo
								Escribir 'Ese dia de la semana no existe'
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
