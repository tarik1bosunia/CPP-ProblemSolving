import java.io.*;
import java.text.*;
import java.util.*;
public class StudentList {
    
    public static String[] getStudentNames() throws IOException {

            BufferedReader bufferedReader = new BufferedReader(
                                                new InputStreamReader(
                                                    new FileInputStream(Constants.StudentList)));
            String NamesLine = bufferedReader.readLine();
           String[] studentNames = NamesLine.split(", ");

        return studentNames;
    }
    
    
    public static void main(String[] args) {

//		Check arguments
        if(args[0].equals(Constants.ShowAllStudentsName)) {
            System.out.println(Constants.loadingMessage);


            try {
                String[] studentNames = getStudentNames();
                for(String studentName : studentNames) {
                    System.out.println(studentName);
                }

            } catch (IOException e) {
                throw new RuntimeException(e);
            }


            
            System.out.println(Constants.loadingSuccessMessage);
        }
        else if(args[0].equals(Constants.ShowRandomStudentName))
        {
            System.out.println(Constants.loadingMessage);
            try {

                String studentNames[] = getStudentNames();

                int numberOfStudents = studentNames.length;

                Random random = new Random();
                int randomIndex = random.nextInt(numberOfStudents);

                System.out.println(studentNames[randomIndex]);
            } catch (Exception e){}
            System.out.println(Constants.loadingSuccessMessage);
        }
        else if(args[0].contains(Constants.AddStudentName)){
            System.out.println(Constants.loadingMessage);
            try {
                BufferedWriter bufferedWriter = new BufferedWriter(
                        new FileWriter(Constants.StudentList, true));

                Date date = new Date();
                DateFormat dateFormat = new SimpleDateFormat(Constants.dateFormatString);
                String formatedDate = dateFormat.format(date);
                String new_student_name = "tata"; // need to work with input from terminal

                bufferedWriter.write(", " + new_student_name);

                System.out.println("List last updated on " + formatedDate);
                bufferedWriter.close();
            } catch (Exception e){}

            System.out.println(Constants.loadingSuccessMessage);
        }
        else if(args[0].contains(Constants.StudentSearch))
        {
            System.out.println(Constants.loadingMessage);
            try {
                String findingStudentName = "tata";

                String studentNames[] = getStudentNames();

                for(String student : studentNames){
                    if(student == findingStudentName){
                        System.out.println(Constants.studentFindingSuccessMessage);

                        break; // return
                    }
                }

               //   System.out.println(Constants.studentFindingFailureMessage);

            } catch (Exception e){}

            System.out.println(Constants.loadingSuccessMessage);
        }
        else if(args[0].contains(Constants.StudentCount))
        {
            System.out.println(Constants.loadingMessage);
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

            System.out.println(Constants.loadingSuccessMessage);
        }
    }
}

//public class Main {
//    public static void main(String[] args) {
//        StudentList studentList = new StudentList();
//
//    }
//}
