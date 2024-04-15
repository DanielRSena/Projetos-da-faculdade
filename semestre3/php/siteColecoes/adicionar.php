<!DOCTYPE html>
<html lang="pt-br">

<head>
  <title>Livros</title>
  <meta charset="UTF-8">
  <link rel="stylesheet" href="styles.css">
  <link rel="shortcut icon" href="favicon.ico" type="image/x-icon">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>

<body class="add_body">

  <nav>
    <div class='logo'> <a href='index.php' class='logo'> <svg xmlns='http://www.w3.org/2000/svg' width='32' height='32' fill='currentColor' class='bi bi-book-half' viewBox='0 0 16 16'>
          <path d='M8.5 2.687c.654-.689 1.782-.886 3.112-.752 1.234.124 2.503.523 3.388.893v9.923c-.918-.35-2.107-.692-3.287-.81-1.094-.111-2.278-.039-3.213.492V2.687zM8 1.783C7.015.936 5.587.81 4.287.94c-1.514.153-3.042.672-3.994 1.105A.5.5 0 0 0 0 2.5v11a.5.5 0 0 0 .707.455c.882-.4 2.303-.881 3.68-1.02 1.409-.142 2.59.087 3.223.877a.5.5 0 0 0 .78 0c.633-.79 1.814-1.019 3.222-.877 1.378.139 2.8.62 3.681 1.02A.5.5 0 0 0 16 13.5v-11a.5.5 0 0 0-.293-.455c-.952-.433-2.48-.952-3.994-1.105C10.413.809 8.985.936 8 1.783' />
        </svg> &nbsp; <strong class="wordLogo">LIVROS</strong> </a>
    </div>

    <div class='menu'>
      <ul>
        <li class='abas'> <a href='adicionar.php'> ADICIONAR </a> </li>
        <li class='abas'> <a href='livros.php'> COLEÇÕES </a> </li>
      </ul>
    </div>

  </nav>

  <br>

  <main>
    <div class="add_background-section">
      <div class="add_half-height">
        <form action="adicionar.php" method="post" enctype="multipart/form-data">
          <label for="nome"><span>Nome:</span></label>
          <input type="text" id="nome" name="nome" required>
          <br> <br>
          <label for="editora"><span>Editora:</span></label>
          <input type="text" id="editora" name="editora" required>
          <br> <br>
          <label for="tipo"><span>Condição:</span></label>
          <select id="tipo" name="tipo">
            <option value="Novo">Novo</option>
            <option value="Usado">Usado</option>
          </select>
          <br> <br>
          <label for="ano"><span>Ano:</span></label>
          <input class="ano" type="number" id="ano" name="ano" min="0" max="<?php echo date('Y'); ?>" required>
          <br> <br>
          <label for="volumes"><span>Volumes:</span></label>
          <input type="number" id="volumes" name="volumes" min="2" required>
          <br> <br>
          <label for="preco"><span>Preço:</span></label>
          <input type="number" id="preco" name="preco" min="0" required>
          <br> <br>
          <label for="imagem"><span>Imagem:</span></label>
          <input type="file" id="imagem" name="imagem" accept="image/*" required>
          <br> <br>
          <input type="submit" value="Adicionar">
        </form>
      </div>
    </div>
  </main>

  <?php //salva os dados do formulário no box.json
  if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $nome = $_POST["nome"];
    $editora = $_POST["editora"];
    $tipo = $_POST["tipo"];
    $ano = $_POST["ano"];
    $volumes = $_POST["volumes"];
    $preco = $_POST["preco"];

    $caminho = "boxLivros/";
    $nomeImagem = $_FILES["imagem"]["name"];
    $caminhoCompleto = $caminho . $nomeImagem;
    move_uploaded_file($_FILES["imagem"]["tmp_name"], $caminhoCompleto);

    $newBox = array(
      "nome" => $nome,
      "editora" => $editora,
      "tipo" => $tipo,
      "ano" => $ano,
      "volumes" => $volumes,
      "preco" => $preco,
      "imagem" => $caminhoCompleto
    );

    $arq = "box.json";
    $boxes = file_get_contents($arq);
    $boxes = json_decode($boxes);
    array_push($boxes, $newBox);
    $boxes = json_encode($boxes);
    file_put_contents($arq, $boxes);
  }
  ?>
</body>

</html>