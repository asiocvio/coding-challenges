import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            Queue<Pair<Integer, Integer>> queue = new LinkedList<>();
            PriorityQueue<Integer> priorityQueue = new PriorityQueue<>((o1, o2) -> o2 - o1);

            int n = sc.nextInt();
            int m = sc.nextInt();

            for (int i = 0; i < n; i++) {
                int importance = sc.nextInt();
                queue.add(new Pair<>(i, importance));
                priorityQueue.add(importance);
            }

            int count = 0;
            while (!queue.isEmpty()) {
                int index = queue.peek().first;
                int importance = queue.peek().second;
                queue.remove();

                if (priorityQueue.peek() == importance) {
                    priorityQueue.remove();
                    count++;

                    if (index == m) {
                        System.out.println(count);
                        break;
                    }
                } else {
                    queue.add(new Pair<>(index, importance));
                }
            }
        }
    }
}

class Pair<T, U> {
    public T first;
    public U second;

    public Pair(T first, U second) {
        this.first = first;
        this.second = second;
    }

    @Override
    public String toString() {
        return "{" + first + ", " + second + "}";
    }
}
