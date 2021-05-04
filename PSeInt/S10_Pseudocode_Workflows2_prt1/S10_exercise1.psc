Algoritmo calcular_cambio
	Escribir 'Bienvenido a la tienda'
	Escribir "Ingrese nombre del producto: "
	Leer producto_nombre
	Escribir 'Ingrese el precio del producto:'
	Leer producto_precio
	Escribir 'Ingrese el pago: '
	Leer pago
	cambio <- (pago - producto_precio)
	Escribir ""
	Escribir "=== Factura ==="
	Escribir "Producto: ", producto_nombre
	Escribir "Precio: $", producto_precio
	Escribir "Pago: $", pago
	Escribir 'Cambio: $', cambio
	Escribir "========="
FinAlgoritmo
