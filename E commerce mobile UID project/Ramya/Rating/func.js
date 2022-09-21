
function validateForm() 
{
    
    var usrvalid =validate_usr();
    var pwdvalid =validate_ordn();
    var mailvalid=validate_mail();
    var dobvalid=validate_dob();
    var photovalid=validate_photo();
    var addvalid = validate_add();
    var namevalid=validate_name();
    var langvalid =validate_lang();
    if (!usrvalid || !pwdvalid || !mailvalid || !dobvalid || !photovalid || !addvalid || !partnamevalid || !langvalid) 
    {

        return false;
    }
    else
    { 
        alert('Details have been submitted successfully !!!');
        return true;
    }
}


function validate_name()
{  
  var regex =/[A-Za-z]+$/;
  var usrval=document.getElementById("name").value;
  var usrlen=Number(usrval.length);
  if(usrlen==0)
  {
    document.getElementById("usr_empty_msg").style.display = "block";
    return false;
  }
  else if((usrlen>0) && (regex.test(usrval)==false))
  {
    document.getElementById("usr_msg").style.display = "block";
    return false;
  }
}  

function validate_usr()
{   
      var regex =/[A-Za-z]+$/;
      var usrval=document.getElementById("username").value;
      var usrlen=Number(usrval.length);
      if(usrlen==0)
      {
        document.getElementById("usr_empty_msg").style.display = "block";
        return false;
      }
      else if((usrlen>0) && (regex.test(usrval)==false))
      {
        document.getElementById("usr_msg").style.display = "block";
        return false;
      }
      else
      {   
        document.getElementById("usr_empty_msg").style.display = "none";
        document.getElementById("usr_msg").style.display= "none";
        return true;
      }
}

function validate_pwd()
{
  var order = /^\d{10}$/;
  var ordval=document.getElementById("ordn").value;
  var ordlen=Number(ordrval.length);
  if(usrlen==0)
  {
    document.getElementById("pwd_empty_msg").style.display = "block";
    return false;
  }
  else if((ordlen>0) && (order.test(ordval)==false))
  {
    document.getElementById("pwd_msg").style.display = "block";
    return false;
  }
    else
    {   
      document.getElementById("pwd_empty_msg").style.display = "none";
      document.getElementById("pwd_msg").style.display= "none";
      return true;
    }
  
function validate_mail()
{
      var mailval=document.getElementById("email").value;
      var maillen=Number(mailval.length);
      if(maillen==0)
      {
        document.getElementById("email_msg").style.display = "block";
        return false;
      }
      else
      {
        document.getElementById("email_msg").style.display= "none";
        document.getElementById("dob").focus();
        return true;
      }
}

function validate_dob()
{
      var dobval=document.getElementById("dob").value;
      var doblen=Number(dobval.length);
      if(doblen==0)
      {
        document.getElementById("dob_msg").style.display = "block";
        return false;
      }
      else
      {
        document.getElementById("dob_msg").style.display= "none";
        document.getElementById("photo").focus();
        return true;
      }
}

function validate_photo()
{
      var photoval=document.getElementById("photo").value;
      var photolen=Number(photoval.length);
      if(photolen==0)
      {
        document.getElementById("photo_msg").style.display = "block";
        return false;
      }
      else
      {
        document.getElementById("photo_msg").style.display= "none";
        return true;
      }
}

}

  
function validate_add()
{
    var addval=document.getElementById("add").value;
    var addlen=Number(addval.length);
    if(addlen==0)
    {
        document.getElementById("add_msg").style.display = "block";
        return false;
    }
    else
    {
        document.getElementById("add_msg").style.display= "none";
        
        return true;
    }
}
      
