import java.util.*;

class Student implements Comparable<Student>{
	private int id;
	private String fname;
	private double cgpa;
	public Student(int id, String fname, double cgpa) {
		super();
		this.id = id;
		this.fname = fname;
		this.cgpa = cgpa;
	}
	public int getId() {
		return id;
	}
	public String getFname() {
		return fname;
	}
	public double getCgpa() {
		return cgpa;
	}

    public int compareTo(Student o){
        if(this.cgpa != o.cgpa) {
            if(this.cgpa < o.cgpa) return 1;
            else return -1;
        }
        else if(!this.fname.equals(o.fname)){
            return this.fname.compareTo(o.fname);
        }
        else {
            return (o.id - this.id);
        }
    }
}

//Complete the code
public class Solution
{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int testCases = Integer.parseInt(in.nextLine());
		
		List<Student> studentList = new ArrayList<Student>();
		while(testCases>0){
			int id = in.nextInt();
			String fname = in.next();
			double cgpa = in.nextDouble();
			
			Student st = new Student(id, fname, cgpa);
			studentList.add(st);
			
			testCases--;
		}

        Collections.sort(studentList);

      	for(Student st: studentList){
			System.out.println(st.getFname());
		}
	}
}



