<?php

    echo'<h1> Tabuada simples </h1>';

    if ( isset( $_GET[ 'a' ] ) && filter_var( $_GET[ 'a' ], FILTER_VALIDATE_INT ) )
    $a = $_GET[ 'a' ];
    else $a = 13;

    for ( $i = 1; $i < 11; $i++ )
    echo $a, ' x ', $i, ' = ', ( $a * $i ), '<br>';
?>