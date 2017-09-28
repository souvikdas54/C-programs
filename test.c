import java.io.*;
import java.util.*;


public class TestClass {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter wr = new PrintWriter(System.out);
        int T = Integer.parseInt(br.readLine().trim());
        for(int t_i=0; t_i<T; t_i++)
        {
            String[] in=br.readLine().split(" ");
            long a = Long.parseLong(in[0]);
            long b = Long.parseLong(in[1]);
            long n = Long.parseLong(in[2]);

            long out_ = solve(a, b, n);
            System.out.println(out_);
            System.out.println("");
         }

         wr.close();
         br.close();
    }
    static long solve(long a, long b, long n){
        // Write your code here
    
    }
}
}
