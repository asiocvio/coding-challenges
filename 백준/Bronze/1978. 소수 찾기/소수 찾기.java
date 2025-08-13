import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        int count = 0;
        for (int i = 0; i < t; i++) {
            int number = sc.nextInt();
            if (isPrime(number))
                count++;
        }

        System.out.println(count);
    }

    public static boolean isPrime(int n) {

        if (n < 2)
            return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }

        return true;
    }
}