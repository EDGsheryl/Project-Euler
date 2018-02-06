import java.math.BigInteger;

public class Main {
    static public void main(String args[]) {
        int n = 1000;
        
        BigInteger num = BigInteger.valueOf(1);
        for (int i = 1; i < n; i++)
            num = num.multiply(BigInteger.valueOf(10));

        int cnt = 3;
        BigInteger q = BigInteger.valueOf(1);
        BigInteger w = BigInteger.valueOf(1);
        BigInteger e = q.add(w);

        while (e.compareTo(num) <= 0) {
            q = w;
            w = e;
            e = q.add(w);
            cnt++;
        }
        System.out.println(cnt);
    }
}

// O(N) 
// when we use matrix and fast-power O(2^3*log(N)^2)
