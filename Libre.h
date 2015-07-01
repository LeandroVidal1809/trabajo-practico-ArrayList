typedef struct {
		
		int reservedSize;
		int size;
		void** pElements;
		
	    
      	void (*add)();
        void(*removee)();
        void(*set)();
        struct ArrayList(*get)();
	   	void(*push)();
	   	int(indexOf);
	   	int(*size_e)();
	   	int(*contains)();
        int(*containsAll)();
        int (*isEmpty)();
        struct ArrayList (*clone)();
        struct ArrayList(*subList)();
        void (*clear)();
       
        
        
        
        }ArrayList;
        

        
       
ArrayList* newArrayList(void);
void deleteArrayList(ArrayList* p);
void add(ArrayList* self,void* element);
void removee(ArrayList* self, int index);
void set(ArrayList* self , int index,void* element);
ArrayList* get(ArrayList* self,int index);
void push(ArrayList* self,int index, void* element);
int indexOf(ArrayList* self , void* element );
int* size_e (ArrayList * self);
int contains(ArrayList* self,void* element );
int containsAll(ArrayList* self, ArrayList* array);
int isEmpty(ArrayList* self);
ArrayList* clone(ArrayList* self);
ArrayList* subList(ArrayList* self, int from, int to);
void clear (ArrayList *self);
