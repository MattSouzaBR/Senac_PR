Nestas 3 atividades, eu não utilizei nenhuma IA. Apenas experiência do que já vi sobre CSS e semântica. O máximo utilizado foi auto completar do Emmet e pesquisas no Google para lembrar nomes de classes e atributos.

Após, e somente após a atividade pronta, peguei meu código e joguei no Grok para avaliar o código. Não aceitei e não utilizei nenhum código sugerido. O intuito era ver se o Grok avaliava se o meu código era gerado por IA segundo a análise dele. E o Grok avaliou que parecia sim ser gerado por IA entre 90% a 95%. Mas argumento que com base na foto das atividades (foto de um site feito), não conheço uma IA que gere o site com tamanha fidelidade na qual me dediquei e ainda deixe o código organizado como deixei. No fim, ficou os seguintes pontos que vejo que preciso estudar:

Anotações sobre o que eu preciso estudar:
---- Lembrar de usar o clamp () no CSS ou min font-size para garantir a responsividade do texto.
---- Aprender sobre 'prefers-color-scheme'
---- Estudar WCAG, SEO e Acessibilidade (WCAG 2.x, W3C, WebAIM, Deque, Section508, ARIA)
---- screen reader (NVDA, VoiceOver, JAWS)
---- <time datetime="2026-...">

QUAISQUER DÚVIDAS SOBRE A ATIVIDADE, PARA AVALIAR SE FUI EU MESMO QUE FIZ, ESTOU A DISPOSIÇÃO PARA RESPONDER.

==========================================
SOBRE O USO DE VARIÁVEIS DO CSS (Escrito à mão)
==========================================
As variáveis do CSS, aprendi a criar e a usar em 2018~2019 com a Rocketseat. De lá pra cá, fui aprendendo formas de organizar as variáveis e o CSS. As anotações do código são pra que eu lembre de aplicar o conceito e o que estudar. Era o Professor Mayk Brito. Na época ele estava ensinando a fazer uma landing page de um salão de beleza.

O nome das variáveis segue dicas do instagram sobre nomes de variáveis claros. Eu coloquei uma cor destaque e um comentário, pra lembrar que esse não pode faltar nas variáveis do CSS. Eu ia começar a aprender SASS e SCSS, mas ficou muito complexo.

Ex.:

    :root {
        /* Cores */
        --cor-primaria: #2c3e50;
        --cor-secundaria: #34495e;
        --cor-destaque: #e67e22; /* A Cor destaque deve ser usada  em menos de 10% da identidade visual do site */
        --cor-fundo-escuro: #212121; /* Não é recomendado usar preto absoluto */
        --cor-fundo-claro: #f4f4f4; /* Não é recomendado usar branco absoluto */
        --cor-texto-escuro: var(--cor-fundo-escuro); /* Não é recomendado usar preto absoluto */
        --cor-texto-claro: var(--cor-fundo-claro); /* Não é recomendado usar branco absoluto */

        /* Fontes */
        --fonte-padrao: Arial, sans-serif;
        --tamanho-h1: 1.5em;
        --tamanho-h2: 1.2em;
        --tamanho-h3: .9em;
        --tamanho-p: .8em;
        --tamanho-span: .78em;
        --tamanho-a: var(--tamanho-p);
        --peso-titulo-h1: bold;
        --peso-titulo-h2: bold;
        --peso-titulo-h3: 700;
        --peso-titulo-p: normal;

        /* Tamanho */
        --preenchimento-tela: 80%;
        --espacamento-padrao: 20px;
        --espacamento-secoes: var(--espacamento-padrao);
    }

==========================================
SOBRE O USO DO RESET (Copiado e editado)
==========================================
Sobre o 'reset', eu lembro na época que era recomendado utilizar para garantir que em todos os navegadores existisse o mesmo padrão. Esse reset aplicado é o mais extremo, pois ele me força a não aproveitar a estilização nativa do navegador, mas criar uma própria. Isso aumenta o controle sobre o site igualmente que aumenta a complexidade do código.

Eu poderia usar o reset que aprendi nos vídeos do DEVMEDIA, mas era muito simples.

Ex.:

    * {
        margin: 0;
        padding: 0;
        box-sizing: border-box;
        list-style: none;
        text-decoration: none;
    }

Então resolvi usar o completo. Que dizem que caiu em desuso entre 2015 a 2019.

