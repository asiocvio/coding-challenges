import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String s = br.readLine();
        int index = Integer.parseInt(br.readLine()) - 1;

        bw.write(s, index, 1);
        bw.flush();
    }

}