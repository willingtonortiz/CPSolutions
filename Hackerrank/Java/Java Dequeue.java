    import java.util.*;
    
    public class test {

        private static Scanner scanner = new Scanner(System.in);
        
        public static void main(String[] args) {
            int size = scanner.nextInt(), m = scanner.nextInt(), min = 0;

            Deque<Integer> deque = new LinkedList<>();
            Set<Integer> set = new HashSet<>();

            for(int i = 0; i < size; ++i){
                int input = scanner.nextInt();
                deque.addLast(input);
                set.add(input);

                if(deque.size() == m){
                    min = Math.max(min, set.size());
                    int first = deque.removeFirst();
                    if(!deque.contains(first))
                        set.remove(first);
                }
            }

            System.out.println(min);
        }
    }



