import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);

        int m = sc.nextInt();
        int n = sc.nextInt();

        boolean[] isPrime = new boolean[n + 1];

        for (int i = 2; i <= n; i++)
        {
            isPrime[i] = true;
        }

        for (int p = 2; p * p <= n; p++)
        {
            if (isPrime[p])
            {
                for (int i = p * p; i <= n; i += p)
                {
                    isPrime[i] = false;
                }
            }
        }

        for (int num = m; num <= n; num++)
        {
            if (isPrime[num])
            {
                System.out.println(num);
            }
        }
    }
}