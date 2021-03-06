#include<iostream>
#include<fstream>
#include <cstdlib> 
#include <vector>
#include <string>
#include "persona.h"
#include "carro.h"
#include "patrocinadores.h"
#include "escuderia.h"
#include "piloto.h"
#include "databaseask.h"
#include "database.h"
#include "databasemodifyper.h"
#include "databasemodifypil.h"
#include "databasemodifycar.h"
#include "databasemodifyspon.h"
#include "databasemodifyescu.h"
#include "erase.h"
using namespace std;
Database DB;
DatabaseModifyPer Per;
DatabaseModifyPil Pil;
DatabaseModifyCar Carro;
DatabaseModifySpon Spon;
DatabaseModifyEscu Escu;
Erase Borrar;

//instrucciones originales
void instrucciones(){
	cout << "Oprima los numeros segun lo que desee hacer." << endl;
}
//primer menu
void menu(){
	instrucciones();
	cout << 1 << " para ingresar datos" << endl;
	cout << 2 << " para visualizar datos" << endl;
	cout << 3 << " para modificar datos" << endl;
	cout << 4 << " para eliminar datos" << endl;
	cout << 5 << " para salir de la base de datos" << endl;
}
//instrucciones al apretar 1 por primera vez
void instrucciones1(){
	cout << "Oprima los numeros segun lo que desee ingresar." << endl;
}
//menu al apretar 1 por primera vez
void menu1(){
	instrucciones1();
	cout << 1 << " para ingresar personas" << endl;
	cout << 2 << " para ingresar pilotos" << endl;
	cout << 3 << " para ingresar coches" << endl;
	cout << 4 << " para ingresar escuderias" << endl;
	cout << 5 << " para ingresar patrocinadores" << endl;
	cout << 6 << " para regresar al menu anterior" << endl;
	cout << 7 << " para salir de la base de datos" << endl;
}
//menu de ingresar personas
void instruccionesIngPer(){
	cout << "Recuerde que una persona debe tener las siguientes caracteristicas: " << endl;
	cout << "Nombre" << endl;
	cout << "Edad" << endl;
	cout << "Sexo" << endl;
	cout << "Nacionalidad" << endl;
}
void seleccionmenu1();
void instrucciones2(){
	cout << "Oprima los numeros segun lo que desee visualizar." << endl;
}
void menu2(){
	instrucciones2();
	cout << 1 << " para visualizar personas" << endl;
	cout << 2 << " para visualizar pilotos" << endl;
	cout << 3 << " para visualizar coches" << endl;
	cout << 4 << " para visualizar escuderias" << endl;
	cout << 5 << " para visualizar patrocinadores" << endl;
	cout << 6 << " para regresar al menu anterior" << endl;
	cout << 7 << " para salir de la base de datos" << endl;
}
void instrucciones3(){
	cout << "Oprima los numeros segun lo que desee modificar." << endl;
}
void menu3(){
	instrucciones3();
	cout << 1 << " para modificar personas" << endl;
	cout << 2 << " para modificar pilotos" << endl;
	cout << 3 << " para modificar coches" << endl;
	cout << 4 << " para modificar escuderias" << endl;
	cout << 5 << " para modificar patrocinadores" << endl;
	cout << 6 << " para regresar al menu anterior" << endl;
	cout << 7 << " para salir de la base de datos" << endl;
}
void instrucciones4(){
	cout << "Oprima los numeros segun lo que desee eliminar." << endl;
}
void menu4(){
	instrucciones4();
	cout << 1 << " para eliminar personas" << endl;
	cout << 2 << " para eliminar pilotos" << endl;
	cout << 3 << " para eliminar coches" << endl;
	cout << 4 << " para eliminar escuderias" << endl;
	cout << 5 << " para eliminar patrocinadores" << endl;
	cout << 6 << " para regresar al menu anterior" << endl;
	cout << 7 << " para salir de la base de datos" << endl;
}
void menuIngPer(){
	instruccionesIngPer();
	DB.menuIngrPer();
	seleccionmenu1();
}
//lo q pide un numero
void instruccionesIngPil(){
	instruccionesIngPer();
	cout << "Puntos (Poner 0 si no hay puntos)" << endl;
	cout << "Paga" << endl;
	cout << "Numero" << endl;
}
void menuIngPil(){
	instruccionesIngPil();
	DB.menuIngrPil();
	seleccionmenu1();
}
void instruccionesIngCoc(){
	cout << "Recuerde que un carro debe tener las siguientes características: " << endl;
	cout << "Nombre " << endl;
	cout << "Motor " << endl;
}
void menuIngCoc(){
	instruccionesIngCoc();
	DB.menuIngrCoc();
	seleccionmenu1();
}
/*ingresar escuderias
*/
void instruccionesIngEsc(){
	cout << "Recuerde que una escuderia debe tener las siguientes caracteristicas: " << endl;
	cout << "Nombre" << endl;
	cout << "Pilotos" << endl;
	cout << "Patrocinadores" << endl;
	cout << "Y estos pueden ya haber sido ingresados, pero no es necesario" << endl;
}
void menuIngEsc(){
	instruccionesIngEsc();
	DB.menuIngrEsc();
	seleccionmenu1();
}
void instruccionesIngSpon(){
	cout << "Recuerde que un patrocinador debe tener las siguientes caracteristicas: " << endl;
	cout << "Nombre " << endl;
	cout << "Ingresos " << endl;
}
void menuIngSpon(){
	instruccionesIngSpon();
	DB.menuIngrSpon();
	seleccionmenu1();
}
void seleccionmenu2();
void getPersonas(){
	DB.getPersona();
	seleccionmenu2();
}
void getPilotos(){
	DB.getPiloto();
	seleccionmenu2();
}
void getCarros(){
	DB.getCarro();
	seleccionmenu2();
}
void getEscuderias(){
	DB.getEscuderia();
	seleccionmenu2();
}
void getPatrocinadores(){
	DB.getSponsor();
	seleccionmenu2();
}
int seleccion(){
	int opc;
	cout << "Ingrese el numero: " << endl;
	cin >> opc;
	return opc;
}
void seleccionmenu1();
//seleccionando en el primer menu
void seleccionmenu2(); //seleccionando en el segundo menu -> visualizar datos
void seleccionmenu3(); //seleccionando en el tercer menu -> modificar datos
void seleccionmenu4(); //seleccionando en el cuarto menu -> eliminar datos
//opciones menu
void seleccionar(int opc){
	switch(opc){
	case 1: //ingresar
		seleccionmenu1();
		break;
	case 2: //visualizar
		seleccionmenu2();
		break;
	case 3: //modificar
		seleccionmenu3();
		break;
	case 4: //eliminar
		seleccionmenu4();
		break;
	case 5: //salir
		exit(2604);
	}
}
void praseleccion(); //declarando funcion praseleccion 
//menu 1: ingresando personas
void selecMenuIngPers();
void selecMenuIngPil(); //Ingresar Pilotos
void selecMenuIngCoc(); //Ingresar coches
void selecMenuIngEsc(); //Ingresar escuderias
void selecMenuIngSpon(); //Ingresar sponsors
void selecmenu1(int opc){ //menu 1 = ingresar datos
	switch(opc){
	case 1: //personas
		selecMenuIngPers();
		break;
	case 2: //pilotos
		selecMenuIngPil();
		break;
	case 3: //carros
		selecMenuIngCoc();
		break;
	case 4: //escuderias
		selecMenuIngEsc();
		break;
	case 5: //sponsors
		selecMenuIngSpon();
		break;
	case 6: //regresar
		praseleccion();
		break;
	case 7: //salir
		exit(35);
	}
}
void prasaleccion();
void selecmenu2(int opc){ //menu 2 = visualizar datos
	switch(opc){
	case 1:
		getPersonas();
		break;
	case 2:
		getPilotos();
		break;
	case 3:
		getCarros();
		break;
	case 4:
		getEscuderias();
		break;
	case 5:
		getPatrocinadores();
		break;
	case 6:
		praseleccion();
		break;
	case 7:
		exit(69);
	}
}
//seleccion menu ingreso de personas -> 6 opciones
void modificarPersonita();
void modificarPilotito();
void modificarCarrito();
void modificarSponsorsito();
void modificarEscudericita();
void selecmenu3(int opc){
	switch(opc){
	case 1:
		modificarPersonita();
		break;
	case 2:
		modificarPilotito();
		break;
	case 3:
		modificarCarrito();
		break;
	case 4: 
		modificarEscudericita();
	break;
	case 5:
		modificarSponsorsito();
		break;
	case 6:
		praseleccion();
	case 7:
		exit(69);
	}
}
void modificarPersonita(){
	Per.modifyPersona();
	seleccionmenu3();
}
void modificarPilotito(){
	Pil.modifyPiloto();
	seleccionmenu3();
}
void modificarCarrito(){
	Carro.modifyCar();
	seleccionmenu3();
}
void modificarSponsorsito(){
	Spon.modifySpon();
	seleccionmenu3();
}
void modificarEscudericita(){
	Escu.modifyEscuderia();
	seleccionmenu3();
}
void eliminarPersonita();
void eliminarPilotito();
void eliminarCarrito();
void eliminarEscudericita();
void eliminarSponsorsito();
void selecmenu4(int opc){
	switch(opc){
	case 1:
		eliminarPersonita();
		break;
	case 2:
		eliminarPilotito();
		break;
	case 3:
		eliminarCarrito();
		break;
	case 4: 
		eliminarEscudericita();
	break;
	case 5:
		eliminarSponsorsito();
		break;
	case 6:
		praseleccion();
	case 7:
		exit(69);
	}
}
void eliminarPersonita(){
	Borrar.erasePersona();
	seleccionmenu4();
}
void eliminarPilotito(){
	Borrar.erasePiloto();
	seleccionmenu4();
}
void eliminarCarrito(){
	Borrar.eraseCoche();
	seleccionmenu4();
}
void eliminarEscudericita(){
	Borrar.eraseEscuderia();
	seleccionmenu4();
}
void eliminarSponsorsito(){
	Borrar.eraseSponsor();
	seleccionmenu4();
}
void praseleccion(){
	menu();
	int i = seleccion();
	seleccionar(i);
}
//para seleccionar menu->1
void seleccionmenu1(){
	menu1();
	int i = seleccion();
	selecmenu1(i);
	
}

