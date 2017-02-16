import java.util.Arrays;
import java.util.Scanner;
 
 
public class Main {
    public static void main (String[] args){ 
         
        int[] entrada = new int[3];
        int[] copia = new int[3];
         
         
        Scanner sc = new Scanner(System.in);
        for ( int indice = 0; indice < entrada.length; indice++){
        entrada[indice] = sc.nextInt();
        copia[indice] = entrada[indice];
        }
         
        Arrays.sort(entrada);
         
        for ( int indice = 0; indice < entrada.length; indice++){
        System.out.printf("%d\n", entrada[indice]);
        }
         
        System.out.printf("\n");
         
        for ( int indice2 = 0; indice2 < entrada.length; indice2++){
            System.out.printf("%d\n", copia[indice2]);
        }
         
        sc.close();
    }
 
}
