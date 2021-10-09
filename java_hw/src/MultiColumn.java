import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class MultiColumn {

    public static void main(String[] args) throws IOException {

        String fileName = "CSS222 MBTI - Sheet1.csv";
        BufferedReader CSVFile = new BufferedReader(new FileReader(fileName));
        Scanner scanType = new Scanner(System.in);
        String dataRow = CSVFile.readLine();
        List<String> list = new ArrayList<>();
        String[][] Dataset;

        while (dataRow != null) {
            dataRow.split(",");
            list.add(dataRow);
            dataRow = CSVFile.readLine();

            // read next line of data
        }

        CSVFile.close();
        Object[] test = list.toArray();
        String[] stringArray = Arrays.copyOf(test, test.length, String[].class);

        Dataset = new String[test.length][];

        for (int i = 0; i < test.length; i++) {
            Dataset[i] = stringArray[i].split(",");
        }

        System.out.println("================= Before Sorting ========================");
        for (int i = 1; i < test.length; i++) {
            System.out.print("id :" + Dataset[i][0].substring(8, 11) + "\t\t");
            for (int j = 3; j < 11; j++) {
                System.out.print("\t" + (int) Float.parseFloat(Dataset[i][j]));
            }
            System.out.println();
        }
        System.out.println("==========================================================\n");

        System.out.println("type : Ne, Ni, Te, Ti, Se, Si, Fe, Fi");
        System.out.print("Input you want to type sort lv.1 : ");
        String buff1 = scanType.nextLine();
        System.out.println("-------------------------  Sorting level 1 -------------------------");

        insertion_sort(Dataset, returnNum(buff1));
        for (int i = 1; i < test.length; i++) {
            System.out.print("id :" + Dataset[i][0].substring(8, 11) + "\t\t");
            for (int j = 3; j < 11; j++) {
                System.out.print("\t" + (int) Float.parseFloat(Dataset[i][j]));
            }
            System.out.println();
        }

        System.out.println("==========================================================\n");

        System.out.println("type : Ne, Ni, Te, Ti, Se, Si, Fe, Fi");
        System.out.print("Input you want to type sort lv.2 : ");
        String buff2 = scanType.nextLine();
        System.out.println("-------------------------  Sorting level 2 -------------------------");

        multiple(Dataset, returnNum(buff1), returnNum(buff2));
        for (int i = 1; i < test.length; i++) {
            System.out.print("id :" + Dataset[i][0].substring(8, 11) + "\t\t");
            for (int j = 3; j < 11; j++) {
                System.out.print("\t" + (int) Float.parseFloat(Dataset[i][j]));
            }
            System.out.println();
        }

        System.out.println("==========================================================\n");


    }


    public static void insertion_sort(String[][] Dataset, int type) throws IOException {
        for (int i = 2; i < Dataset.length; i++) {
            int curr = (int) Float.parseFloat(Dataset[i][type]);
            String[] currArray = Dataset[i];
            int j = i - 1;
            while (j >= 1 && curr < (int) Float.parseFloat(Dataset[j][type])) {
                Dataset[j + 1] = Dataset[j];
                Dataset[j] = currArray;
                j -= 1;
            }
        }
    }

    public static void multiple(String[][] Dataset, int prev, int secd) {
        for (int i = 2; i < Dataset.length; i++) {
            String[] currArray = Dataset[i];
            int j = i - 1;

            while (j >= 0 && (int) Double.parseDouble(Dataset[i][prev]) == (int) Double.parseDouble(Dataset[i][secd])) {
                if ((int) Double.parseDouble(Dataset[i][secd]) < (int) Double.parseDouble(Dataset[j][secd])) {
                    Dataset[j + 1] = Dataset[j];
                    Dataset[j] = currArray;
                    i = j;
                    j = -i;
                } else {
                    break;
                }

            }

        }

    }

    private static int returnNum(String type) {
        if (type.equals("Ne")) {
            return 3;
        } else if (type.equals("Ni")) {
            return 4;
        } else if (type.equals("Te")) {
            return 5;
        } else if (type.equals("Ti")) {
            return 6;
        } else if (type.equals("Se")) {
            return 7;
        } else if (type.equals("Si")) {
            return 8;
        } else if (type.equals("Fe")) {
            return 9;
        } else if (type.equals("Fi")) {
            return 10;
        } else {
            return 3;
        }
    }


}
