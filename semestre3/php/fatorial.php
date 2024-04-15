<?php

    if(isset($_GET['a']) && filter_var($_GET['a'], FILTER_VALIDATE_INT))
        $a = $_GET['a'];
    else $a = 1;

    $fat = 1;

    echo"<h1> Fatorial </h1>";
    
    echo $a, "! = ";

    for ($i=1; $i < ($a+1); $i++) { 
        echo $i,"*";
        $fat *= $i;
    }

    echo" = ",$fat;
?>