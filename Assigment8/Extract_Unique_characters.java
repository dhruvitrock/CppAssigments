import java.util.*;

public class Extract_Unique_characters {

	public static String uniqueChar(String str){
		/* Your class should be named Solution
		 * Don't write main().
		 * Don't read input, it is passed as function argument.
		 * Return output and don't print it.
	 	 * Taking input and printing output is handled automatically.
		*/
        HashMap<Character,Boolean> set1=new  HashMap<Character,Boolean>();
        
        String  ans="";
        
        int n=str.length();
        
        for(int i=0;i<n;i++){
            
            if(set1.containsKey(str.charAt(i))){
                
                continue;
                
            }
            
            set1.put(str.charAt(i),true);
            ans=ans+str.charAt(i);
            
        }
        
        return ans;
        
        

	}
}