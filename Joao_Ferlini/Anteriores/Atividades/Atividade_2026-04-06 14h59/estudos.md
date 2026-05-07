Ver: https://www.gov.br/ds/components/button?tab=visao-geral

https://getbootstrap.com/docs/5.3/examples/

A TAG NAV é uma tag de navegação. Ela pode ou não ser colocada dentro do HEADER. Se a navegação vai ficar no cabeçalho, o NAV fica dentro do HEADER, caso não, pode ficar, por exemplo, dentro do MAIN, do ASIDE ou até do FOOTER. O NAV não precisa necessariamente ficar dentro de alguma TAG.

        header > Pode ser o cabeçalho da página ou da seção
        nav > Lista de Links, Menus
        main > Conteúdo Principal
        section > Seção de conteúdo (Seção de Contato, Seção de Notícia)
        article > Conteúdo separado, notícia, postagem
        aside > Conteúdo secundário, relacionado com o conteúdo principal da página (Geralmente exibido como barras laterais (sidebars), blocos de destaque, glossários, biografias do autor, links relacionados ou publicidade).Ela melhora a semântica, indicando que o conteúdo é "à parte". 
        footer > Rodapé da página

        Para mais detalhes: http://html5doctor.com/understanding-aside/

        

ITCSS - Introdução à Arquitetura CSS
- Cada arquivo deve ter um nível de especificidade

variables.css
    Variáveis, tokens de design

reset.css ou normalize.css
    Ambos os arquivos tem o propósito de corrigir problemas de compatibilidade nos navegadores. O arquivo normalize.css foca em corrigir apenas as diferenças. O arquivo reset.css tem como propósito zerar tudo e forçar o desenvolvedor a declarar tudo um por um.

typography.css
    "O typography.css é um recorte do base.css. Alguns projetos separam porque a tipografia tem muita coisa — escala de fontes, pesos, espaçamentos — e fica grande demais junto com o resto. Na prática pra maioria dos projetos um base.css só já resolve." ~ Claude AI

base.css
    Estilo padrão dos elementos HTML puros (h1, p, a, img, ...)
    
    "base.css — estilos padrão de todos os elementos HTML (h1, p, a, img, input, button...)" ~ Claude AI

layout.css
    Estrutura das páginas (header, main, aside, footer, etc)

components.css
    Peças reutilizáveis (.button, .card, .menu, etc)

utilities.css
    Classes de ajustes pontuais (.hidden, .text-center, .mt-10)

mobile.css e desktop.css
    Arquivos de responsividade

É interessante configurar o site para telefones (mobile.css) e depois adaptar para computadores (desktop.css). Quando for chamar no HTML, deve se chamar primeiro o mobile.css e depois o desktop.css.