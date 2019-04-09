function namecheck(){
var name = document.elementById("name").value;
    if(name.length < 5){
        document.getElementById("namevalid").innerHTML="Name must be 6 characters" ;
        
    }
}