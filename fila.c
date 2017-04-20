#include<stdio.h>
#include<stdlib.h>

// OII EU ESTIVE AQUI COMMITANDO

typedef struct cel{
	int conteudo;
	struct cel* seg;
}celula;

typedef struct fila{
	celula* s;
	celula* t;
}line;

void inserir(celula* lst,int x){
	celula* nova = malloc(sizeof(celula));
	nova->conteudo = x;
	nova->seg = lst->seg;
	lst->seg = nova;
	printf("Inserido");	
}

void imprimir(celula* lst){
celula* p;
for(p = lst->seg; p!=NULL ; p = p->seg){
	printf("%d\n",p->conteudo);
}	
}


celula* criaLista(){
	celula* lst = malloc(sizeof(celula));
	int x;
	lst->conteudo = x;
	lst->seg = NULL;
	return lst;
}
void insereFila(int x,line* fila){
	int e;
	
	if(fila->s == NULL){
		
		celula* tmp = criaLista();
		fila->s = fila->t = tmp;
		printf("%d",fila->t->conteudo);
	}
		inserir(fila->t,x);
		//printf("deu certo [%d]",x);
		//return fila;
	
}

void imprimeFila(line* fila){
line* fi = fila;
	while(fi->s!=NULL){
		printf("\n[%d]",fi->s->conteudo);
		fi->s = fi->s->seg;
	}
}


main(){
	celula* lst = criaLista();
	line* fi = criaLista();
	insereFila(10,fi);
	insereFila(20,fi);
	insereFila(30,fi);
	imprimeFila(fi);
}
