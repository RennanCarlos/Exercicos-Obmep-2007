public class Q1A{
	public static boolean Verificar(int num){
		String n = String.valueOf(num);
		char[] numeros = n.toCharArray();
		boolean tt = true;
		
		for(int i = 0; i < numeros.length;i++){
			if(numeros[i] == '1' || numeros[i] == '0'){
				
			} else {
				tt = false;
				break;
			}
		}
		if(tt) return true;
		else return false;
	}
	
	public static void main(String args[]){
		int i = 9;
		while(true){
			if(Verificar(i)){
				System.out.println("Menor valor encontrado: " + i);
				break;
			}
			i += 9;
		}
	}
}