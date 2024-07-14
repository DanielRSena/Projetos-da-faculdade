<html>

<head>
  <title>Funções PHP</title>
  <meta charset="UTF-8">
  <link rel="stylesheet" type="text/css" href="form.css" />
</head>

<body>

  <h2>Funções PHP </h2>
  <h3>Nomes: Daniel Ramos, Leila Sanchez, Sandro Quirino </h3>

  <!-- função is_numeric -->
  <h4>Função is_numeric() </h4>
  <p>Essa função verifica se o valor é um 'não-número', muito útil para programas que não podem receber letras ou símbolos como entrada, pois esses dados serão utilizados para contas, por exemplo.</p> 
  
  <h5>Exemplo:</h5>
  <form action="index.php" method="post">
    <label for="palavra">É um número?</label><br><br>
    <input type="text" name="palavra" id="palavra">
    <input type="submit" name="vazio" value="Verificar">
  </form>

  <?php
    if(isset($_POST['palavra'])){
      $palavra = $_POST['palavra'];
      if (is_numeric($palavra))  echo "<p>A informação digitada é um número.</p>";
      else echo "<p>A informação digitada não é um número.</p>";
    } 
    else echo "<p>Por favor, insira um valor antes de verificar.</p>";
  ?>

  <!-- Função array_sum() -->
  <h4>Função array_sum() </h4>
  <p>A função array_sum() soma todos os elementos de um array.</p>
  
  <h5>Exemplos:</h5>
  <form action="index.php" method="post">
    <select id="vetores" name="vetores">
      <option value="[1,2,3,4,5,6,7,8,9,10]">[1,2,3,4,5,6,7,8,9,10]</option>
      <option value="[22,34,67]">[22,34,67]</option>
      <option value="[98,67,22,12]">[98,67,22,12]</option>
      <option value="[2,4,6,8]">[2,4,6,8]</option>
    </select>
    <input type="submit" name="vazio" value="Verificar">
  </form>
    
  <?php
    if(isset($_POST['vetores'])){
      $array = json_decode($_POST['vetores']);
      echo "<p>Soma  " . array_sum($array) . "</p>";
    } 
    else echo "<p>Por favor, selecione um array antes de verificar.</p>";
  ?>

  <!-- Função array_sum() -->
  <h4>Função bindec() </h4>
  <p>A função bindec() converte um número binário para decimal.</p>

  <h5>Exemplo:</h5>
  <form action="index.php" method="post">
    <label for="binario">Digite um número binário:</label>
    <br><br>
    <input type="text" name="binario" id="binario">
    <input type="submit" name="vazio" value="Verificar"">
  </form>

  <?php
    if(isset($_POST['binario'])){
      $binario = $_POST['binario'];
      if(preg_match('/^[01]+$/', $binario))
        echo "<p>O número binário " . $binario . " em decimal é: " . bindec($binario) . "</p>";
      else echo "<p>O número digitado não é um número binário.</p>";
    }
    else echo "<p>Por favor, insira um valor antes de verificar.</p>";
  ?>
</body>

</html>