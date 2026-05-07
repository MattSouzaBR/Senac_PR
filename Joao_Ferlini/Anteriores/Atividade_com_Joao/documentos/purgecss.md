npm install -g purgecss

purgecss --css grid.css --content index.html --output grid.min.css

purgecss --css grid.css --content "**/*.html" --output grid.min.css