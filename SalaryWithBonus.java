import java.util.Scanner;
import java.text.DecimalFormat;
import java.lang.String;

public class Main {
	private static String nome;
	public static void main (String[] args){
		
		double salario, vendas, comissao, total;
	    
	    Scanner sc = new Scanner(System.in);
	    
		nome = sc.nextLine();
	    salario = sc.nextDouble();
		vendas = sc.nextDouble();
		comissao = 0.15 * vendas;
		total = salario + comissao;
		
		DecimalFormat f = new DecimalFormat("0.00");
		System.out.println("TOTAL = R$ " + f.format(total));
		sc.close();
	}
	public static String getNome() {
		return nome;
	}
	public static void setNome(String nome) {
		Main.nome = nome;
	}
}
