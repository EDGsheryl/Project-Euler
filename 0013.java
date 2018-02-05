import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    static public void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        BigInteger ans = BigInteger.valueOf(0);
        while (sc.hasNext()) {
            BigInteger x = sc.nextBigInteger();
            ans = ans.add(x);
        }
        BigInteger cmp = BigInteger.valueOf(1);
        for (int i = 1; i <= 10; i++) cmp = cmp.multiply(BigInteger.valueOf(10));
        while (ans.compareTo(cmp) > 0) ans = ans.divide(BigInteger.valueOf(10));
        System.out.println(ans);
    }
}

//O(N)
