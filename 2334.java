import java.io.IOException;
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        BigInteger num, resultado;
        BigInteger sub = new BigInteger("1");
        BigInteger zero = new BigInteger("0");
        BigInteger menosum = new BigInteger("-1");       
        int compare;
        boolean teste;
        Scanner scan = new Scanner(System.in);
                      
             do{
                num = scan.nextBigInteger();
                compare = num.compareTo(zero);
                teste = num.equals(menosum);            
              if (compare == 0){                
                System.out.printf("%d\n", zero);
                continue;
            }if (teste != true){               
                resultado = num.subtract(sub);
                System.out.printf("%d\n", resultado );  
                continue;
            }
            }while (teste == false);
 
    }
 
}
