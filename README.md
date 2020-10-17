# Formation Git

## Voici une liste des commandes git qui pourront vous être utiles durant la réalisation de vos projets :

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


`git reset HEAD ~ [nb de commit] --soft` : annule les nb de commit derniers commits sans perdre le code actuel.

`git reset HEAD ~ [nb de commit] --mixed` : annule les nb de commit derniers commits et annule le add sans perdre le code actuel.

`git reset --hard` : annule toutes les modifications et revient au commit actuel.

`git reset HEAD ~ [nb de commit] --hard` : revient nb de commit commits en arrière et supprime le code associé.

Annuler des commits:
`git reset HEAD ~ [nb de commit] --hard`
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
