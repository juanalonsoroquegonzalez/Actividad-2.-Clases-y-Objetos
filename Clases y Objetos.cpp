//Roque Gonzalez Juan Alonso
//Código: 216671932
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <list>

class Neurona
{
private:
    int id;
    float voltaje;
    int posicion_x;
    int posicion_y;
    int red;
    int green;
    int blue;

public:
    Neurona(int _id, float _voltaje, int _posicion_x, int _posicion_y, int _red, int _green, int _blue)
        : id(_id), voltaje(_voltaje), posicion_x(_posicion_x), posicion_y(_posicion_y), red(_red), green(_green), blue(_blue){
            }
        int getID() const{
            return id;
        }
        float getVoltaje() const{
            return voltaje;
        }
        int getPosicion_x() const{
            return posicion_x;
        }
        int getPosicion_y() const{
            return posicion_y;
        }
        int getRed() const{
            return red;
        }
        int getGreen() const{
            return green;
        }
        int getBlue() const{
            return blue;
        }
        void print() const {
        std::cout << "ID: " << id << std::endl;
        std::cout << "Voltaje: " << voltaje << std::endl;
        std::cout << "Posición X: " << posicion_x << std::endl;
        std::cout << "Posición Y: " << posicion_y << std::endl;
        std::cout << "Red: " << red << std::endl;
        std::cout << "Green: " << green << std::endl;
        std::cout << "Blue: " << blue << std::endl;
    }
};

class AdministradorNeuronas {
private:
    std::list<Neurona> listaNeuronas;

public:
    void agregarInicio(const Neurona& neurona) {
        listaNeuronas.push_front(neurona);
    }

    void agregarFinal(const Neurona& neurona) {
        listaNeuronas.push_back(neurona);
    }

    void mostrar() {
        for (const Neurona& neurona : listaNeuronas) {
            neurona.print();
            std::cout << "-------------------" << std::endl;
        }
    }
};


int main() {
    AdministradorNeuronas administrador;

    Neurona neurona1(1, 0.12, 20, 20, 255, 0, 0);
    Neurona neurona2(2, 0.64, 1, 25, 0, 255, 0);
    Neurona neurona3(3, 0.29, 12, 15, 0, 0, 255);

    administrador.agregarInicio(neurona1);
    administrador.agregarFinal(neurona2);
    administrador.agregarFinal(neurona3);

    std::cout << "Neuronas: \n";
    administrador.mostrar();

    return 0;
}


