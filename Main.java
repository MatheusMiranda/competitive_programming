import java.math.BigInteger;
import java.util.Scanner;

public class Main{

  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    BigInteger tempoAcumulado = BigInteger.valueOf(0);
    BigInteger tempo = BigInteger.valueOf(0);
    BigInteger somaAnterior = BigInteger.valueOf(0);
    int numEpi;
    int temporadas = sc.nextInt();
    int duracao = sc.nextInt();

    while(temporadas != -1 && duracao != -1){

      for (int i = 0; i < temporadas; ++i)
      {

        numEpi = sc.nextInt();
        tempo = BigInteger.valueOf(numEpi * duracao);
        tempo = tempo.add(somaAnterior);
        somaAnterior = tempo;
        tempoAcumulado = tempoAcumulado.add((tempo));

      }

      System.out.println(tempoAcumulado);
      tempoAcumulado = BigInteger.valueOf(0);
      somaAnterior = BigInteger.valueOf(0);
      temporadas = sc.nextInt();
      duracao = sc.nextInt();

    }

  }

}
