import java.sql.*;

class Database1
{
     public static void main(String arg[]) throws Exception
     {

          Connection cobj = DriverManager.getConnection("select * from student","root","root");

          Statement sobj = cobj.createStatement();

          ResultSet robj = sobj.executeQuery("select * from student");

          while(robj.next())
          {
               System.out.println("RID : "+robj.getInt("RID"));
               System.out.println("Name : "+robj.getString("Name"));
               System.out.println("City : "+robj.getString("City"));
               System.out.println("Marks : "+robj.getInt("Marks"));

          }
     }
}