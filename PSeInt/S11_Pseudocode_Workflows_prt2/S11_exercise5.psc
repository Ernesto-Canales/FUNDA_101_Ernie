Algoritmo calculoDeMatricula
	Escribir "Matricula: "
	Leer matricula
	Escribir "N1: "
	Leer nota1
	Escribir "N2: "
	Leer nota2
	Escribir "N3: "
	Leer nota3
	Escribir "N4: "
	Leer nota4
	Escribir "N5: "
	Leer nota5
	promedio <- ((nota1 + nota2 + nota3 + nota4 + nota5) / 5)
	Si promedio >= 6 Entonces
		Escribir "Matricula: ", matricula
		Escribir "Aprobado: ", promedio
	SiNo
		Escribir "Matricula: ", matricula
		Escribir "Reprobado: ", promedio
	FinSi
FinAlgoritmo
