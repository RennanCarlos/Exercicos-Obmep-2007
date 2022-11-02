using System;

class Q1A{
	public static bool Verificar(int num){
		string n = Convert.ToString(num);
		bool tt = true;
		
		for(int i = 0; i < n.Length;i++){
			if(n[i] == '0' || n[i] == '1'){
				
			} else {
				tt = false;
				break;
			}
		}
		
		if(tt) return true;
		else return false;
	}
	
	public static void Main(){
		int i = 9;
		while(true){
			if(Verificar(i)){
				Console.WriteLine("Menor valor encontrado: " + i);
				break;
			}
			i += 9;
		}
		Console.ReadKey();
	}
}