#include <iostream>
using namespace std;
class Database{
private:
	static int numPersonas;
	static int numCarros;
	static int numSponsors;
	static int numEscuderias;
	static int numPilotos;
	static vector<Persona> storePersona; //guardar personas
	static vector<Car> storeCar; //guardar carros
	static vector<Patrocinadores> storeSponsor; //guardar Patrocinadores
	static vector<Escuderia> storeEscuderia; //guardar escuderia
	static vector<Piloto> storePiloto;	//guardar pilotos
	DatabaseAsk myDB;
public:
	Database();
	char ingresarMasRpta();
	char yaIngresoRpta();
	bool ingresarMas(char rpta);
	bool yaIngreso(char rpta);
	int getNumPersonas();
	void menuIngrPer();
	void getPersona();
	int getNumPilotos();
	void menuIngrPil();
	Piloto ingrPilEscu();
	void getPiloto();
	int getNumCarros();
	void menuIngrCoc();
	Car ingrCocEscu();
	void getCarro();
	int getNumSpon();
	void menuIngrSpon();
	Patrocinadores ingrSponEscu();
	void getSponsor();
	int getNumEscuderias();
	void menuIngrEsc();
	void getEscuderia();
	Persona getPersonaVector(int i);
	void modificarPersonaVector(Persona P, int i);
	Piloto getPilotoVector(int i);
	void modificarPilotoVector(Piloto P, int i);
	Car getCarVector(int i);
	void modificarCarVector(Car C, int i);
	Patrocinadores getSponsorVector(int i);
	void modificarSponsorVector(Patrocinadores P, int i);
	Escuderia getEscuderiaVector(int i);
	void modificarEscuderiaVector(Escuderia E, int i);
	void deleteVectorPersona(int i);
	void deleteVectorPiloto(int i);
	void deleteVectorCar(int i);
	void deleteVectorSponsor(int i);
	void deleteVectorEscuderia(int i);
	void pbackVectorPiloto(Piloto P);
};
