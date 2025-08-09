package exercicios;

public class Fibonacci {
	
	public static int fibonacciR(int indice) {
		
		if (indice == 1){
			return 0;
		}
		else if (indice == 2){
			return 1;
		}
		else {
			return fibonacciR(indice-1) + fibonacciR(indice-2);
		}
	}

}
