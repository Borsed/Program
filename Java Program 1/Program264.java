//Accept n number and return and perform addition of n number
import java.util.*;

class Program264
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCnt = 0;
        
        System.out.println("Enter size of array");
        int iSize = sobj.nextInt();

        int Arr[] = new int [iSize];

        System.out.println("Enter the element of array");
        for(iCnt = 0; iCnt <Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        int iSum = 0;
        for(int i = 0; i < Arr.length; i++)
        {
            iSum = iSum + Arr[i];
        }
        System.out.println("Addition is : "+iSum);
    }
}