package exercicios;

public class Main {

	public static void main(String[] args) {
	
		int n;
		
		int resultado_fatorial = Fatorial.fatorialR(n = 5);
		System.out.println(n + "! é igual a " + resultado_fatorial);
		
		int resultado_fibonacci = Fibonacci.fibonacciR(n = 7);
		System.out.println("O valor correspondente à posição " + n + " na sequência de fibonacci é " + resultado_fibonacci);
		
		int resultado_buscaB = BuscaBinaria.buscaBinariar(n = 3);
		if (resultado_buscaB != -1) {
            System.out.println("Número " + n + " encontrado no índice " + resultado_buscaB);
        } else {
            System.out.println("Número não encontrado");
        }

	}

}
