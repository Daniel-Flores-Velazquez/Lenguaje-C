/*Autor: Flores Velazquez Juan Daniel
		 
  Fecha: 22-Febrero-2023*/

#include <stdio.h>

typedef struct{
	char nombre[15];
	int cantidad;
	int precio;
	int unidades;
} fichaProducto;

int main(){
	
	fichaProducto Producto;
	
	printf("\t\t\tPrograma para guardar y mostrar datos de un producto\n\n");
	printf("Ingresa el nombre del producto: ");
	scanf("%[^\n]s",&Producto.nombre);
	printf("Ingresa la cantidad: ");
	scanf("%d",&Producto.cantidad);
	printf("Ingrese el precio del producto: ");
	scanf("%d",&Producto.precio);
	printf("Ingresa las unidades en existencia: ");
	scanf("%d",&Producto.unidades);
	
	printf("--------------------------------------\n");
	printf("Nombre: %s",Producto.nombre);
	printf("\nCantidad ingresada: %d",Producto.cantidad);
	printf("\nPrecio: $%d",Producto.precio);
	printf("\nUnidades en existencia: %d",Producto.unidades);
}
