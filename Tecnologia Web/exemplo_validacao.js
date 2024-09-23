function verificar(){
    limpar() ;
    var ok =  true ;
    var n = document.getElementById("txtnome").value ;
    
    if( n.length == 0 )
    {
        ok = false ;
        document.querySelector("#erronome").textContent = "Preencha o campo nome" ;
        document.getElementById("txtnome").style.backgroundColor = "yellow" ;
    }
var i = document.getElementById("txtidade").value ;
    if (i.length == 0  || isNaN( i ) ) {
        ok = false ;
        document.querySelector("#erroidade").textContent = "Preencha corretamente o campo" ;
        document.getElementById("txtidade").style.backgroundColor = "yellow" ;
    }

    var e = document.getElementById("txtemail").value ;
if (e.length == 0  ||  e.indexOf("@") < 0 ) {
        ok = false ;
        document.querySelector("#erroemail").textContent = "Preencha corretamente o campo" ;
        document.getElementById("txtemail").style.backgroundColor = "yellow" ;
    }



    if( ok == true) 
    {
        document.form1.submit() ;
    }
}
function limpar(){
    document.getElementById("txtnome").style.backgroundColor = "white";
    document.getElementById("txtidade").style.backgroundColor = "white";
    document.getElementById("txtemail").style.backgroundColor = "white";
    document.querySelector("#erronome").textContent = "" ;
    document.querySelector("#erroidade").textContent = "" ;
    document.querySelector("#erroemail").textContent = "" ;
}