import java.util.*;

class ll{
public static void nextperm(String str,String osf,boolean bool)
{
if(str.length()==0)
{	System.out.println(osf);
     return ;
 } 

for(int i=0;i<str.length();i++)
{
   if(bool)
   {
       char ch=charAt(i);
       String ros=str.substring(0,i)+str.substring(i+1);
       nextperm(ros,osf_ch,bool);

   }
   else
   {
   	if(str.charAt(i)>=str.charAt(0)){
   		char ch=str.charAt(i);
   		String ros=str.substring(0,i)+str.substring(i+1);
   		nextperm(ros,osf+ch,bool|| ch>str.charAt(0));
   	}
   }

}

}
public static void main(String[] args) {
	nextperm("bcad","",false);
}

}
