import java.io.BufferedReader;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class brabra {

    public static void main(String[] args) throws Exception {
        String fileName = "CSS222 MBTI - Sheet1.csv";
        BufferedReader CSVFile = new BufferedReader(new FileReader(fileName));
        String dataRow = CSVFile.readLine();
        List<String> list = new ArrayList<>();


            // this gives you a 2-dimensional array of strings
        while (dataRow != null) {
            dataRow.split(",");
            list.add(dataRow);
            dataRow = CSVFile.readLine();

            // read next line of data
        }
        CSVFile.close();

        String[] tokens = new String[40];
        Object[] test = list.toArray();

        String[] stringArray = Arrays.copyOf(test, test.length, String[].class);
        //copies the object array into a String array

        //splits the elements of the array up and stores them into token array
        for (int a = 0; a < test.length; a++) {
            String temp = stringArray[a];
            tokens = temp.split(",");
        }

        //converts these String tokens into ints

        ArrayList<String[]> stdArray = new ArrayList<>();

        for (int a = 0; a < test.length; a++) {
            stdArray.add( ((String) test[a]).split(","));
            System.out.println(stdArray.get(a));
        }

//        for (int a = 0; a < stdArray.size(); a++) {
//            System.out.println(stdArray.get(0));
//        }



    }

}