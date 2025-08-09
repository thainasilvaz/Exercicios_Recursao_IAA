package exercicios;

public class BuscaBinaria {

    private static int[] listaOrdenada = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    public static int buscaBinariar(int n) {
        return buscaBinariar(n, 0, listaOrdenada.length - 1);
    }


    private static int buscaBinariar(int n, int inicio, int fim) {
        if (inicio > fim) {
            return -1; // não encontrado
        }

        int meio = (inicio + fim) / 2;

        if (listaOrdenada[meio] == n) {
            return meio;
        } else if (n < listaOrdenada[meio]) {
            return buscaBinariar(n, inicio, meio - 1);
        } else {
            return buscaBinariar(n, meio + 1, fim);
        }
    }
}