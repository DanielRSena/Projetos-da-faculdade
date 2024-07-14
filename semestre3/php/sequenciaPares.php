<?php

    if ( isset( $_GET[ 'a' ] ) && filter_var( $_GET[ 'a' ], FILTER_VALIDATE_INT ) )
    $a = $_GET[ 'a' ];
    else $a = 1;

    $dobro = 2;

    echo"<h1> Sequência de números pares até $a </h1>";

    for ( $i =  0; $dobro <= $a; $i++ ) {
        if ( $dobro <= $a ) echo ' 1 ', $dobro;
        $dobro += 2;
    }

    echo' 1';
?>