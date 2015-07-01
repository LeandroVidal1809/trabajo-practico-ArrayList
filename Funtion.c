#include <stdio.h>
#include <stdlib.h>
#include "Funtion.h"



int opcion(int numero_opcion)
{
	printf("Que desea Realizar sobre el Arraylist?:\n\n");
	
	printf("\n1.  (deleteArrayList)Eliminar el ArrayList\n2.  (add)Agregar un Elemento al final del ArrayList\n3.  (remove)Eliminar un elemento del arraylist\n4.  (set)Insertar un elemento en el indice que  se desee\n");
	printf("5.  (get)Retorna un puntero al elemento del indice indicado \n6.  (push)Desplazar los elementos e insertar en la posicion index\n7.  (pop)Retorna puntero y lo elimina de la lista\n8.  (indexOf)Retorna primer indice de valor especificado\n9.  (size)Retorna el tamaño del array\n");
	printf("10. (contains)Comprueba si existe el elemento\n11. (containsall)comprueba si existen los elementos \n12. (isEmpty)Comprobar si hay elementos\n13. (clone)Clonar array\n14. (sublist)Retornar un nuevo arraylist\n15. (clear)Borrar todos los elementos del arraylist\n16  Mostrar Array\nOpcion numero :");
	scanf("%d",&numero_opcion);
	while(numero_opcion<1 || numero_opcion>16)
	{
	printf("\n opcion erronea, ingrese nuevamente: ");
	scanf("%d",&numero_opcion);
	}
	
	return numero_opcion;
}	
	


int validar(int index,int size)
{
	while(index<0 || index>size)
	{
		printf("error, no existe indice, intente nuevamente:");
		scanf("%d",&index);
	}	
		return index;
		

}



	
