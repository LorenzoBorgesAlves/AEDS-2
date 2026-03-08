public class LAB01Q02Aquecimento {

public static boolean verificaFIM(String s){
return s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M';
}
public static int contaMaiusculasRecursivo(String s, int i, int contador){
    
    //caso base:
    if(i > s.length() - 1){
        return contador;
    }
    //metodo recursivo    
        else if(s.charAt(i) >= 'A' && s.charAt(i) <= 'Z'){
            return contaMaiusculasRecursivo(s, i + 1, contador + 1);
        } 
            else {
                return contaMaiusculasRecursivo(s, i + 1, contador);        
            }
}
	public static void main(String [] args) {
		String str = MyIO.readString();
        while(!verificaFIM(str)){
            MyIO.println(contaMaiusculasRecursivo(str, 0, 0));
            str = MyIO.readString();        
        }
	}
}	
