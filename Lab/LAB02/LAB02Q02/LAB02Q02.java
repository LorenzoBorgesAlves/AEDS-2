import java.util.*;

	class LAB02Q02 {
       public static void sequenciaEspelho(int inicio, int fim){
	
            for(int i = inicio; i <= fim; i++){
                MyIO.print(i);
            }
            for(int i = fim; i >= inicio; i--){
                MyIO.print(i);                	
		    }
            MyIO.print("\n");
       }
		public static void main (String [] args){

		    for(int i = 0; i < 3; i++){
                int inicio = MyIO.readInt();
		        int fim = MyIO.readInt();
			    sequenciaEspelho(inicio,fim);
		    }
	    }
    }
