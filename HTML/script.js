function passwordcheck()
{
    var password=document.getElementById("pass").value;
    if(password.length<8)
    {
        document.getElementById("passwordvalid").innerHTML="Password must be 8 Character";
    }
    else 
        document.getElementById("passwordvalid").innerHTML="Valid Password";
}

function $(id)
{
	return document.getElementById("id");
	}

 function checkName()
 {
	// var name=$("fullname").value;
	 var name=document.getElementById("fullName").value;
	 if(name.length<8)
		 {
		 	document.getElementById("validName").innerHTML="Password Must be 8 Character";
		 }
	 
 }