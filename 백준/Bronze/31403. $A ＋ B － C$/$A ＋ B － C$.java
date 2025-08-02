import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
             BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out))) {

            int a = Integer.parseInt(br.readLine());
            int b = Integer.parseInt(br.readLine());
            int c = Integer.parseInt(br.readLine());

            int result1 = a + b - c;
            int result2 = Integer.parseInt(a + "" + b) - c;

            bw.write(String.valueOf(result1));
            bw.newLine();
            bw.write(String.valueOf(result2));
            bw.flush();
        }
    }
}