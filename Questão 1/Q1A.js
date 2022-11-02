function Verificar(num){
	let n = num.toString()
	let tt = true
	
	for(let i = 0; i < n.length;i++){
		if(n[i] == '0' || n[i] == '1'){
			
		} else {
			tt = false
			break
		}
	}
	if(tt) return true
	else return false
}

let numero = 9

while(true){
	if(Verificar(numero)){
		console.log(`Menor numero encotrado: ${numero}`)
		break
	}
	numero += 9
}


