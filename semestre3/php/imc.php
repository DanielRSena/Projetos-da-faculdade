<?php

    define("V1HOMEM", 72.7);
    define("V2HOMEM", 58);
    define("V1MULHER", 62.1);
    define("V2MULHER", 44.7);

    if(isset($_GET['altura']) && filter_var($_GET['altura'], FILTER_VALIDATE_FLOAT)) 
        $alt = $_GET['altura'];
    else $alt = 1.65;

    if(isset($_GET['sexo'])){
        if($_GET['sexo'] == 'm') $sexo = 'm';
        else $sexo = 'f';
    } else $sexo = 'f';

    echo"<h1> IMC simples </h1>";
    echo"<h1> Peso ideal </h1>";

    $pesoIdeal;

    if($sexo == 'm') {
        $pesoIdeal = V1HOMEM * $alt - V2HOMEM;
        $strSexo = "masculino";
    } else {
        $pesoIdeal = V1MULHER * $alt - V2MULHER;
        $strSexo = "feminino";
    }

    echo"O peso ideal para pessoas do sexo ", $strSexo, " com a altura de ", $alt, "m é de ", $pesoIdeal, "kg.";
?>