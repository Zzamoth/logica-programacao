#include <iostream>

using namespace std;

int acharMaior(int tab[], int *pos, int n)
{
    *pos = 0;
    for (int i = 1; i < n; i++)
        if (tab[i] > tab[*pos])
            *pos = i;

    return tab[*pos];
}

int main()
{
    int V[] = {9, 10, -2, 30, 27, 37, 9, 7, 40, -90};
    int posicao;

    cout << " O maior vale e " << acharMaior(V, &posicao, 10) << endl;
    cout << " Ele se encotra na posicao " << posicao << endl;

    return 0;
}

/*float areaQuadrado(float L, float l)
{
    return L * l;
}

float areaTriangulo(float h, float b)
{
    return b * h / 2;
}

int main()
{

    float N1, N2;
    cin >> N1 >> N2;

    cout << areaTriangulo(N1, N2);
    cout << areaQuadrado(N1, N2);
    return 0;
}*/