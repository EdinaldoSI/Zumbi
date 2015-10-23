# include <iostream>
# include "zumbi.h"

int zumbi::maxPosition=100;

zumbi::Zumbi():const static int maxLife(100){
	this->life=maxLife;
	this->position=0;
	this->veloc=5;
	this->defesa=6;
	this->forca=4;
	this->nome="constantine";
}

zumbi::Zumbi(const int velocidade):const static int maxLife(100){
	this->life=maxLife;
	this->position=0;
	this->veloc=velocidade;
	this->defesa=6;
	this->forca=4;
	this->nome="Wesley Safadao";
}
zumbi::Zumbi(const int def, const int forc):const static int maxLife(100){
	this->life=maxLife;
	this->position=0;
	this->veloc=5;
	this->defesa=def;
	this->forca=forc;
	this->nome="Pablo do arrocha";
}
zumbi::Zumbi(const Zumbi &arrocha){
	this->veloc=arrocha.veloc;
	this->position=arrocha.position;
	this->defesa=arrocha.defesa;
	this->forca=arrocha.forca;
	this->nome=arocha.nome;
}
void zumbi::morder(const int forca, int life){
	life=life-forca;		
}
void zumbi::andar(const int steps){
	position=position+steps;
	
}
void zumbi::defender(const int defesa, const int forca){
	if (defesa<forca){
		life=life-(forca-defesa);
	} else{
		life=life;
	}
	
}


