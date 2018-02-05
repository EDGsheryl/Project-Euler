import java.math.BigInteger;

public class Main {
    static public void main(String args[]) {
        BigInteger num = BigInteger.valueOf(1);
        for (int i = 1; i <= 100; i++)
            num = num.multiply(BigInteger.valueOf(i));
        BigInteger ans = BigInteger.valueOf(0);
        while (num.compareTo(BigInteger.valueOf(0)) > 0) {
            ans = ans.add(num.mod(BigInteger.valueOf(10)));
            num = num.divide(BigInteger.valueOf(10));
        }
        System.out.println(ans);
    }
}
