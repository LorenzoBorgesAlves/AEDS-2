public class LAB01Q01Aquecimento {

public static boolean verificaFIM(String s){
return s.length() >= 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M';
}

public static int  contaMaiusculas(String s){
	int count = 0;
	for(int i = 0; i < s.length(); i++){
		if(s.charAt(i) >= 'A' && s.charAt(i) <= 'Z'){
			count++;
		}	
	}
	return count;
}
	public static void main(String [] args) {
		String str = MyIO.readString();
        while(!verificaFIM(str)){
            MyIO.println(contaMaiusculas(str));
            str = MyIO.readString();        
        }
	}
}	
