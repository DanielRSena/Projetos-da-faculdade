<?php

    echo"<h1> Sequência de FIBONACC </h1>";

    if(isset($_GET['a']) && filter_var($_GET['a'], FILTER_VALIDATE_INT))
        $a = $_GET['a'];
    else $a = 1;

    $penultimo = 1;
    $antepenultimo = 0;
    echo"1 ";

    for ($i=1; $i < $a; $i++) {
        $atual = $penultimo + $antepenultimo;
        echo $atual," ";
        $antepenultimo = $penultimo;
        $penultimo = $atual;
    }
?>