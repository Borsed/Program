// accept string from user and find out cout of small character
import java.util.*;

class MarvellousX
{
    public int SmallCount(String s)
    {
        int iCnt = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if((s.charAt(i) >= 'a') && (s.charAt(i) <= 'z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}
class Program271
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter string : ");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        int iRet = obj.SmallCount(str);

        System.out.println("Number of small case letters are : "+iRet);
        
    }
}