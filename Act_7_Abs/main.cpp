#include <iostream>
using namespace std;

class Operacion {
private:
    // Detalles internos ocultos
    void mostrarDetallesInternos() {
        cout << "Método interno: validaciones matemáticas\n";
    }

protected:
    int x, y;

public:
    void setValores(int a, int b) {
        x = a;
        y = b;
        mostrarDetallesInternos(); // llamado interno, pero no accesible desde main
    }

    void descripcion() {
        cout << "Esta clase representa una operación matemática básica.\n";
    }

    void tipo() {
        cout << "Tipo: Aritmética\n";
    }

    void mostrarOperandos() {
        cout << "Operandos: x = " << x << ", y = " << y << endl;
    }

    void sistema() {
        cout << "Sistema operativo: C++ Math System\n";
    }
};


int main() {
    Operacion op;
    op.setValores(10, 5);
    op.descripcion();
    op.tipo();
    op.mostrarOperandos();
    op.sistema();

    // No se puede acceder a:
    // op.mostrarDetallesInternos();  // ❌ Error: es privado

    return 0;
}