Ex.: 

    /* Reset
        v2.0 | 20110126
        License: none (public domain)
        Taken from http://meyerweb.com/eric/tools/css/reset/
    */
        html, body, div, span, applet, object, iframe,
        h1, h2, h3, h4, h5, h6, p, blockquote, pre,
        a, abbr, acronym, address, big, cite, code,
        del, dfn, em, img, ins, kbd, q, s, samp,
        small, strike, strong, sub, sup, tt, var,
        b, u, i, center,
        dl, dt, dd, ol, ul, li,
        fieldset, form, label, legend,
        table, caption, tbody, tfoot, thead, tr, th, td,
        article, aside, canvas, details, embed, 
        figure, figcaption, footer, header, hgroup, 
        menu, nav, output, ruby, section, summary,
        time, mark, audio, video, span {
            margin: 0;
            padding: 0;
            border: 0;
            font-size: 100%;
            font: inherit;
            font-family: var(--fonte-padrao); /* Acrescentado ! */
            color: var(--cor-texto-escuro); /* Acrescentado ! */
            vertical-align: baseline;
            text-decoration: none;
        }
        /* HTML5 display-role reset for older browsers */
        article, aside, details, figcaption, figure, 
        footer, header, hgroup, menu, nav, section {
            display: block;
        }
        body {
            line-height: 1;
            background-color: var(--cor-fundo-claro); /* Acrescentado ! */;
        }
        ol, ul {
            list-style: none;
        }
        blockquote, q {
            quotes: none;
        }
        blockquote:before, blockquote:after,
        q:before, q:after {
            content: '';
            content: none;
        }
        table {
            border-collapse: collapse;
            border-spacing: 0;
        }

==========================================
SOBRE O 'ESTILOS PESSOAIS PADRONIZADO' (Escrito à mão)
==========================================
Como o reset é extremo, precisava recriar os estilos. Então resolvi isso escrevendo estilos gerais base, em cima das variáveis criadas. Então, onde não é uma excessão, entra nesta regra.

Ex.:

    h1 {
        font-size: var(--tamanho-h1);
        font-weight: var(--peso-titulo-h1);
    }

    h2 {
        font-size: var(--tamanho-h2);
        font-weight: var(--peso-titulo-h2);
    }

    h3 {
        font-size: var(--tamanho-h3);
        font-weight: var(--peso-titulo-h3);
        padding-top: 10px;
    }   

    p {
        font-size: var(--tamanho-p);
    }

    a {
        font-size: var(--tamanho-a);
    }

    span {
        font-size: var(--tamanho-span);
    }


==========================================
SOBRE O 'ESTILOS PESSOAIS PERSONALIZADO' (Escrito à mão)
==========================================
Neste trecho aplicaquei tudo o que conheço do CSS, em cima das várias e das padronizações criadas. NÃO FOI UTILIZADO IA. Tudo o que usei foi um pouco da teoria das aulas anteriores e o auto completar do Emmet. Classes ou atributos que eu esquecia, procurava no Google. 

Ex.: 

    .container {
        width: var(--preenchimento-tela);
        margin: 0 auto;
    }

    /* HEADER */
    header {
        background-color: var(--cor-primaria);
        padding: var(--espacamento-padrao);
        text-align: center;
    }

    header .container * {
        color: var(--cor-texto-claro);
    }

    header .container h1 {
        margin-top: var(--espacamento-padrao);
        padding-bottom: var(--espacamento-padrao);
    }


    /* NAV */
    nav {
        background-color: var(--cor-secundaria);
        text-align: center;
    }

    nav ul {
        display: flex;
        justify-content: center;
        gap: var(--espacamento-padrao);
        padding: calc(var(--espacamento-padrao)/2) 0;
    }

    nav ul li a {
        color: var(--cor-texto-claro);
    }


    /* MAIN */
    main div.container section.linha {
        display: flex;
        gap: var(--espacamento-padrao);
        padding-top: var(--espacamento-secoes);
    }

    main div.container article{
        flex: 1;
        padding: var(--espacamento-padrao);
        background-color: #fff;
        display: flex;
        flex-direction: column;
        gap: 10px;
        padding-bottom: 30px;
    }

    main div.container article section.titulo-postagem h2 {
        padding: var(--espacamento-padrao) 0;
    }

    main div.container article section.imagem-principal img {
        width: 100%;
        height: auto;
    }

    main div.container article section.conteudo-postagem p {
        margin-top: var(--espacamento-padrao);
    }

    /* FOOTER */
    footer {
        margin-top: var(--espacamento-padrao);
        background-color: var(--cor-secundaria);
        text-align: center;
        padding: var(--espacamento-padrao);
    }

    footer .container span {
        color: var(--cor-texto-claro);
    }