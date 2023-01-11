#include <stdio.h>
// Número de vértices es un número divisible exactamente por el grado deseado, de lo contrario el grafo no sera regular.
#define Vertices_Adyacentes 4
#define Max_Vertice 5

int main()
{
    int Vertices, grado;
    do
    {
        printf("Ingrese el la cantidad de Vertices: ");
        scanf("%d", &Vertices);
    } while (Vertices < 0);

    printf("Ingrese el grado: ");
    scanf("%d", &grado);

    // Crea la Matriz de Adyacencia
    int grafo[Vertices][Vertices];

    // Initialize the grafo with no edges
    for (int i = 0; i < Vertices; i++)
    {
        for (int j = 0; j < Vertices; j++)
        {
            grafo[i][j] = 0;
        }
    }

    // Add edges to the grafo
    for (int i = 0; i < Vertices; i++)
    {
        for (int j = 1; j <= grado; j++)
        {
            int auxiliar = (i + j) % Vertices;
            grafo[i][auxiliar] = 1;
            grafo[auxiliar][i] = 1;
        }
    }

    // Contador para el total de bordes
    int contador = 0;
    int grados_Grafo[Max_Vertice] = {0};
    for (int i = 0; i < Vertices; i++)
    {
        for (int j = 1; j <= grado; j++)
        {
            if (grafo[i][j] == 1)
            {
                contador++;
                grados_Grafo[i]++;
            }
        }
    }

    int vertice = 2;
    int secuencia[Vertices_Adyacentes] = {1, 3};
    int bandera = 1;
    for (int i = 0; i < Vertices_Adyacentes; i++)
    {
        if (grafo[vertice][secuencia[i]] != 1)
        {
            bandera = 0;
            break;
        }
    }

    // a) Ingresar y desplegar por pantalla la matriz de adyacencia que lo representa.
    printf("a) \n");
    for (int i = 0; i < Vertices; i++)
    {
        for (int j = 0; j < Vertices; j++)
        {
            printf("%d ", grafo[i][j]);
        }
        printf("\n");
    }

    // b) Desplegar por pantalla una tabla de grados para los vértices de G.
    printf("b) \n");
    for (int i = 0; i < Vertices; i++)
    {
        printf("    El Vertice %d tiene grado %d\n", i, grados_Grafo[i]);
    }

    /* c) Determinar si una secuencia de m >0 nodos o vértices, corresponde o no a los m nodos adyacentes a un vértice
    Vi, indicando la respuesta por pantalla
    */
    printf("c) \n");
    if (bandera)
    {
        printf("    La secuencia corresponde a los vértices adyacentes al vértice %d\n", vertice);
    }
    else
    {
        printf("    La secuencia no corresponde a los vértices adyacentes al vértice %d\n", vertice);
    }

    // d) Indicar si el grafo es k-regular o no.
    printf("d) \n");
    if (Vertices % grado == 0)
    {
        printf("    El grafo es K-Regular\n");
    }
    else
    {
        printf("    El grafo no es K-Regular\n");
    }

    // e) Determinar, dada una secuencia de m>0 vértices Ci, si Ci es un ciclo de G.
    printf("e) \n");
    // f) Determinar e indicar por pantalla si G es un grafo completo o no.
    int Posibles_Bordes = (Vertices * (Vertices - 1)) / 2;
    printf("f) \n");
    if (contador == Posibles_Bordes)
    {
        printf("    El grafo es completo\n");
    }
    else
    {
        printf("    El grafo no es completo\n");
    }

    return 0;
}

/*
Para determinar si una secuencia de m vértices Ci es un ciclo en un grafo G(V,E), se pueden seguir estos pasos:

Verificar que el primer y último vértice de la secuencia sean iguales.
Verificar que cada par consecutivo de vértices en la secuencia tenga un arco entre ellos en el grafo G.
Verificar que no haya ningún arco que no está dentro de la secuencia.
Si todas las condiciones anteriores son verdaderas, entonces la secuencia de vértices es un ciclo en G.
Aquí te dejo un ejemplo de código en C que ilustra cómo determinar si una secuencia de vértices es un ciclo en un grafo utilizando una matriz de adyacencia:

#include <stdio.h>

#define MAX_VERTICES 5

int main() {
    // Create the adjacency matrix
    int graph[MAX_VERTICES][MAX_VERTICES];

    // fill the matrix with edges
    //....

    // Sequence of vertices
    int sequence[4] = {0, 1, 2, 0};

    // First and last vertex are not the same
    if (sequence[0] != sequence[3]) {
        printf("The sequence is not a cycle\n");
        return 0;
    }

    // Check that each pair of vertices in the sequence has an edge between them
    int is_cycle = 1;
    for (int i = 0; i < 3; i++) {
        if (graph[sequence[i]][sequence[i+1]] != 1) {
            is_cycle = 0;
            break;
        }
    }

    //Check that no edge not in the sequence
    for(int i = 0; i < MAX_VERTICES; i++) {
        for (int j = 0; j < MAX_VERTICES; j++) {
            if (graph[i][j] == 1) {
                int found = 0;
                for (int k = 0; k < 4; k++) {
                    if (i == sequence[k] && j == sequence[k+1]){
                        found = 1;
                        break;
                    }
                }
                if(!found){
                    is_cycle = 0;
                    break;
                }
            }
        }
    }

    if (is_cycle) {
        printf("The sequence is a cycle\n");
    } else {
        printf("The sequence is not a cycle\n");
    }

    return 0;
}




*/