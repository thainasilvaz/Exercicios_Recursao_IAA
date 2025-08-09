package exercicios;

public class Fatorial {
	
public static int fatorialR(int n) {
		
		if (n == 0){
			return 1;
		}
		else {
			return n*fatorialR(n-1);
		}
		
	}

}
