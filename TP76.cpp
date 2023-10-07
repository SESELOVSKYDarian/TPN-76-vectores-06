#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<int> GenerarVector(int n);
int SumarVector(vector<int> A);
float PromediarVector(vector<int> A, int n);
vector<int> SonMayoresAlPromedio(vector<int> A, float promedio);
int ContarMultiplos2Y3(vector<int> A);
vector<int> VectorPor2(vector<int> A);
void MostrarVector(vector<int> A);

int main()
{
    vector<int> A;
    vector<int> B;
    vector<int> C;
    int N, multiplo, suma;
    float prom;
    cout << "Ingrese numero de espacio del vector: ";
    cin >> N;
    A = GenerarVector(N);
    prom = PromediarVector(A, N);
    B = SonMayoresAlPromedio(A, prom);
    multiplo = ContarMultiplos2Y3(B);
    suma = SumarVector(B);
    C = VectorPor2(A);
    MostrarVector(A);
    cout << "Promedio: " << prom << endl;
    cout << "Elementos mayores que el promedio: " << endl;
    MostrarVector(B);
    cout << "Cantidad de elementos múltiplos de 2 y 3: " << multiplo << endl;
    cout << "Suma del vector B: " << suma << endl;
    cout << "Los elementos del vector A multiplicados por 2: " << endl;
    MostrarVector(C);
    return 0;
}

vector<int> GenerarVector(int n)
{
    vector<int> V;
    int e;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        e = rand() % 32000;
        V.push_back(e);
    }
    return V;
}

int SumarVector(vector<int> A)
{
    int e = 0;
    for (int i = 0; i < A.size(); i++)
    {
        e += A[i];
    }
    return e;
}

float PromediarVector(vector<int> A, int n)
{
	float e;
	float prom;
	e = SumarVector(A);
	prom = e/n;
	return prom;
}

vector<int> SonMayoresAlPromedio(vector<int> A, float promedio)
{
    vector<int> B;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] > promedio)
        {
            B.push_back(A[i]);
        }
    }
    return B;
}

int ContarMultiplos2Y3(vector<int> A)
{
    int multiplo = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] % 6 == 0)
        {
            multiplo++;
        }
    }
    return multiplo;
}

vector<int> VectorPor2(vector<int> A)
{
    vector<int> C;
    for (int i = 0; i < A.size(); i++)
    {
        int e = A[i] * 2;
        C.push_back(e);
    }
    return C;
}

void MostrarVector(vector<int> A)
{
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << "/";
    }
    cout << endl;
}
