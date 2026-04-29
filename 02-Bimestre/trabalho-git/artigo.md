# Artigo

## 1-Conceito de Git.
- O Git é um sistema de controle de versão distribuído, gratuito e de código aberto, projetado para rastrear alterações no código-fonte durante o desenvolvimento de software. Ele permite que múltiplos desenvolvedores colaborem, gerenciando histórico, ramos (branches) e fusões de forma eficiente, tratando dados como "fotografias" (snapshots) de arquivos em vez de apenas diferenças.
  
### Exemplo
- Fazendo uma analogia com os videos games seria o Commit o seu "Save",  você salva o estado atual. Se algo der errado, você pode "dar load" e voltar exatamente para aquele ponto.
e o seu Log "Histórico", você pode ver todos os seus saves e voltar neles.
 
## 2-Histórico e contexto.
##### O que é o Git?
- Ele é um sistema de controle de versão feito para registrar, organizar e acompanhar todas as alterações de um projeto. É extremamente útil para desenvolver projetos, como softwares, já que permite ver quem enviou uma atualização do projeto, o que mudou nessa atualização, quando ela foi feita e também visualizar uma lista das atualizações, onde é possível voltar para uma delas facilmente.

##### Por que o Git surgiu?
- Antigamente, no desenvolvimento do Linux, milhares de programadores trabalhavam juntos, e era necessário controlar todas as alterações feitas no código. Então, eles usavam o BitKeeper para manter tudo organizado. Porém, em 2005, aconteceu um problema relacionado à licença do programa, fazendo com que os desenvolvedores do Linux perdessem o direito de usar a versão gratuita do BitKeeper. Como essa era a principal ferramenta usada na organização do projeto, Linus Torvalds decidiu criar sua própria ferramenta para resolver esse problema: o Git.

- <!-- Continua... --!>

### Exemplo
- <!-- texto -->

## 3-Instalação e download.
- <!-- texto -->

### Exemplo
- <!-- texto -->

## 4-Comandos básicos (init,add,commit,status,log).
- Os comandos básicos do Git incluem init, add, commit, status e log, que são utilizados para o controle de versão local. Eles formam a base do funcionamento do Git, permitindo que o desenvolvedor acompanhe e registre alterações em arquivos ao longo do tempo sem depender de conexão com a internet ou de repositórios externos.

### Exemplo
* git init é usado para iniciar um novo repositório Git em uma pasta, permitindo que o versionamento comece.
* git add adiciona arquivos ou alterações à área de preparação (staging area), indicando que estão prontos para serem salvos.
* git commit registra definitivamente essas alterações no histórico do projeto, funcionando como um “ponto de salvamento”.
* git status mostra o estado atual do repositório, indicando arquivos modificados, adicionados ou não rastreados.
* git log exibe o histórico de commits, permitindo visualizar todas as mudanças feitas ao longo do tempo.

## 5-Exemplos práticos.
- O primeiro passo é utilizar o comando git init dentro da pasta do projeto para transformá-la em um repositório Git.
Depois de criar ou editar arquivos, como um arquivo index.html, você pode usar git add index.html para preparar essa alteração. Em seguida, com git commit -m "ex: Adiciona página inicial", você registra essa mudança no histórico do projeto. Se quiser verificar o que foi modificado antes de salvar, pode usar git status, que mostrará os arquivos alterados e se eles já foram adicionados ou não. Para consultar o histórico de tudo que já foi feito no projeto, o comando git log permite visualizar todos os commits realizados. 

### Github.
- Utilizando junto do Github, você pode enviar suas alterações para um repositório remoto com git push. Caso outra pessoa tenha feito mudanças no projeto, você pode atualizá-lo localmente usando git pull, garantindo que sua versão esteja sincronizada.

### Branchs.
- Outro exemplo comum é o uso de ramificações. Se você quiser desenvolver uma nova funcionalidade sem afetar o código principal, pode criar uma nova branch com git branch nova-funcionalidade e acessá-la com git checkout nova-funcionalidade. Após finalizar, essa branch pode ser integrada ao projeto principal.

## 6-GitHub: conceito e finalidade.
### Conceito
- O GitHub utiliza o Git, um sistema de controle, para gerenciar as alterações em arquivos de um projeto.
- Embora o Git funcione via linha de comando, o GitHub oferece uma interface web intuitiva e ferramentas visuais que tornam o controle de versão mais acessível.
- Os projetos no GitHub são chamados de "repositórios", que armazenam todo o código, arquivos e modificações.

### Finalidade
-  A principal finalidade é permitir que múltiplos desenvolvedores trabalhem no mesmo código simultaneamente, sem sobrescrever o trabalho alheio, assim o GitHub facilita conexões, permitindo que usuários contribuam com o trabalho de outros.
- O github também armazena projetos com segurança na nuvem, garantindo acesso remoto e colaborativo.

## 7-Criação de conta.
- <!-- texto -->

### Exemplo
- <!-- texto -->


## 8-Integtração Git + GitHub (push,pull,clone).
- A integração entre Git e GitHub permite salvar projetos na nuvem e trabalhar em equipe. O Git controla as versões localmente, enquanto o GitHub armazena o repositório online. O comando git clone copia um projeto do GitHub para o computador. Já o git push envia as alterações locais para o repositório remoto. O git pull atualiza o projeto local com as mudanças feitas no GitHub. Esse processo garante que todos os colaboradores tenham acesso à versão mais recente do código e possam trabalhar de forma organizada.

### Exemplo
- um desenvolvedor usa git clone para baixar o projeto, faz alterações, executa git add e git commit para salvar localmente e depois usa git push para enviar ao GitHub. Outro membro da equipe utiliza git pull para atualizar o projeto em seu computador.

## 9-Conclusão.
- <!-- texto -->

### Exemplo
- <!-- texto -->
 
## 10-Referências.
- <!-- texto -->

### Exemplo
- <!-- texto -->
