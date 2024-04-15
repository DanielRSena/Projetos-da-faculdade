<?php
if (isset($_POST["n1"])) $n1 = $_POST["n1"];
else $n1 = 0;

if (isset($_POST["n2"])) $n2 = $_POST["n2"];
else $n2 = 0;

if (isset($_POST["operadores"]))
    $operadores = $_POST["operadores"];
else $operadores = "";

$resultado = 0;
switch ($operadores) {
    case "+":
        $resultado = $n1 + $n2;
        break;
    case "-":
        $resultado = $n1 - $n2;
        break;
    case "*":
        $resultado = $n1 * $n2;
        break;
    case "/":
        if($n2 != 0) $resultado = $n1 / $n2;
        else $operadores = "Erro";
        break;
    case "^":
        $resultado = pow($n1, $n2);
        break;
    case "m":
        $resultado = ($n1 + $n2) / 2;
        break;
    case 'p':
        $resultado = $n1 / $n2 * 100;
        break;
    case 'r':
        $operadores = '%';
        $resultado = $n1 % $n2;
        break;
}

?>
<!DOCTYPE html>
<html lang="pt-br">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Dados do Formulário</title>
</head>

<body>
    <h1>Calculadora</h1>
    <p> 
        <?php 
            if($operadores == 'm') 
                echo "(", $n1, " + ", $n2, ") / 2 = ", $resultado;
            else if($operadores == 'p') echo $n1, " / ", $n2, " * 100 = ", $resultado, "%";
            else if($operadores == "Erro") echo $operadores, "! Não se pode dividir por 0";
            else echo $n1, " ", $operadores, " ", $n2, " = ", $resultado;
        ?> 
    </p>
</body>

</html>