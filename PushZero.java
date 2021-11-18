import java.util.Scanner;
public class PushZero {
	public static void pushZerosAtEnd(int[] arr) {
	    
        int i=0,j=0;
        
        while(i<arr.length){
            if(arr[i]!=0){
                arr[j]=arr[i];
                j++;
                
            }
            i++;
            
        }
        while(j<arr.length){
            arr[j]=0;
            j++;
            
        }
        
    }
public static void main(String[] args) {
	Scanner sc= new Scanner(System.in);
	int n=sc.nextInt();
	
	int arr[]=new int[n];
	
	for(int i=0;i<n;i++)
	{
		arr[i]=sc.nextInt();
		
	}
	pushZerosAtEnd(arr);
	for(int i=0;i<n;i++)
	{
		System.out.print(arr[i]+" ");
	}
}

}
