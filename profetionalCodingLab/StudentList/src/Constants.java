public class Constants {

    public static String StudentList = "students.txt";
    public static final String ShowAllStudentsName = "-a";
    public static final String ShowRandomStudentName = "-r";
    public static final String AddStudentName = "+";
    public static final String WordCount = "-c";
    public static final String StudentSearch = "?";
    public static final String showGuide = "-g";

    public static String loadingMessage = "Loading data ...\n";
    public static String loadingSuccessMessage = "\nData Loaded successfully...";

    public static String dateFormatString = "dd/mm/yyyy-hh:mm:ss a";

    public static String studentFindingSuccessMessage = "We found the the student name in the list!";
    public static String studentFindingFailureMessage = "We didn't find the the student name in the list!";

    public static String wrongInputWarning = "Wrong Input...!";

    public static String GUIDE =

            "java Main \t choose from the option bellow \t then press enter...\n"
                    + "1. Students list                  " + Constants.ShowAllStudentsName              +  "\n"
                    + "2. Choose a random student        " + Constants.ShowRandomStudentName            +  "\n"
                    + "3. See total words in StudentList " + Constants.WordCount                        +  "\n"
                    + "4. Add a student name             " + Constants.AddStudentName +  " StudentName" +  "\n"
                    + "5. Find a student                 " + Constants.StudentSearch                    +  "\n"
                    + "6. See guide                      " + Constants.showGuide                        +  "\n";
}
