

/* маллок */
/* --find_block*/
/* free */
/* realloc */


int init_mem();
int expand_memory(); 

void *find_block(int size);
void *malloc(int size);
void *free(void*);

int main()
{
  init_mem();
  void* ptr = malloc(100);
  free(ptr);
  return 0;
}

void init_mem(){
  
