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

##### Como ele evoluiu?
- O Git, no início, era usado apenas pelos programadores do Linux, mas, com o passar do tempo, começaram a perceber a eficiência da ferramenta e, por isso, começaram a surgir projetos como o GitHub, usando o Git como base para facilitar o desenvolvimento de projetos. Com o passar dos anos, ele foi se aperfeiçoando, melhorando cada vez mais suas funções, até se tornar o que é hoje.

## 3-Instalação e download.
##### Como baixar?
- (O processo foi feito no Windowns então pode ser diferente em outros dispositivos.)

1. Abra o navegador e na aba de pesquisa insira: "git-scm.com" e aperte "Enter". 
<img width="1280" height="857" alt="git-scm com" src="https://github.com/user-attachments/assets/f124a3d5-3b8b-488a-a464-e112f9a97e7b" />

2. Procure na página a parte "Install" e clique nela.
<img width="407" height="170" alt="Install-Git" src="https://github.com/user-attachments/assets/47ba0e71-978b-4a0b-a84e-6cd60e8fa623" />

3. Selecione o sistema operacional do seu dispositivo.
<img width="619" height="184" alt="Sistema-Operacional" src="https://github.com/user-attachments/assets/719280aa-de80-4ce5-9cd6-4b7f5f823012" />

4. Clique na versão que deseja instalar.
<img width="1077" height="561" alt="Versão-Git" src="https://github.com/user-attachments/assets/4fb8977f-6e54-4470-9e36-3a4503e4ff4e" />

5. Execute o arquivo baixado.
<img width="384" height="110" alt="Git-Dowload" src="https://github.com/user-attachments/assets/ab4fbff0-51ce-4d32-ad0c-2961a9308658" />

6. Prossiga apertando em "Next" em todas as coisas até o programa ser baixado. E depois aperte em "Finish" para terminar.

- (OBS: Caso queira configurar o local da instalação, mude as opções conforme aparecerem. Caso não ligue para isso, apenas siga com o passo a passo.)

<img width="595" height="463" alt="Next-Dowload" src="https://github.com/user-attachments/assets/ab1ea838-06bf-420a-9278-b9f77322cb7a" />

7. Agora o Git já está funcionando na sua máquina.


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

### Finalidade:
-  A principal finalidade é permitir que múltiplos desenvolvedores trabalhem no mesmo código simultaneamente, sem sobrescrever o trabalho alheio, assim o GitHub facilita conexões, permitindo que usuários contribuam com o trabalho de outros.
- O github também armazena projetos com segurança na nuvem, garantindo acesso remoto e colaborativo.

## 7-Criação de conta.
- <!-- texto -->

### Passos para criar a conta:
-  Acesse o site do GitHub e clique no botão "Sign up" no canto. Digite um e-mail e crie uma senha boa. Escolha um nome de usuário e então um código será enviado para o seu e-mail. Coloque-o no site e responda as perguntas sobre o seu perfil, ou pule esta parte. Então o seu painel (dashboard) será aberto, confirmando a criação da conta.

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