//para seleccionar menu->1->1
void selecMenuIngPers(){
	menuIngPer();
}
void selecMenuIngPil(){
	menuIngPil();
}
void selecMenuIngCoc(){
	menuIngCoc();
}
void selecMenuIngEsc(){
	menuIngEsc();
}
void selecMenuIngSpon(){
	menuIngSpon();
}
void seleccionmenu2(){
	menu2();
	int i = seleccion();
	selecmenu2(i);
}
void seleccionmenu3(){
	menu3();
	int i = seleccion();
	selecmenu3(i);
}
void seleccionmenu4(){
	menu4();
	int i = seleccion();
	selecmenu4(i);
}
int main (){
	/////////////////////////////////////////LEYENDO ARCHIVOS .txt ///////////////////////////
	ifstream pilotosNames, pilotosLNames, pilotosCountry, pilotosAge, pilotosPoints, pilotosPay, pilotosNumbers;
	ifstream carNames, carEngines;
	ifstream sponsorNames, sponsorProfit;
	ifstream escuderias;
	int i, cont1, cont2;
	i = 0;
	pilotosNames.open("f12016pilotosnames.txt");
	pilotosLNames.open("f12016pilotoslnames.txt");
	pilotosCountry.open("f12016pilotoscountry.txt");
	pilotosAge.open("f12016pilotosage.txt");
	pilotosPoints.open("f12016pilotospoints.txt");
	pilotosPay.open("f12016pilotospay.txt");
	pilotosNumbers.open("f12016pilotosnumbers.txt");
	carNames.open("f12016carnames.txt");
	carEngines.open("f12016carengines.txt");
	sponsorNames.open("f12016sponsorsnames.txt");
	sponsorProfit.open("f12016sponsorsingresos.txt");
	escuderias.open("f12016escuderiasnames.txt");
	if ( (pilotosNames.fail()) || (pilotosLNames.fail()) || (pilotosCountry.fail()) || (pilotosAge.fail()) || (pilotosPoints.fail())
	|| (pilotosPay.fail()) || (pilotosNumbers.fail()) || (carNames.fail()) || (carEngines.fail()) || (sponsorNames.fail()) ||
		sponsorProfit.fail() || escuderias.fail() ){
		cerr << "Error abriendo algun archivo" << endl;
	} else {
	cout << "Archivos temporada 2016 leidos" << endl;
	Piloto Temp;
	Database K;
	string myName, myLName, myCountry;
	int age, points, pay, number;
	char sex;
	int sponsorProfits;
	string myCarName, myCarEngine, mySponsorName, myEscuderiaName;
	for(cont1 = 0; cont1 < 22; cont1++){
		getline(pilotosNames, myName);
		getline(pilotosLNames, myLName);
		getline(pilotosCountry, myCountry);
		pilotosAge >> age;
		pilotosPoints >> points;
		pilotosNumbers >> number;
		pilotosPay >> pay;
		Temp.setName(myName); Temp.setLastName(myLName); Temp.setCountry(myCountry);
		Temp.setAge(age); Temp.addPoints(points); Temp.setPay(pay); Temp.setNumber(number);
		Temp.setSex('M');
		K.pbackVectorPiloto(Temp);
	}
	int j = 0;
	for(cont2 = 0; cont2 < 11; cont2++){
		Car Temp2;
		Patrocinadores Sponsor;
		Escuderia Team;
		getline(carNames, myCarName);
		getline(carEngines, myCarEngine);
		getline(sponsorNames, mySponsorName);
		getline(escuderias, myEscuderiaName);
		sponsorProfit >> sponsorProfits;
		Temp2.setName(myCarName);
		Temp2.setEngine(myCarEngine);
		Sponsor.setName(mySponsorName);
		Sponsor.setIngresos(sponsorProfits);
		Team.setName(myEscuderiaName);
		Team.setPilotos(K.getPilotoVector(j*2));
		Team.setPilotos(K.getPilotoVector(j*2 +1));
		Team.setSponsor(Sponsor);
		Team.setCarro(Temp2);
		K.pbackVectorCarro(Temp2);
		K.pbackVectorSponsor(Sponsor);
		K.pbackVectorEscuderia(Team);
		j++;
	}
	pilotosNames.close();
	pilotosLNames.close();
	pilotosCountry.close();
	pilotosAge.close();
	pilotosPoints.close();
	pilotosNumbers.close();
	pilotosPay.close();
	carNames.close();
	carEngines.close();
	sponsorNames.close();
	sponsorProfit.close();
	escuderias.close();
	}
	/////////////////////////////////////////////////////ARCHIVOS LEIDOS////////////////////////////////////////////////
	praseleccion();
	return 0;
}


