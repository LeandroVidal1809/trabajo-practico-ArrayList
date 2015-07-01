#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "funtion.h"
#include "Libre.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
int numero;
int element;
int index;
int* index_p;
int numero_new;
int i;
int* aux;
int* arrayCl;
int* subaux;
int cont;
int ret;
int from;
int to;
int nro_index;
char rta = 's';
char opc = 's' ;





ArrayList* plist;
ArrayList* paux_list;
ArrayList* paux;
	
	plist=newArrayList();



while(opc=='s')
	{
			
 		numero=opcion(numero);
 	
	 	switch(numero)
	 	{
 				case 1:		//Borrar Array
 				{
 					deleteArrayList(plist);
 						 break;
 				
				}
			 
	 			case 2: //Agregar Elemento
	 			{
	 				while(rta=='s')
					{
			 	
						printf("-ingrese numero para agregar: ");
	 					scanf("%d",&element);
	 					fflush(stdin);
					 		add(plist,element);
	 						printf("-Desea agregar otro?: ");
					 		fflush(stdin);
			 				scanf("%c",&rta);
	 		
	 		
					 }
	 		
	 					break;
	 			}
	 		
	 			case 3: //Borrar un elemento
	 			{
	 				printf("Ingrese Indice");
	 				scanf("%d",&index);
	 				validar(index, plist->size);
	 				removee(plist,index);
	 					break;
				}
				case 4: //Set , insertar un elemento en un indice
				{
					printf("Ingrese Indice");
	 				scanf("%d",&index);
	 				validar(index, plist->size);
	 				printf("ingrese Numero: ");
	 				scanf("%d",&numero_new);
	 			
	 				set(plist,index,numero_new);
	 					break;
	 			}
			
				case 5: //Get , devolver puntero al elemento de index
				{
			
					printf("Ingrese Indice");
	 				scanf("%d",&index);
	 				validar(index, plist->size);
	 				index_p=get(plist,index);
	 				printf("el elemento en el indice ingresado es: %d ",index_p);
	 					break;
				}
				case 6: //push
				{	
					printf("Ingrese Indice");
	 				scanf("%d",&index);
	 				validar(index, plist->size);
					printf("ingrese numero para agregar");
	 				scanf("%d",&element);
					push(plist,index,element);
						break;
				}
				case 7: //Pop
				{
					printf("Ingrese Indice");
	 				scanf("%d",&index);
	 				validar(index, plist->size);
	 			
	 				removee(plist,index);
	 				break;
					}
			
					case 8:
					{
						printf("que elemento desea buscar: ");
						scanf("%d",&element);
						nro_index=indexOf(plist,element);
						if(nro_index==0)
						{
							printf("no existe");
							break;
						}
						printf("el valor se encuentra en el indice %d",nro_index);
						break;
					}
			
					case 9:
					{
						aux=size_e(plist);
						printf("el Tamaño del Array en este momento es de : %d",aux);
						break;
					}
		
					case 10:
					{
						printf("-ingrese numero que desea buscar en el ArrayList: ");
	 					scanf("%d",&element);
	 					fflush(stdin);
	 			
	 					cont=contains(plist,element);
	 					if(cont==1)
	 					{
	 						printf("el elemento buscado existe en el ArrayList\n");	
	 							break;
						}
							printf("el elemento buscado no coincide con uno del ArrayList\n");
							break;
						}
					case 11:
					{	
			
				
						printf("ingrese elemento: ");
						scanf("%d",paux_list->pElements);
						printf("desea agregar otro elemento?:"  );
						fflush(stdin);
						scanf("%c",&rta);
				
							cont=containsAll(plist,paux_list);
					
							if(cont==1)
							{
								printf("coinciden los arrays\n");
							}
							else
							{
								printf("no coinciden\n");
							}
								break;
					}
		
					case 12:
					{
						ret=isEmpty(plist);
							if(ret==1)
							{
				
							printf("El Array Contiene Elementos\n");
							}
								else
								{
								printf("El Array no Contiene Elementos\n");
								}
									break;
					}				
				
					case 13:
					{
						subaux=clone(plist);
						for(i=0;i<plist->size;i++)
						{
							printf("indice clone %d : %d\n",i,*(int*)subaux[i]);	
						}
								break;
					}
				
					case 14:
					{
						printf("ingrese el comienzo del sub conjunto:\n");
						scanf("%d",&from);
						printf("ingrese el final del sub conjunto:\n");
						scanf("%d",&to);
						
						subaux=subList(plist,from,to);
						
							for(i=0;i<paux->size;i++)
							{	
								printf("indice SubList %d : %d\n",i,*(int*)subaux[i]);	
							}
									break;
					}
					
					
					
					case 15:
					{
					clear(plist);
					break;
					}	
					
					case 16:
					{
					for(i=0;i<plist->size;i++)
					{
					printf("indice %d : %d \n",i,plist->pElements[i]);
			
					}	
					break;
					}
				
		}
			printf("\n quiere continuar? : ");
		 	fflush(stdin);
			scanf("%s",&opc);
	}
			 
 	
 		for(i=0;i<plist->size;i++)
					{
					printf("indice %d : %d \n",i,plist->pElements[i]);
			
					}
	 	
 				
			 
	
	return 0;
}
