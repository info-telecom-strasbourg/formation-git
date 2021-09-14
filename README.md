# Formation Git

## Ajouter une clé SSH à GitHub
### Générer une clé SSH
1. Crée une clée ssh
`ssh-keygen -t rsa -b 4096 -C "your_email@example.com"`
1. Lorsqu'on vous demande "Enter a file in which to save the key", entrer `~/.ssh/id_rsa_github`
2. Lorsque la demande de passphrase apparait, vous pouvez appuyez sur la touche
"entrée".

4. Ouvrer le fichier de config avec vi `vi ~/.ssh/config`.
5. Pour pouvoir modifier le fichier tapper `i` et entrer les configuration suivantes :
```sh
Host github.com
        HostName github.com
        User git
        IdentityFile ~/.ssh/id_rsa_github
        IdentitiesOnly yes
```
6. Appuyer sur la touche `esc`pour quitter le mode d'édition. 
7. Pour enregistrer les modifications et quitter `vi` tapper `:wq`
   * `w` enregistre les modifications
   * `q` quitte `vi`

### Ajouter une clé SSH à votre compte GitHub
1. Copier la clé publique dans le presse papier avec
`pbcopy < ~/.ssh/id_rsa_github.pub` (si cela ne marche pas afficher la clé avec `cat ~/.ssh/id_rsa_github.pub` et copier tout ce qui est affiché)
2. Dans le coin droit de la page GitHub, cliquer sur votre profil photo, puis dans **Settings.**
<div align="center">
    <img src="images/5b09a3bdaa593cc2be8a072f4aca6bb63e81dcf8a4a4cf9febdd45b6e1b5e260.png" width="150px"/>
</div>

3. Dans la barre latérale, cliquer sur **SSH et GPG keys**.
<div align="center">
    <img src="images/95110ba503ba0cb44365c6c76c8f10394b0621d986205e15591dd6f72bd68e04.png" width="500px"/>
</div>


4. Dans le champ "Title", ajouter un label descriptive pour la nouvelle clé. Par exemple
si vous utilisé un Mac, vous pouvez l’appeler MacBook.
<div align="center">
    <img src="images/e579cb97ee8c433f43b510870baf7d2cd240765e84f545f69bbc4660af8b1797.png" width="400px"/>
</div>

5. Coller la clé copiée en 1) dans le champ "Key".
6. Confirmer le mot de passe GitHub (si demandé).

## Voici une liste des commandes git qui pourront vous être utiles durant la réalisation de vos projets :

`git clone git@github.com:pseudo/nom_projet.git` : permet de récupérer un repository git sur son ordinateur

`git add [paths]` : permet d'ajouter des fichiers à la liste des fichiers "suivis"

`git commit -m [message]` : permet de sauvegarder les fichiers suivis localement (non accessible pour les autres). Le message doit décrire la sauvegarde (choisissez des noms pertinents).

`git push origin [branch]` : envoie les sauvegardes locales sur le repository distant (accessible aux autres).

`git branch [branche name]` : créer une nouvelle branche locale (elle sera disponible pour les autres au premier git push origin [nom de la branche]).

`git branch` : affiche les branches présentes en local.

`git checkout [branch]` : change votre branche de travail.

`git checkout -b [branch]` : créer une nouvelle branche et bascule immédiatement sur celle-ci.

`git fetch` : récupère les branches distantes qui n'existent pas en local (après cette commande, on peut basculer sur ces branches) ainsi que les modifications effectuées sans les fusionner.

`git status` : indique quels fichiers vont être sauvegardés localement (en vert) et ceux qui ne le seront pas (en rouge).

`git log --abbrev-commit` : affiche la liste des derniers commits.

`git checkout [sha du commit]` : retourne sur le commit donné en lecture.

`git reset --hard [sha du commit]` : retourne sur le commit donné. Comme si les commits suivant avaient été effacés.

`git branch -D [nom de la branche]` : supprime localement la branche.

`git push origin --delete [nom de la branche]` : supprime la branche distante.

`git merge [nom de la branche]` : fusionne 2 branches. Celle dans laquelle vous vous trouver est la branche qui sera modifiée.


## Astuces utiles

`git add .` : ajoute tous les fichiers modifiés du répertoire courant (ainsi que ceux les sous-répertoires) aux fichiers suivis.

`git add -A` : ajoute tous les fichiers modifiés depuis le dernier commit aux fichiers suivis.


`git reset HEAD~[nb de commit] --soft` : annule les nb de commit derniers commits sans perdre le code actuel.

`git reset HEAD~[nb de commit] --mixed` : annule les nb de commit derniers commits et annule le add sans perdre le code actuel.

`git reset --hard` : annule toutes les modifications et revient au commit actuel.

`git reset HEAD~[nb de commit] --hard` : revient nb de commit commits en arrière et supprime le code associé.

[Si vous avez un problème, ce lien pourrait être utilise.](https://ohshitgit.com/)

Annuler des commits:
`git reset HEAD~[nb de commit] --hard`
`git push origin +[nom branche]` : le '+' n'est pas une erreur et est obligatoire.

## Exemple d'utilisation

```sh
git clone [clé ssh du projet sur Github]
cd [nom du dossier où se trouve le projet]
git checkout -b [nom de votre branche]
# Codez votre fonction !
git status
git add . / git add [liste fichier en rouge] / git add -A
git commit -m "Mon premier commit"
git push origin [nom de votre branche]
git pull origin master
git merge [nom de votre branche]
# si conflit: git merge --continue
git push origin --delete [nom de votre branche]
git branch -D [nom de votre branche]
```
