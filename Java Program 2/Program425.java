// split(string (scanf)) count no of words
import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;  

class Program425
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
       
        System.out.println("Enter the string : ");

        String str = sobj.nextLine();

        String Arr[] = str.split(" ");

        System.out.println("Number of words are : "+Arr.length);
           
    } 
}    
//sir CVFS project made write command made Incorrect parameter Error yetoy 