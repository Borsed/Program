//Create file name
import java.util.*;
import java.io.*;

class Program402
{
    public static void main(String ar[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name : ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);

        fobj.createNewFile();
    }
}