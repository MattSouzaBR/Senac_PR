https://icons.getbootstrap.com/

O que realmente importa, peça por peça:

No botão:
    data-bs-toggle="collapse" → diz pro Bootstrap: "esse botão abre/fecha algo"
    data-bs-target="#item1" → aponta qual elemento vai abrir/fechar (pelo ID)

No painel:
    id="item1" → o alvo que o botão aponta
    class="accordion-collapse collapse" → collapse é a classe do Bootstrap que controla a animação de mostrar/esconder
    show → adiciona junto com collapse para deixar aberto por padrão
    data-bs-parent="#meu-acordeon" → isso é o que faz fechar os outros ao abrir um — aponta pro container pai pelo ID

No container pai:
    id="meu-acordeon" → só precisa de um ID para o data-bs-parent referenciar

Exemplo:

<div id="meu-acordeon">

  <div>
    <button data-bs-toggle="collapse" data-bs-target="#item1">
      Título 1
    </button>
    <div id="item1" class="accordion-collapse collapse show" data-bs-parent="#meu-acordeon">
      Conteúdo 1
    </div>
  </div>

  <div>
    <button data-bs-toggle="collapse" data-bs-target="#item2">
      Título 2
    </button>
    <div id="item2" class="accordion-collapse collapse" data-bs-parent="#meu-acordeon">
      Conteúdo 2
    </div>
  </div>

</div>

Exemplo mínimo absoluto:

<div id="acordeon">
  <span data-bs-toggle="collapse" data-bs-target="#item1">Título</span>
  <p id="item1" class="collapse show" data-bs-parent="#acordeon">Conteúdo</p>
</div>


---

O Bootstrap aplica estilos em cima dessa estrutura de classes:

---

**`.accordion`** 
Container principal. Aplica apenas um `--bs-accordion-*` de variáveis CSS e um `border-radius` externo. Dispensável visualmente se você estilizar na mão.

---

**`.accordion-item`**
Cada linha do acordeon. Adiciona `border` nas laterais e entre os itens, e cuida do `border-radius` do primeiro e último item.

---

**`.accordion-header`**
É só um reset — zera o `margin` do `h2` (ou qualquer heading). Existe porque o exemplo usa `<h2>` por semântica/acessibilidade, e headings têm margin por padrão.

---

**`.accordion-button`** (Precisa estar dentro de  class="accordion", não pode ter d-block nele)
Essa faz bastante coisa:
- Aparência de botão removida (`background`, `border` zerados)
- Ocupa `width: 100%` — estica até a borda
- `padding` interno
- A **setinha** (chevron) no lado direito, via `background-image` SVG
- A setinha **rotaciona** quando o painel está aberto (classe `.collapsed` ausente vs presente)
- Muda `background-color` quando aberto

---

**`.accordion-collapse`**
Só ajusta o `border-top` de separação entre o botão e o conteúdo. A animação em si vem da classe `collapse` do Bootstrap JS — essa aqui é só visual.

---

**`.accordion-body`**
Apenas `padding` interno do conteúdo.

---

Resumindo em camadas:

| Classe | Função |
|---|---|
| `accordion` | Variáveis e borda externa |
| `accordion-item` | Borda entre itens |
| `accordion-header` | Reset de margin do heading |
| `accordion-button` | Visual do botão + setinha animada |
| `accordion-collapse` | Borda entre botão e conteúdo |
| `accordion-body` | Padding do conteúdo |

A setinha do `accordion-button` é provavelmente o detalhe mais trabalhoso de replicar do zero — o resto é padding e border básicos.




Exemplo final (Bootstrap):

<div class="accordion" id="accordionExample">
  <div class="accordion-item">
    <h2 class="accordion-header" id="headingOne">
      <button class="accordion-button" type="button" data-bs-toggle="collapse" data-bs-target="#collapseOne" aria-expanded="true" aria-controls="collapseOne">
        Accordion Item #1
      </button>
    </h2>
    <div id="collapseOne" class="accordion-collapse collapse show" aria-labelledby="headingOne" data-bs-parent="#accordionExample">
      <div class="accordion-body">
        <strong>This is the first item's accordion body.</strong> It is shown by default, until the collapse plugin adds the appropriate classes that we use to style each element. These classes control the overall appearance, as well as the showing and hiding via CSS transitions. You can modify any of this with custom CSS or overriding our default variables. It's also worth noting that just about any HTML can go within the <code>.accordion-body</code>, though the transition does limit overflow.
      </div>
    </div>
  </div>
  <div class="accordion-item">
    <h2 class="accordion-header" id="headingTwo">
      <button class="accordion-button collapsed" type="button" data-bs-toggle="collapse" data-bs-target="#collapseTwo" aria-expanded="false" aria-controls="collapseTwo">
        Accordion Item #2
      </button>
    </h2>
    <div id="collapseTwo" class="accordion-collapse collapse" aria-labelledby="headingTwo" data-bs-parent="#accordionExample">
      <div class="accordion-body">
        <strong>This is the second item's accordion body.</strong> It is hidden by default, until the collapse plugin adds the appropriate classes that we use to style each element. These classes control the overall appearance, as well as the showing and hiding via CSS transitions. You can modify any of this with custom CSS or overriding our default variables. It's also worth noting that just about any HTML can go within the <code>.accordion-body</code>, though the transition does limit overflow.
      </div>
    </div>
  </div>
  <div class="accordion-item">
    <h2 class="accordion-header" id="headingThree">
      <button class="accordion-button collapsed" type="button" data-bs-toggle="collapse" data-bs-target="#collapseThree" aria-expanded="false" aria-controls="collapseThree">
        Accordion Item #3
      </button>
    </h2>
    <div id="collapseThree" class="accordion-collapse collapse" aria-labelledby="headingThree" data-bs-parent="#accordionExample">
      <div class="accordion-body">
        <strong>This is the third item's accordion body.</strong> It is hidden by default, until the collapse plugin adds the appropriate classes that we use to style each element. These classes control the overall appearance, as well as the showing and hiding via CSS transitions. You can modify any of this with custom CSS or overriding our default variables. It's also worth noting that just about any HTML can go within the <code>.accordion-body</code>, though the transition does limit overflow.
      </div>
    </div>
  </div>
</div>

fonte: https://getbootstrap.com/docs/5.0/components/accordion/