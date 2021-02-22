<?php

include "config.php";

if ( isset( $_POST['submit'] ) ) {
    
ini_set('display_errors',1);
error_reporting( E_ALL);
$from = "programmersarmy@gmail.com";

// $to = $_POST['userEmail'];

$to = mysqli_real_escape_string($connect, $_POST['userEmail']);

$subject = "Welcome to Programmers Army !!";
$message = "Thank you for subscribing Programmers Army
Thank you to be Part of our Army

Now you will be  all the updates of new articles posted on programmersarmy.com.

ProgrammersArmy as a platform is all about providing the desired impetus to our programming journey by granting everyone the access to top quality resources in a well organised manner.

We aim to provide best programming resources for various topics related to:
Competitive programming | Data Structures | Algorithms | Web development 
and much more…

We hereby announce an intern hiring contest hosted on CodeChef where the top 60 registered contestants will be provided the technical content writing internship 📝 for ProgrammersArmy.

Interested candidates will have to register on the below link:
🔗 https://docs.google.com/forms/d/1Ck9PnOv0cZnXl_uQ7KMgo09I5OT6zYJinMozXoGaMTw/edit

👣 Follow us on:

Facebook: https://www.facebook.com/Programmers-Army-105809441239783
Twitter:  https://twitter.com/ProgrammingArmy
LinkedIn: https://www.linkedin.com/company/67750368/admin/
Youtube:  https://www.youtube.com/channel/UCRJS3O94F8cOj2U0gOUwmBA

🤝 Join our Discord Community for more updates:
🔗 https://discord.gg/UWSBScw

Visit www.ProgrammersArmy.com now 🏃🏃️.

Hope a great Journey of learning and Growing together.
Hoping a great support from your side.

Thanks & Regards
Happy Coding !!
Team Programmers Army
";

$headers = "From:".$from;

mail($to,$subject,$message,$headers);



    $query = "INSERT INTO emails(email) VALUES('$to')";

    $results = mysqli_query($connect, $query);
    
    echo "<script>

    alert('Thank you for subscribing Programmers Army !!');
    window.location.href='index.html';
    </script>";




// if( $results > 0 ) {
//     echo "Inserted";
// }

 


}
?>