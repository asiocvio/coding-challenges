import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        br.readLine();

        int sum = 0;

        for (byte value : br.readLine().getBytes()) {
            sum += (value - '0');
        }

        bw.write(String.valueOf(sum));
        bw.flush();
    }

}