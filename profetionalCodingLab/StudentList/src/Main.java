import java.io.*;
import java.text.*;
import java.util.*;

class StudentList {

    public static String[] getStudentNames() throws IOException {

        return new BufferedReader(
                new InputStreamReader(
                        new FileInputStream(Constants.StudentList)
                )
        ).readLine().split(", ");
    }

    public void showAllStudents() throws IOException {

        for (String studentName : getStudentNames()) {
            System.out.println(studentName);
        }
    }

    public void showRandomStudent() throws IOException {

            String studentNames[] = getStudentNames();

            int numberOfStudents = studentNames.length;
            int randomIndex = new Random().nextInt(numberOfStudents);

            System.out.println(studentNames[randomIndex]);
    }

    public void addANewStudent(String[] args) throws IOException{

            BufferedWriter bufferedWriter = new BufferedWriter(
                    new FileWriter(Constants.StudentList, true));

            String formatedDate = new SimpleDateFormat(Constants.dateFormatString).format( new Date());


            String new_student_name = "";

            for (String arg : args) {
                if (arg != args[0]) {
                    new_student_name = new_student_name + " " + arg;
                }
            }
            new_student_name = new_student_name.trim();

            bufferedWriter.write(", " + new_student_name);

            System.out.println("List last updated on " + formatedDate);
            bufferedWriter.close();

    }

    void searchAStudent(String[] args)throws IOException {

            // get name from CMD
            String findingStudentName = "";

            for (String arg : args) {
                if (arg != args[0]) {
                    findingStudentName = findingStudentName + " " + arg;
                }
            }
            findingStudentName = findingStudentName.trim();


            for (String student : getStudentNames()) {
                if (student.equals(findingStudentName)) {
                    System.out.println(Constants.studentFindingSuccessMessage);
                    return;
                }
            }

            System.out.println(Constants.studentFindingFailureMessage);

    }

    public void wordCount()throws IOException {

            int word_count = 0;

            for (String student : getStudentNames()) {
                String studentName[] = student.split(" ");

                word_count = word_count + studentName.length;
            }

            System.out.println(word_count + " word(s) found!");
    }

}

public class Main {
    public static void main(String[] args) {
        StudentList studentList = new StudentList();

        System.out.println(Constants.loadingMessage);

        try {
            switch (args[0]) {

                case Constants.ShowAllStudentsName:
                    studentList.showAllStudents();
                    break;
                case Constants.ShowRandomStudentName:
                    studentList.showRandomStudent();
                    break;
                case Constants.AddStudentName:
                    studentList.addANewStudent(args);
                    break;
                case Constants.StudentSearch:
                    studentList.searchAStudent(args);
                    break;
                case Constants.WordCount:
                    studentList.wordCount();
                    break;
                case Constants.showGuide:
                    System.out.println(Constants.GUIDE);
                    break;

                default:
                    System.out.println(Constants.wrongInputWarning);
                    System.out.println(Constants.GUIDE);
            }
        }catch (IOException exception){
            System.out.println(exception);
        }

        System.out.println(Constants.loadingSuccessMessage);

    }
}
