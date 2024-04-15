<!DOCTYPE html>
<html lang="pt-br">

<head>
    <title>Livros</title>
    <meta charset="UTF-8">
    <link rel="stylesheet" href="styles.css">
    <link rel="shortcut icon" href="favicon.ico" type="image/x-icon">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>

<body class="livros_body">
    <nav>
        <div class='logo'>
            <a href='index.php' class='logo'> <svg xmlns='http://www.w3.org/2000/svg' width='32' height='32' fill='currentColor' class='bi bi-book-half' viewBox='0 0 16 16'>
                    <path d='M8.5 2.687c.654-.689 1.782-.886 3.112-.752 1.234.124 2.503.523 3.388.893v9.923c-.918-.35-2.107-.692-3.287-.81-1.094-.111-2.278-.039-3.213.492V2.687zM8 1.783C7.015.936 5.587.81 4.287.94c-1.514.153-3.042.672-3.994 1.105A.5.5 0 0 0 0 2.5v11a.5.5 0 0 0 .707.455c.882-.4 2.303-.881 3.68-1.02 1.409-.142 2.59.087 3.223.877a.5.5 0 0 0 .78 0c.633-.79 1.814-1.019 3.222-.877 1.378.139 2.8.62 3.681 1.02A.5.5 0 0 0 16 13.5v-11a.5.5 0 0 0-.293-.455c-.952-.433-2.48-.952-3.994-1.105C10.413.809 8.985.936 8 1.783' />
                </svg> &nbsp; <strong class="wordLogo">LIVROS</strong> </a>
        </div>

        <div class='menu'>
            <ul>
                <li class='abas'><a href='adicionar.php'>ADICIONAR</a> </li>
                <li class='abas'> <a href='livros.php'>COLEÇÕES</a> </li>
            </ul>
        </div>
    </nav>

    <div class="conteudo">
        <?php

        $boxFile = "box.json";

        //bloco que exclui um box
        if (isset($_POST['indice'])) {

            $indice = $_POST['indice'];
            $boxes = json_decode(file_get_contents($boxFile), true);

            if (isset($boxes[$indice])) {

                $imagem = $boxes[$indice]['imagem'];
                unlink($imageDirectory . $imagem);
                unset($boxes[$indice]);
                file_put_contents($boxFile, json_encode($boxes));
                header("Location: {$_SERVER['PHP_SELF']}");
                exit;
            }
        }

        $boxes = json_decode(file_get_contents($boxFile), true);

        if (empty($boxes)) echo "Nada por aqui";
        else {
            foreach ($boxes as $indice => $box) {
                echo "<div class='box'>";
                $imagem = $box['imagem'];
                echo "<div class=boxImage> <img src='$imagem'> </div>";
                echo "<div class='boxText' data-name='{$box['nome']}'>";
                echo "<h3>{$box['nome']}</h3>";
                echo "<p><strong>Editora: </strong>{$box['editora']}</p>";
                echo "<p><strong>Tipo: </strong>{$box['tipo']}</p>";
                echo "<p><strong>Ano: </strong>{$box['ano']}</p>";
                echo "<p><strong>Volumes: </strong>{$box['volumes']}</p>";
                echo "<p><strong>Preço: </strong>{$box['preco']}</p>";

                //bloco do botão de exclusão
                echo "<form method='POST' action='" . $_SERVER['PHP_SELF'] . "'>";
                echo "<input type='hidden' name='indice' value='$indice'>";
                echo "<input type='submit' value='Excluir'>";
                echo "</form>";

                echo "</div></div>"; //fechamento do box
            }
        }
        ?>
    </div>
</body>

</html>