import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.PriorityQueue;

/*
 * Create the Student and Priorities classes here.
 */
class Student implements Comparable<Student>{
    public int id;
    public String name;
    public double cgpa;

    public Student(int id, String name, double cgpa){
        this.id = id;
        this.name = name;
        this.cgpa = cgpa;
    }

    public int getID(){
        return this.id;
    }

    public String getName(){
        return this.name;
    }

    public double getCGPA(){
        return this.cgpa;
    }


    @Override
    public int compareTo(Student e2) {
        if(this.cgpa != e2.cgpa){
            if(this.cgpa > e2.cgpa) return -1;
            else return 1;
        }
        else if(!this.name.equals(e2.name)){
            return this.name.compareTo(e2.name);
            // return e2.name.compareTo(this.name);
        }
        else{
            return this.id - e2.id;
        }
    }
}

class Priorities{

    List<Student> getStudents(List<String> events){
        PriorityQueue<Student> pq = new PriorityQueue<Student>();
        List<Student> resp = new ArrayList<Student>();

        for(String e : events){
            String[] data = e.split(" ");

            if(data[0].equals("ENTER")){
                pq.add(new Student(
                        Integer.parseInt(data[3]),
                        data[1],
                        Double.parseDouble(data[2])
                ));
            }
            else{
                pq.poll();
            }
        }

        while(!pq.isEmpty()){
            resp.add(pq.remove());
        }

        return resp;
    }
}

/*
21
ENTER Bidhan 3.75 50
ENTER Rijul 3.8 24
ENTER Shafaet 3.7 35
SERVED
SERVED
ENTER Samiha 3.85 36
SERVED
ENTER Ratul 3.9 42
ENTER Tanvir 3.6 46
ENTER Anik 3.95 49
ENTER Nisha 3.95 50
SERVED
SERVED
SERVED
SERVED
SERVED
SERVED
SERVED
SERVED
SERVED
SERVED
*/


public class Solution {
    private final static Scanner scan = new Scanner(System.in);
    private final static Priorities priorities = new Priorities();
    
    public static void main(String[] args) {
        int totalEvents = Integer.parseInt(scan.nextLine());    
        List<String> events = new ArrayList<>();
        
        while (totalEvents-- != 0) {
            String event = scan.nextLine();
            events.add(event);
        }
        
        List<Student> students = priorities.getStudents(events);
        
        if (students.isEmpty()) {
            System.out.println("EMPTY");
        } else {
            for (Student st: students) {
                System.out.println(st.getName());
            }
        }
    }
}