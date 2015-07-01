#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Libre.h"
#include "Funtion.h"


ArrayList* newArrayList(void)
{
	ArrayList* plist;
	
		plist=(ArrayList*)malloc(sizeof(ArrayList));
		plist->pElements=malloc(sizeof(void*)*10);
		
			plist->size=0;
			plist->add=add;
			plist->removee=removee;
			plist->set=set;
			plist->push=push;
			plist->indexOf=indexOf;
			plist->size_e=size_e;
			plist->contains=contains;
			plist->containsAll=containsAll;
			plist->isEmpty=isEmpty;
			plist->clone=clone;
			plist->clear=clear;
			
			
		
		return plist;
}







void add(ArrayList* self,void* element)
{
	self->pElements[self->size]=element;
		
		self->size++;
		
			self->pElements=(int*)realloc(self->pElements,sizeof(int)*self->size+1);
		
				//printf("%d",self->size);
}




void deleteArrayList(ArrayList* p)
{
	free(p);
	printf("El Array ha sido Eliminado Correctamente");
}




void removee(ArrayList* self, int index)
{
	int* aux;
	int i;
	
	
	aux=self->pElements[0];

	for(i=index;i>=0;i--)
	{
		self->pElements[i]=self->pElements[i-1];
	}
			
			self->pElements=&self->pElements[1];
				free(aux);
	
					self->size--;
	
	
}





void set(ArrayList* self , int index,void* element)
{
	
	self->pElements[index]=element;
}





ArrayList* get(ArrayList* self,int index)
{
	return self->pElements[index];
	
	
}




void push(ArrayList* self,int index, void* element)
{
	int i;
		for (i=self->size;i<=index;i--)
		{
			self->pElements[i]=self->pElements[i-1];
		}
	
			self->pElements[index]=element;
			self->pElements=realloc(self->pElements,sizeof(int)*self->size+2);
	

}

int indexOf(ArrayList* self , void* element )
{
	int i;
	
	for (i=0;i<self->size;i++)
		{
			if(self->pElements[i]==element)
			{
				return i;
			}
			
		}
		
		return 0;
}



int* size_e (ArrayList * self)
{
	return  self->size;
}


int contains(ArrayList* self,void* element)
{
	int i;
	
	for(i=0;i<self->size;i++)
		{
		if(element==self->pElements[i])
		
		{
		return 1;	
		break;
			
		}
		
		
		}
		return 0;
}

int containsAll(ArrayList* self,ArrayList* array )
{
	int i;

	for(i=0;i<self->size;i++)
		{
		
			if(self->pElements[i] != array->pElements[i])
			{
			return 0;
			}
		}
	return 1;

}

int isEmpty(ArrayList* self)
{
	int i;
	
	for(i=0;i<self->size;i++)
		{
		if(self->size != 0)	
		{
			return 1;
		}	
				return 0;
		}
}

ArrayList* clone(ArrayList* self)
{
	int i; 
		
	int* element;
    ArrayList* paux;
       
       
        paux = newArrayList();
 
       
        for(i=0; i<self->size; i++)
        {
                element = (int*) malloc(sizeof(int));
               
                element = self->pElements[i];
               
                paux->add(paux,element);
               
               
        }
       
        return paux;
}

ArrayList* subList(ArrayList* self, int from, int to)
{
    int i; 
		
	int* element;
    ArrayList* paux;
       
       
        paux = newArrayList();
 
       
        for(i=from; i<to; i++)
        {
                element = (int*) malloc(sizeof(int));
               
                *element = self->pElements[i];
               
                paux->add(paux,element);
               
               
        }
		
		       
        return paux;
}



void clear(ArrayList* self)
{
     int i;
     
     for(i=0;i<self->size;i++)
     {
                             self->pElements[i]=NULL;
                                   
                                   
                                   
	}
}
