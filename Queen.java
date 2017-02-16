import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args){
 
        int inicial_x, inicial_y, final_x, final_y;
        int deltax, deltay, movimentos=0;
        //int contador;
 
        Scanner ler = new Scanner(System.in);
 
        do {
            inicial_x = ler.nextInt();
            inicial_y = ler.nextInt();
            final_x = ler.nextInt();
            final_y = ler.nextInt();
 
            if ((inicial_x == 0) && (inicial_y == 0) && (final_x == 0) && (final_y == 0))
                return;
 
            if(inicial_x < 1 || inicial_x > 8)
                return;
 
            if(inicial_y < 1 || inicial_y > 8)
                return;
 
            if(final_x < 1 || final_x > 8)
                return;
 
            if(final_y < 1 || final_y > 8)
                return;
 
 
            deltax = Math.abs(inicial_x - final_x);
            deltay = Math.abs(inicial_y - final_y);
 
            if (deltax != deltay)
                movimentos = 2;
 
            if(deltax == deltay)
                movimentos = 1;
 
            if (deltax == 0)
                movimentos = 1;
 
            if (deltay == 0)
                movimentos = 1;
 
            if ((deltax == 0) &&  (deltay == 0))
                movimentos = 0;
 
 
            System.out.println(movimentos);
             
        } while(true);
 
 
    }
}
