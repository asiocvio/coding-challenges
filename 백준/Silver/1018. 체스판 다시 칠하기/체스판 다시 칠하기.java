import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] nm = br.readLine().split(" ");
        int n = Integer.parseInt(nm[0]);
        int m = Integer.parseInt(nm[1]);

        char[][] board = new char[n][m];
        for (int i = 0; i < n; i++) {
            board[i] = br.readLine().toCharArray();
        }

        int minPaint = 0x7FFFFFFF;

        for (int i = 0; i <= n - 8; i++) {
            for (int j = 0; j <= m - 8; j++) {
                minPaint = Math.min(minPaint, countRepaint(board, i, j));
            }
        }

        System.out.println(minPaint);
    }

    // 주어진 8x8 영역에서 다시 칠해야 하는 최소 칸 수 계산
    private static int countRepaint(char[][] board, int row, int col) {
        int repaintStartWhite = 0; // (row,col) 흰색 시작
        int repaintStartBlack = 0; // (row,col) 검은색 시작

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                char expectedColor = ((i + j) % 2 == 0) ? 'W' : 'B';

                if (board[row + i][col + j] != expectedColor) {
                    repaintStartWhite++;

                } else {
                    repaintStartBlack++;
                }
            }
        }

        // 흰색 시작, 검은색 시작 최소 반환
        return Math.min(repaintStartWhite, repaintStartBlack);
    }
}