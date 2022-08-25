import java.io.*;
import java.text.*;
import java.util.*;
class StudentList {
    public static void main(String[] args) {

//		Check arguments
        if(args[0].equals("a")) {
            System.out.println("Loading data ...");
            try {
                BufferedReader s = new BufferedReader(
                                        new InputStreamReader(
                                            new FileInputStream("students.txt")));
                String r = s.readLine();
                String i[] = r.split(", ");
                for(String j : i) { System.out.println(j); }
            } catch (Exception e){}
            System.out.println("Data Loaded.");
        }
        else if(args[0].equals("r"))
        {
            System.out.println("Loading data ...");
            try {
                BufferedReader s = new BufferedReader(
                        new InputStreamReader(
                                new FileInputStream("students.txt")));
                String r = s.readLine();
                String i[] = r.split(", ");

                int numberOfStudents = i.length;

                Random x = new Random();
                int y = x.nextInt(numberOfStudents);

                System.out.println(i[y]);
            } catch (Exception e){}
            System.out.println("Data Loaded.");
        }
        else if(args[0].contains("+")){
            System.out.println("Loading data ...");
            try {
                BufferedWriter s = new BufferedWriter(
                        new FileWriter("students.txt", true));

                Date d = new Date();
                String df = "dd/mm/yyyy-hh:mm:ss a";
                DateFormat dateFormat = new SimpleDateFormat(df);
                String fd= dateFormat.format(d);
                String new_student_name = "tata";

                s.write(", " + new_student_name);
                System.out.println("List last updated on " + fd);
                s.close();
            } catch (Exception e){}

            System.out.println("Data Loaded.");
        }
        else if(args[0].contains("?"))
        {
            System.out.println("Loading data ...");
            try {
                BufferedReader s = new BufferedReader(
                        new InputStreamReader(
                                new FileInputStream("students.txt")));
                String r = s.readLine();
                String i[] = r.split(", ");
                boolean done = false;
                String t = args[0].substring(1);
                for(int idx = 0; idx<i.length && !done; idx++) {
                    if(i[idx].equals(t)) {
                        System.out.println("We found it!");
                        done=true;
                    }
                }
            } catch (Exception e){}
            System.out.println("Data Loaded.");
        }
        else if(args[0].contains("c"))
        {
            System.out.println("Loading data ...");
            try {
                BufferedReader s = new BufferedReader(
                        new InputStreamReader(
                                new FileInputStream("students.txt")));
                String r = s.readLine();
                String i[] = r.split(", ");
                int word_count = 0;

                for(String student : i){
                    String studentName[] = student.split(" ");

                    word_count = word_count + studentName.length;
                }

                System.out.println(word_count +" word(s) found!");
            } catch (Exception e){
                e.printStackTrace();
            }

            System.out.println("Data Loaded.");
        }
    }
}

//public class Main {
//    public static void main(String[] args) {
//        StudentList studentList = new StudentList();
//
//    }
//}
