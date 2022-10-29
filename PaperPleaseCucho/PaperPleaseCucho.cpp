// PaperPleaseCucho.cpp Hector Antonio Valle Garcia. 22110141 Grupo 2O.

#include <iostream>
#include<string>
#include <windows.h>  
#include <stdlib.h>
using namespace std;
class Person {
private:
	int Opc;
	int Resp;
	int Terr;
	int Puntaje;
public:
	Person(int opc, int resp, int terr, int punt) {
		Opc = opc;
		Resp = resp;
		Terr = terr;
		Puntaje = punt;
	}
	void Carlos() {
		int opc, resp;
		int terr, punt = 0;
		system("cls");
		terr = 0;
		system("color 2");
		cout << "----------Entrevista--------------" << endl;
		cout << "Carlos-Hola buenos dias el motivo de mi visita es para vacacionar y me pienso quedar 4 semanas" << endl;
		system("pause");
		cout << "Tu-Muy bien me puede mostrar su Permiso de Entrada\n";
		system("pause");
		cout << "----------PERMISO DE ENTRADA-----------" << endl;
		cout << "Nombre: Carlos Alberto Huerta Torres" << endl << "Sexo:Masculino" << endl << "Edad: 24" << endl << "Nacionalidad: Mexicana" << endl << "Numero de IDE: 335511331577" << endl;
		cout << "Duracion de Estancia: 4 semanas" << endl;
		cout << "---------------------------------------" << endl;
		cout << "Tu-Ahora su Identificacion y Pasaporte" << endl;
		system("pause");
		cout << "Carlos-Claro" << endl; system("pause");
		cout << "---------------IDENTIFICACION--------------" << endl;
		cout << "Nombre: Carlos Alberto Huerta Torres" << endl << "Sexo:Masculino" << endl << "Edad: 24" << endl << "Nacionalidad: Mexicana" << endl << "Numero de IDE: 335511241577" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "------------PASAPORTE----------" << endl;
		cout << "Nombre: Carlos Alberto Huerta Torres" << endl << "Sexo:Masculino" << endl << "Edad: 24" << endl << "Nacionalidad: Mexicana" << endl << "Numero de IDE: 335511331577" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "---------Revise la documentacion-----------" << endl;
		cout << "Existe algun dato que sea diferente" << endl;
		cout << "1-Si" << endl << "2-No" << endl;
		cin >> resp;
		switch (resp) {
		case 1:
			cout << "Que dato no corresponde: " << endl;
			cout << "1-Nombre " << "2-Edad " << "3-Sexo " << "4-Numero de IDE " << "5-Nacionalidad " << "6-Duracion de estancia " << endl;
			cin >> resp;
			if (resp == 1) {
				cout << "Tu-Senior Carlos su documento tiene el Nombre Mal" << endl;
				system("pause");
				cout << "Carlos- Pero como, si sabe leer senior, solo me esta poniendo pretextos" << endl;
				cout << "Permitir Entrada a Carlos?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt - 2;
					cout << "Has dejado pasar a alguien con numero de IDE erroneo" << endl;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt + 1;
					cout << "Tu decision fue correcta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
				break;
			}
			else if (resp == 2) {
				cout << "Disculpe señor la Edad que viene en el pasaporte no concide con la de su Identificacion" << endl;
				system("pause");
				cout << "Carlos----Pero si la edad es la misma yo mismo la revise" << endl;
				cout << "Permitir Entrada a Carlos?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt - 2;
					cout << "Has dejado pasar a alguien con numero de IDE erroneo" << endl;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt + 1;
					cout << "Tu decision fue correcta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}
			else if (resp == 3) {
				cout << "Su Sexo esta mal" << endl;
				cout << "Carlos----Pero COMOOOOOO" << endl;
				cout << "Permitir Entrada a Carlos?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt - 2;
					cout << "Has dejado pasar a alguien con numero de IDE erroneo" << endl;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt + 2;
					cout << "Tu decision fue correcta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}
			else if (resp == 4) {
				cout << "Mr.Carlos su Numero de Ide no coincide en los documentos" << endl;
				cout << "Carlos---Vaya que mala pata" << endl;
				cout << "Permitir Entrada a Carlos?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt - 2;
					cout << "Has dejado pasar a alguien con numero de IDE erroneo" << endl;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt + 1;
					cout << "Tu decision fue correcta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}
			else if (resp == 5) {
				cout << "Carlos su Nacionalidad es incosistente en ambos Documentos" << endl;
				cout << "Carlos------ Ah caray pero si soy Mexicano, que no me ve" << endl;
				cout << "Permitir Entrada a Carlos?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt - 2;
					cout << "Has dejado pasar a alguien con numero de IDE erroneo" << endl;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt + 1;
					cout << "Tu decision fue correcta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}

			else if (resp == 6) {
				cout << "Su duracion en nuestro pais es diferente en cada Documento" << endl;
				cout << "Carlos---Achis como si me voy a quedar 4 semanas ahi dice" << endl;
				cout << "Permitir Entrada a Carlos?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt - 2;
					cout << "Has dejado pasar a alguien con numero de IDE erroneo" << endl;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt + 1;
					cout << "Tu decision fue correcta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}
			break;
		case 2:
			cout << "Permitir Entrar a Carlos" << endl << "1-Si" << endl << "2-No" << endl;
			cin >> resp;
			if (resp == 1) {
				cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
				punt = punt - 2;
				cout << "Has dejado pasar a alguien con numero de IDE erroneo" << endl;
				cout << "Tu puntaje es: " << punt << endl;
			}
			else if (resp == 2) {
				cout << "Su acceso a sido denegado" << endl;
				punt = punt + 1;
				cout << "Tu decision fue correcta" << endl;
				cout << "Tu puntaje es de: " << punt << endl;
			}
			break;
		}
		system("pause");
	}
	void Maria() {
		int opc, resp;
		int terr, punt=0;
		terr = 0;
		system("cls");
		system("color D");
		terr = 0;
		cout << "----------Entrevista--------------" << endl;
		cout << "Maria-Hola buenos dias el motivo de mi visita es por Trabajo y me pienso quedar 6 Meses" << endl;
		system("pause");
		cout << "----------------------------------" << endl;
		cout << "Tu-Muy bien me puede mostrar su Permiso de Entrada\n";
		system("pause");
		cout << "----------PERMISO DE ENTRADA-----------" << endl;
		cout << "Nombre: Maria Galilea Perez Cornejo" << endl << "Sexo:Femenino" << endl << "Edad: 35" << endl << "Nacionalidad: Mexicana" << endl << "Numero de IDE: 445512184745" << endl;
		cout << "Duracion de Estancia: 6 Meses" << endl;
		cout << "---------------------------------------" << endl;
		cout << "Tu-Ahora su Identificacion y Pasaporte" << endl;
		system("pause");
		cout << "Maria-Con gusto" << endl; system("pause");
		cout << "---------------IDENTIFICACION--------------" << endl;
		cout << "Nombre: Maria Galilea Perez Cornejo" << endl << "Sexo:Femenino" << endl << "Edad: 35" << endl << "Nacionalidad: Mexicana" << endl << "Numero de IDE: 445512184745" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "------------PASAPORTE----------" << endl;
		cout << "Nombre: Maria Galilea Perez Cornejo" << endl << "Sexo:Femenino" << endl << "Edad: 35" << endl << "Nacionalidad: Mexicana" << endl << "Numero de IDE: 445512184745" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "---------Revise la documentacion-----------" << endl;
		cout << "Existe algun dato que sea diferente" << endl;
		cout << "1-Si" << endl << "2-No" << endl;
		cin >> resp;
		switch (resp) {
		case 1:
			cout << "Que dato no corresponde: " << endl;
			cout << "1-Nombre " << "2-Edad " << "3-Sexo " << "4-Numero de IDE " << "5-Nacionalidad " << "6-Duracion de estancia " << endl;
			cin >> resp;
			if (resp == 1) {
				cout << "Tu-Maria su documento tiene el Nombre Mal" << endl;
				system("pause");
				cout << "Maria-Solo me esta poniendo pretextos" << endl;
				cout << "Permitir Entrada a Maria?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt + 2;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt - 2;
					cout << "Tu decision fue incorrecta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
				break;
			}
			else if (resp == 2) {
				cout << "Disculpe seniorita la Edad que viene en el pasaporte no concide con la de su Identificacion" << endl;
				system("pause");
				cout << "Maria----Pero si la edad esa es mi edad" << endl;
				cout << "Permitir Entrada a Maria?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt + 2;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt - 2;
					cout << "Tu decision fue incorrecta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}
			else if (resp == 3) {
				cout << "Su Sexo esta mal" << endl;
				cout << "Maria----Pero COMOOOOOO si soy MUJER" << endl;
				cout << "Permitir Entrada a Maria?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt + 2;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt - 2;
					cout << "Tu decision fue incorrecta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}
			else if (resp == 4) {
				cout << "Ms.Maria su Numero de Ide no coincide en los documentos" << endl;
				cout << "Maria---Comprese lentes porque no ve bien, CIEGO" << endl;
				cout << "Permitir Entrada a Maria?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt + 2;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt - 2;
					cout << "Tu decision fue incorrecta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}
			else if (resp == 5) {
				cout << "Maria su Nacionalidad es incosistente en ambos Documentos" << endl;
				cout << "Maria------ Puros pretextos, mejor ya diga que no y nos dejamos de rodeos" << endl;
				cout << "Permitir Entrada a Maria?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt + 2;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt - 2;
					cout << "Tu decision fue incorrecta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}

			else if (resp == 6) {
				cout << "Su duracion en nuestro pais es diferente en cada Documento" << endl;
				cout << "Maria---Pero si no menti" << endl;
				cout << "Permitir Entrada a Maria?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt + 2;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt - 2;
					cout << "Tu decision fue incorrecta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}
			break;
		case 2:
			cout << "Permitir Entrar a Maria" << endl << "1-Si" << endl << "2-No" << endl;
			cin >> resp;
			if (resp == 1) {
				cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
				punt = punt + 2;
				cout << "Tu puntaje es: " << punt << endl;
			}
			else if (resp == 2) {
				cout << "Su acceso a sido denegado" << endl;
				punt = punt - 2;
				cout << "Tu decision fue incorrecta" << endl;
				cout << "Tu puntaje es de: " << punt << endl;
			}
			break;
		}
		system("pause");
	}
	void Guillermo() {
		int opc, resp;
		int terr, punt;
		terr = 1;
		system("cls");
		system("color A");
		terr = 1;
		cout << "----------Entrevista--------------" << endl;
		cout << "---Llega guillermo con actitud sospechosa y algo nervioso---" << endl;
		cout << "Guillermo-Hola buenas Tardes el motivo de mi visita es por culto religiosos y me pienso quedar 1 semana, pero puede que me vaya antes " << endl;
		system("pause");
		cout << "----------------------------------" << endl;
		cout << "Tu-Muy bien me puede mostrar su Permiso de Entrada\n";
		system("pause");
		cout << "----------PERMISO DE ENTRADA-----------" << endl;
		cout << "Nombre: Guillermo Misael Rosales Prado" << endl << "Sexo:Masculino" << endl << "Edad: 25" << endl << "Nacionalidad: Cubana" << endl << "Numero de IDE: 254687431245" << endl;
		cout << "Duracion de Estancia: 5 dias" << endl;
		cout << "---------------------------------------" << endl;
		cout << "Tu-Ahora su Identificacion y Pasaporte" << endl;
		system("pause");
		cout << "Guillermo-Con gusto" << endl; system("pause");
		cout << "---------------IDENTIFICACION--------------" << endl;
		cout << "Nombre: Guillermo Misael Rosales Prado" << endl << "Sexo:Masculino" << endl << "Edad: 25" << endl << "Nacionalidad: Cubana" << endl << "Numero de IDE: 254687431245" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "------------PASAPORTE----------" << endl;
		cout << "Nombre: Guillermo Misael Rosales Prado" << endl << "Sexo:Masculino" << endl << "Edad: 25" << endl << "Nacionalidad: Cubana" << endl << "Numero de IDE: 254687431245" << endl;
		cout << "-------------------------------" << endl;
		cout << "------------------------Para Activar el escaner presione 1------------------" << endl;
		cin >> opc;
		if (opc == 1) {
			if (terr == 1) {
				cout << "Es Terrorista" << endl;
				cout << "Para detener al terrorista presione 1" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Usted ha sido Detenido por Terrorismo" << endl;
					cout << "Guillermo-----Como me descubrieron" << endl;
					punt = punt + 3;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}
			else if (terr == 0) {
				cout << "No es Terrorista" << endl;
				cout << "---------Revision de la documentacion-----------" << endl;
				cout << "Existe algun dato que sea diferente" << endl;
				cout << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				switch (resp) {
				case 1:
					cout << "Que dato no corresponde: " << endl;
					cout << "1-Nombre " << "2-Edad " << "3-Sexo " << "4-Numero de IDE " << "5-Nacionalidad " << "6-Duracion de estancia " << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Tu-Senior Guillermo su documento tiene el Nombre Mal" << endl;
						system("pause");
						cout << "Guillermo- Revise de nuevo" << endl;
						cout << "Permitir Entrada a Guillermo?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt - 3;
							cout << "Has dejado pasar a alguien con numero de Duracion de Estancia incorrecta y Terrorista" << endl;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt + 1;
							cout << "Tu decision fue correcta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
						break;
					}
					else if (resp == 2) {
						cout << "Disculpe señor la Edad que viene en el pasaporte no concide con la de su Identificacion" << endl;
						system("pause");
						cout << "Guillermo----Me esta diciendo viejo" << endl;
						cout << "Permitir Entrada a Guillermo?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt - 3;
							cout << "Has dejado pasar a alguien con Duracion de Estancia incorrecta y Terrorista" << endl;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt + 1;
							cout << "Tu decision fue correcta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
					}
					else if (resp == 3) {
						cout << "Su Sexo esta mal" << endl;
						cout << "Carlos----Me esta diciendo Mujer " << endl;
						cout << "Permitir Entrada a Guillermo?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt - 3;
							cout << "Has dejado pasar a alguien con Duracion de Estancia incorrecta y Terrorista" << endl;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt + 1;
							cout << "Tu decision fue correcta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
					}
					else if (resp == 4) {
						cout << "Mr.Guillermo su Numero de Ide no coincide en los documentos" << endl;
						cout << "Guillermo---No diga Mentiras" << endl;
						cout << "Permitir Entrada a Guillermo?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt - 3;
							cout << "Has dejado pasar a alguien con Duracion de Estancia incorrecta y Terrorista" << endl;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt + 1;
							cout << "Tu decision fue correcta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
					}
					else if (resp == 5) {
						cout << "Guillermo su Nacionalidad es incosistente en ambos Documentos" << endl;
						cout << "Guillermo------ Mi helmano dios quiso que fuera cubano, como me va a decir que mi nacionalidad esta incorrecta" << endl;
						cout << "Permitir Entrada a Guillermo?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt - 3;
							cout << "Has dejado pasar a alguien con Duracion de Estancia incorrecta y Terrorista" << endl;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt + 1;
							cout << "Tu decision fue correcta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
					}

					else if (resp == 6) {
						cout << "Su duracion en nuestro pais es diferente a la indicada en el documento" << endl;
						cout << "Guillermo---Ese tonto lo puso Mal" << endl;
						cout << "Permitir Entrada a Guillermo?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt - 3;
							cout << "Has dejado pasar a alguien con Duracion de Estancia incorrecta y Terrorista" << endl;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt + 2;
							cout << "Tu decision fue correcta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
					}
					break;
				case 2:
					cout << "Permitir Entrar a Guillermo" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt - 3;
						cout << "Has dejado pasar a alguien con Duracion de Estancia incorrecta y Terrorista" << endl;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt + 1;
						cout << "Tu decision fue correcta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
					break;
				}
			}
		}
		else
		{
			cout << "---------Revision de la documentacion-----------" << endl;
			cout << "Existe algun dato que sea diferente" << endl;
			cout << "1-Si" << endl << "2-No" << endl;
			cin >> resp;
			switch (resp) {
			case 1:
				cout << "Que dato no corresponde: " << endl;
				cout << "1-Nombre " << "2-Edad " << "3-Sexo " << "4-Numero de IDE " << "5-Nacionalidad " << "6-Duracion de estancia " << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Tu-Senior Guillermo su documento tiene el Nombre Mal" << endl;
					system("pause");
					cout << "Guillermo- Revise de nuevo" << endl;
					cout << "Permitir Entrada a Guillermo?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt - 3;
						cout << "Has dejado pasar a alguien con numero de Duracion de Estancia incorrecta y Terrorista" << endl;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt + 1;
						cout << "Tu decision fue correcta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
					break;
				}
				else if (resp == 2) {
					cout << "Disculpe señor la Edad que viene en el pasaporte no concide con la de su Identificacion" << endl;
					system("pause");
					cout << "Guillermo----Me esta diciendo viejo" << endl;
					cout << "Permitir Entrada a Guillermo?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt - 3;
						cout << "Has dejado pasar a alguien con Duracion de Estancia incorrecta y Terrorista" << endl;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt + 1;
						cout << "Tu decision fue correcta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
				}
				else if (resp == 3) {
					cout << "Su Sexo esta mal" << endl;
					cout << "Carlos----Me esta diciendo Mujer " << endl;
					cout << "Permitir Entrada a Guillermo?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt - 3;
						cout << "Has dejado pasar a alguien con Duracion de Estancia incorrecta y Terrorista" << endl;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt + 1;
						cout << "Tu decision fue correcta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
				}
				else if (resp == 4) {
					cout << "Mr.Guillermo su Numero de Ide no coincide en los documentos" << endl;
					cout << "Guillermo---No diga Mentiras" << endl;
					cout << "Permitir Entrada a Guillermo?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt - 3;
						cout << "Has dejado pasar a alguien con Duracion de Estancia incorrecta y Terrorista" << endl;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt + 1;
						cout << "Tu decision fue correcta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
				}
				else if (resp == 5) {
					cout << "Guillermo su Nacionalidad es incosistente en ambos Documentos" << endl;
					cout << "Guillermo------ Mi helmano dios quiso que fuera cubano, como me va a decir que mi nacionalidad esta incorrecta" << endl;
					cout << "Permitir Entrada a Guillermo?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt - 3;
						cout << "Has dejado pasar a alguien con Duracion de Estancia incorrecta y Terrorista" << endl;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt + 1;
						cout << "Tu decision fue correcta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
				}

				else if (resp == 6) {
					cout << "Su duracion en nuestro pais es diferente a la indicada en el documento" << endl;
					cout << "Guillermo---Ese tonto lo puso Mal" << endl;
					cout << "Permitir Entrada a Guillermo?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt - 3;
						cout << "Has dejado pasar a alguien con Duracion de Estancia incorrecta y Terrorista" << endl;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt+2;
						cout << "Tu decision fue correcta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
				}
				break;
			case 2:
				cout << "Permitir Entrar a Guillermo" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt - 3;
					cout << "Has dejado pasar a alguien con Duracion de Estancia incorrecta y Terrorista" << endl;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt + 1;
					cout << "Tu decision fue correcta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
				break;
			}
		}
	}
	void Martina() {
		int opc, resp;
		int terr, punt = 0;
		terr = 0;
		system("cls");
		cout << "----------Entrevista--------------" << endl;
		cout << "Martina-Hola buenos dias el motivo de mi visita es para residir en este pais por lo que me quedare de manera definitiva" << endl;
		system("pause");
		cout << "----------------------------------" << endl;
		cout << "Tu-Muy bien me puede mostrar su Permiso de Entrada\n";
		system("pause");
		cout << "----------PERMISO DE ENTRADA-----------" << endl;
		cout << "Nombre: Martina Noemi Gonzales Solano" << endl << "Sexo:Femenino" << endl << "Edad: 27" << endl << "Nacionalidad: Argentina" << endl << "Numero de IDE: 254561254568" << endl;
		cout << "Duracion de Estancia: Permanente" << endl;
		cout << "---------------------------------------" << endl;
		cout << "Tu-Ahora su Identificacion y Pasaporte" << endl;
		system("pause");
		cout << "Martina-Con gusto" << endl; system("pause");
		cout << "---------------IDENTIFICACION--------------" << endl;
		cout << "Nombre: Martina Noemi Gonzales Solano" << endl << "Sexo:Femenino" << endl << "Edad: 27" << endl << "Nacionalidad: Argentina" << endl << "Numero de IDE: 254561254568" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "------------PASAPORTE----------" << endl;
		cout << "Nombre: Martina Noemi Gonzales Solano" << endl << "Sexo:Femenino" << endl << "Edad: 27" << endl << "Nacionalidad: Argentina" << endl << "Numero de IDE: 254561254568" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "------------------------Para Activar el escaner presione 1------------------" << endl << "De lo contrario continuaremos con la revision de documentos" << endl;
		cin >> opc;
		if (opc == 1) {
			if (terr == 1) {
				cout << "Es Terrorista" << endl;
				cout << "Para detener al terrorista presione 1" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Usted ha sido Detenido por Terrorismo" << endl;
					cout << "Martina-----Como me descubrieron" << endl;
					punt = punt + 3;
					cout << "Tu puntaje es de: " << punt << endl;
				}
				else {};

			}
			else if (terr == 0) {
				cout << "No es Terrorista" << endl;
				cout << "---------Revision de la documentacion-----------" << endl;
				cout << "Existe algun dato que sea diferente" << endl;
				cout << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				switch (resp) {
				case 1:
					cout << "Que dato no corresponde: " << endl;
					cout << "1-Nombre " << "2-Edad " << "3-Sexo " << "4-Numero de IDE " << "5-Nacionalidad " << "6-Duracion de estancia " << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Tu-Seniorita Martina su documento tiene el Nombre Mal" << endl;
						system("pause");
						cout << "Martina- Que tonto no reviso bien" << endl;
						cout << "Permitir Entrada a Martina?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt + 2;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt - 2;
							cout << "Tu decision fue incorrecta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
						break;
					}
					else if (resp == 2) {
						cout << "Disculpe seniorita la Edad que viene en el pasaporte no concide con la de su Identificacion" << endl;
						system("pause");
						cout << "Martina----Osea Como, me estas diciendo que hay errores en mi documentacion" << endl;
						cout << "Permitir Entrada a Martina?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt + 2;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt - 2;
							cout << "Tu decision fue incorrecta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
					}
					else if (resp == 3) {
						cout << "Su Sexo esta mal" << endl;
						cout << "Carlos----Me esta diciendo que no soy Mujer, Quieres Problemas" << endl;
						cout << "Permitir Entrada a Martina?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt + 2;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt - 2;
							cout << "Tu decision fue incorrecta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
					}
					else if (resp == 4) {
						cout << "Ms.Martina su Numero de Ide no coincide en los documentos" << endl;
						cout << "Martina---Que raro yo lo revise varias veces" << endl;
						cout << "Permitir Entrada a Martina?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt + 2;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt - 2;
							cout << "Tu decision fue incorrecta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
					}
					else if (resp == 5) {
						cout << "Martina su Nacionalidad es incosistente en ambos Documentos" << endl;
						cout << "Martina------ Sho soy de la capital del fubol, como osas decirme que no soy Argentina che" << endl;
						cout << "Permitir Entrada a Martina?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt + 2;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt - 2;
							cout << "Tu decision fue incorrecta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
					}
					else if (resp == 6) {
						cout << "Su duracion en nuestro pais es diferente a la indicada en el documento" << endl;
						cout << "Martina---Eso es mentira" << endl;
						cout << "Permitir Entrada a Martina?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt + 2;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt - 2;
							cout << "Tu decision fue incorrecta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
					}
					break;
				case 2:
					cout << "Permitir Entrada a Martina?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt + 2;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt - 2;
						cout << "Tu decision fue incorrecta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
					break;
				}
			}
		}
		else
		{
			cout << "---------Revision de la documentacion-----------" << endl;
			cout << "Existe algun dato que sea diferente" << endl;
			cout << "1-Si" << endl << "2-No" << endl;
			cin >> resp;
			switch (resp) {
			case 1:
				cout << "Que dato no corresponde: " << endl;
				cout << "1-Nombre " << "2-Edad " << "3-Sexo " << "4-Numero de IDE " << "5-Nacionalidad " << "6-Duracion de estancia " << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Tu-Seniorita Martina su documento tiene el Nombre Mal" << endl;
					system("pause");
					cout << "Martina- Que tonto no reviso bien" << endl;
					cout << "Permitir Entrada a Martina?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt + 2;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt - 2;
						cout << "Tu decision fue incorrecta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
					break;
				}
				else if (resp == 2) {
					cout << "Disculpe seniorita la Edad que viene en el pasaporte no concide con la de su Identificacion" << endl;
					system("pause");
					cout << "Martina----Osea Como, me estas diciendo que hay errores en mi documentacion" << endl;
					cout << "Permitir Entrada a Martina?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt + 2;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt - 2;
						cout << "Tu decision fue incorrecta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
				}
				else if (resp == 3) {
					cout << "Su Sexo esta mal" << endl;
					cout << "Carlos----Me esta diciendo que no soy Mujer, Quieres Problemas" << endl;
					cout << "Permitir Entrada a Martina?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt + 2;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt - 2;
						cout << "Tu decision fue incorrecta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
				}
				else if (resp == 4) {
					cout << "Ms.Martina su Numero de Ide no coincide en los documentos" << endl;
					cout << "Martina---Que raro yo lo revise varias veces" << endl;
					cout << "Permitir Entrada a Martina?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt + 2;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt - 2;
						cout << "Tu decision fue incorrecta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
				}
				else if (resp == 5) {
					cout << "Martina su Nacionalidad es incosistente en ambos Documentos" << endl;
					cout << "Martina------ Sho soy de la capital del fubol, como osas decirme que no soy Argentina che" << endl;
					cout << "Permitir Entrada a Martina?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt + 2;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt - 2;
						cout << "Tu decision fue incorrecta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
				}
				else if (resp == 6) {
					cout << "Su duracion en nuestro pais es diferente a la indicada en el documento" << endl;
					cout << "Martina---Eso es mentira" << endl;
					cout << "Permitir Entrada a Martina?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt + 2;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt - 2;
						cout << "Tu decision fue incorrecta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
				}
				break;
			case 2:
				cout << "Permitir Entrada a Martina?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt + 2;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt - 2;
					cout << "Tu decision fue incorrecta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
				break;
			}
		}
		system("pause");
	}
	void Jose() {
		int opc, resp;
		int terr, punt = 0;
		terr = 1;
		system("cls");
		terr = 1;
		cout << "----------Entrevista--------------" << endl;
		cout << "Jose-Hola buenas Tardes el motivo de mi visita es por Salud y me pienso quedar 2 Meses" << endl;
		system("pause");
		cout << "----------------------------------" << endl;
		cout << "Tu-Muy bien me puede mostrar su Permiso de Entrada\n";
		system("pause");
		cout << "----------PERMISO DE ENTRADA-----------" << endl;
		cout << "Nombre: Jose Alfredo Jimenez Solis " << endl << "Sexo:Masculino" << endl << "Edad: 27" << endl << "Nacionalidad: Mexicana" << endl << "Numero de IDE: 758**941235641" << endl;
		cout << "Duracion de Estancia: 2 Meses" << endl;
		cout << "---------------------------------------" << endl;
		cout << "Tu-Ahora su Identificacion y Pasaporte" << endl;
		system("pause");
		cout << "Jose-Con gusto" << endl; system("pause");
		cout << "---------------IDENTIFICACION--------------" << endl;
		cout << "Nombre: Jose Alfredo Jimenez Solis " << endl << "Sexo:Masculino" << endl << "Edad: 27" << endl << "Nacionalidad: Mexicana" << endl << "Numero de IDE: 758**941235641" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "------------PASAPORTE----------" << endl;
		cout << "Nombre: Jose Alfredo Jimenez Solis " << endl << "Sexo:Masculino" << endl << "Edad: 37" << endl << "Nacionalidad: Mexicana" << endl << "Numero de IDE: 758**941235641" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "------------------------Para Activar el escaner presione 1------------------" << endl;
		cin >> opc;
		if (opc == 1) {
			if (terr == 1) {
				cout << "Es Terrorista" << endl;
				cout << "Para detener al terrorista presione 1" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Jose ha sido Detenido por Terrorismo" << endl;
					cout << "Jose-----Me han descubierto" << endl;
					punt = punt + 3;
					cout << "Tu puntaje es de: " << punt << endl;
				}
			}
			else if (terr == 0) {
				cout << "No es Terrorista" << endl;
				cout << "---------Revision de la documentacion-----------" << endl;
				cout << "Existe algun dato que sea diferente" << endl;
				cout << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				switch (resp) {
				case 1:
					cout << "Que dato no corresponde: " << endl;
					cout << "1-Nombre " << "2-Edad " << "3-Sexo " << "4-Numero de IDE " << "5-Nacionalidad " << "6-Duracion de estancia " << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Tu-Senior Jose su documento tiene el Nombre Mal" << endl;
						system("pause");
						cout << "Jose- Revise de una vez mas" << endl;
						cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt - 3;
							cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt + 1;
							cout << "Tu decision fue correcta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
						break;
					}
					else if (resp == 2) {
						cout << "Disculpe señor la Edad que viene en el pasaporte no concide con la de su Identificacion" << endl;
						system("pause");
						cout << "Jose----Diablos como esto pudo afectar el plan" << endl;
						cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt - 3;
							cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt + 1;
							cout << "Tu decision fue correcta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
					}
					else if (resp == 3) {
						cout << "Su Sexo esta mal" << endl;
						cout << "Jose----Pero soy hombre " << endl;
						cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt - 3;
							cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt + 1;
							cout << "Tu decision fue correcta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
					}
					else if (resp == 4) {
						cout << "Mr.Jose su Numero de Ide no coincide en los documentos" << endl;
						cout << "Jose---No diga Mentiras" << endl;
						cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt - 3;
							cout << "Has dejado pasar a alguien con la Edad incorrecta y Terrorista" << endl;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt + 1;
							cout << "Tu decision fue correcta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
					}
					else if (resp == 5) {
						cout << "Jose su Nacionalidad es incosistente en ambos Documentos" << endl;
						cout << "Jose------ Soy la representacion andante de Mexicano, No me diga a mi esas fregaderas" << endl;
						cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt - 3;
							cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt + 1;
							cout << "Tu decision fue correcta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
					}

					else if (resp == 6) {
						cout << "Su duracion en nuestro pais es diferente a la indicada en el documento" << endl;
						cout << "Jose---Esta usted tonto, o lo tiraron de niño" << endl;
						cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
						cin >> resp;
						if (resp == 1) {
							cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
							punt = punt - 3;
							cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
							cout << "Tu puntaje es: " << punt << endl;
						}
						else if (resp == 2) {
							cout << "Su acceso a sido denegado" << endl;
							punt = punt + 1;
							cout << "Tu decision fue correcta" << endl;
							cout << "Tu puntaje es de: " << punt << endl;
						}
					}
					break;
				case 2:
					cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt - 3;
						cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt + 1;
						cout << "Tu decision fue correcta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
					break;
				}
			}
		}
		else
		{
			cout << "---------Revision de la documentacion-----------" << endl;
			cout << "Existe algun dato que sea diferente" << endl;
			cout << "1-Si" << endl << "2-No" << endl;
			cin >> resp;
			switch (resp) {
			case 1:
				cout << "Que dato no corresponde: " << endl;
				cout << "1-Nombre " << "2-Edad " << "3-Sexo " << "4-Numero de IDE " << "5-Nacionalidad " << "6-Duracion de estancia " << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Tu-Senior Jose su documento tiene el Nombre Mal" << endl;
					system("pause");
					cout << "Jose- Revise de una vez mas" << endl;
					cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt - 3;
						cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt + 1;
						cout << "Tu decision fue correcta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
					break;
				}
				else if (resp == 2) {
					cout << "Disculpe señor la Edad que viene en el pasaporte no concide con la de su Identificacion" << endl;
					system("pause");
					cout << "Jose----Diablos como esto pudo afectar el plan" << endl;
					cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt - 3;
						cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt + 1;
						cout << "Tu decision fue correcta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
				}
				else if (resp == 3) {
					cout << "Su Sexo esta mal" << endl;
					cout << "Jose----Pero soy hombre " << endl;
					cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt - 3;
						cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt + 1;
						cout << "Tu decision fue correcta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
				}
				else if (resp == 4) {
					cout << "Mr.Jose su Numero de Ide no coincide en los documentos" << endl;
					cout << "Jose---No diga Mentiras" << endl;
					cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt - 3;
						cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt + 1;
						cout << "Tu decision fue correcta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
				}
				else if (resp == 5) {
					cout << "Jose su Nacionalidad es incosistente en ambos Documentos" << endl;
					cout << "Jose------ Soy la representacion andante de Mexicano, No me diga a mi esas fregaderas" << endl;
					cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt - 3;
						cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt + 1;
						cout << "Tu decision fue correcta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
				}

				else if (resp == 6) {
					cout << "Su duracion en nuestro pais es diferente a la indicada en el documento" << endl;
					cout << "Jose---Esta usted tonto, o lo tiraron de niño" << endl;
					cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
					cin >> resp;
					if (resp == 1) {
						cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
						punt = punt - 3;
						cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
						cout << "Tu puntaje es: " << punt << endl;
					}
					else if (resp == 2) {
						cout << "Su acceso a sido denegado" << endl;
						punt = punt + 1;
						cout << "Tu decision fue correcta" << endl;
						cout << "Tu puntaje es de: " << punt << endl;
					}
				}
				break;
			case 2:
				cout << "Permitir Entrada a Jose?" << endl << "1-Si" << endl << "2-No" << endl;
				cin >> resp;
				if (resp == 1) {
					cout << "Puesde Pasar" << endl << "Disfrute su estancia" << endl;
					punt = punt - 3;
					cout << "Has dejado pasar a alguien con Edad incorrecta y Terrorista" << endl;
					cout << "Tu puntaje es: " << punt << endl;
				}
				else if (resp == 2) {
					cout << "Su acceso a sido denegado" << endl;
					punt = punt + 1;
					cout << "Tu decision fue correcta" << endl;
					cout << "Tu puntaje es de: " << punt << endl;
				}
				break;
			}
		}
		system("pause");

	}
};
int main(int argc, char** argv) {

	int opc, resp;
	int terr, punt = punt;
	do {
		system("cls");
		Person sqr = Person(opc, resp, terr, punt);
		system("color F");

		cout << "--------------------Bienvenido a Paper Please Cucho-----------------------" << endl;
		cout << "*********" << endl;
		cout << "*       *" << endl;
		cout << "*       *" << endl;
		cout << "*********  *********" << endl;
		cout << "*          *        *" << endl;
		cout << "*          *        *" << endl;
		cout << "*          **********" << endl;
		cout << "           *" << endl;
		cout << "           *" << endl;
		cout << "           *" << endl;
		cout << "1-Para comenzar el juego" << endl << "2.Para Salir del Juego" << endl;
		cin >> opc;
		switch (opc) {

		case 1:
			sqr.Carlos();
			sqr.Maria();
			cout << "Dia Finalizado" << endl;
			system("cls");
			system("color C");
			cout << "-----------------------------Ultimas Noticias--------------------" << endl;
			cout << "Cuidado se han infiltrado algunos terroristas que buscan cruzar la frontera, para identificarlos Busca asteriscos en la pantalla" << endl;
			cout << "-----------------------------------------------------------------" << endl;
			system("Pause");
			system("color F");
			sqr.Jose();
			system("color B");
			sqr.Martina();
			sqr.Guillermo();
			system("color 1");
			cout << "Tu puntaje final es de: " << punt << endl;
			break;
		case 2:
			system("cls");
			cout << "Gracias por jugar" << endl;
			exit(0);

			break;
		default:
			cout << "Esa opcion NO EXISTE" << endl;
			break;

		}
		cout << "Si quiere volver al juego presione 1" << endl;
		cin >> opc;
	} while (opc == 1);
}

