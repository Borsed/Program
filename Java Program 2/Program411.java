//accept name of folder and list of program in this folder
import java.io.*;
import java.util.*;

class Program412
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        try
        {
            System.out.println("Enter folder name : ");
            String FolderName = sobj.nextLine();

            File fobj = new File(FolderName);

            if(fobj.exists())
            {
               
            }
            else
            {
                System.out.println("There is no such folder...");
            }
        
        }
        catch(Exception obj)
        {
            System.out.println("Exception occured : "+obj);
        }
    }
}