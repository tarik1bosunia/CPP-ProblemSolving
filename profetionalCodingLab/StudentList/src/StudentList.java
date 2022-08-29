import java.io.*;
import java.text.*;
import java.util.*;
public class StudentList {
    
    public static String[] getStudentNames() throws IOException {

            BufferedReader bufferedReader = new BufferedReader(
                                                new InputStreamReader(
                                                    new FileInputStream("students.txt")));
            String NamesLine = bufferedReader.readLine();
           String[] studentNames = NamesLine.split(", ");

        return studentNames;
    }
    
    
    public static void main(String[] args) {

//		Check arguments
        if(args[0].equals("a")) {
            System.out.println("Loading data ...");


            try {
                String[] studentNames = getStudentNames();
                for(String studentName : studentNames) {
                    System.out.println(studentName);
                }

            } catch (IOException e) {
                throw new RuntimeException(e);
            }


            
            System.out.println("Data Loaded.");
        }
        else if(args[0].equals("r"))
        {
            System.out.println("Loading data ...");
            try {

                String studentNames[] = getStudentNames();

                int numberOfStudents = studentNames.length;

                Random random = new Random();
                int randomIndex = random.nextInt(numberOfStudents);

                System.out.println(studentNames[randomIndex]);
            } catch (Exception e){}
            System.out.println("Data Loaded.");
        }
        else if(args[0].contains("+")){
            System.out.println("Loading data ...");
            try {
                BufferedWriter bufferedWriter = new BufferedWriter(
                        new FileWriter("students.txt", true));

                Date date = new Date();
                String dateFormatString = "dd/mm/yyyy-hh:mm:ss a";
                DateFormat dateFormat = new SimpleDateFormat(dateFormatString);
                String formatedDate = dateFormat.format(date);
                String new_student_name = "tata"; // need to work with input from terminal

                bufferedWriter.write(", " + new_student_name);

                System.out.println("List last updated on " + formatedDate);
                bufferedWriter.close();
            } catch (Exception e){}

            System.out.println("Data Loaded.");
        }
        else if(args[0].contains("?"))
        {
            System.out.println("Loading data ...");
            try {
                String findingStudentName = "tata";

                String studentNames[] = getStudentNames();

                for(String student : studentNames){
                    if(student == findingStudentName){
                        System.out.println("We found the the student name in the list!");

                        break; // return
                    }
                }

                //  System.out.println("We didn't find the student name in the list!");

            } catch (Exception e){}

            System.out.println("Data Loaded.");
        }
        else if(args[0].contains("c"))
        {
            System.out.println("Loading data ...");
            try {

                String studentNames[] = getStudentNames();
                int word_count = 0;

                for(String student : studentNames){
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
