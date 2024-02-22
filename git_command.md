# F1-Tenth_Duke
## Git Command workflow on Jetson NX
### install git


```bash
sudo apt update
sudo apt install git
```

### Git Config
Make sure to add yourself as a collaborators.

```bash
git config --global user.name "Your name"
git config --global user.email "Your email"
```
### Git Clone

```bash
sudo git clone https://github.com/qh65/F1-Tenth-Duke.git
```

### Git Add
"add ." means your changes for whole folder will be saved.

```bash
sudo git add .
sudo git commit -m "Your commit message"
```

### Git Push
"main" can be changed to any branch you made

```bash
sudo git push main
```

### Git Pull
"Pull" will pull whole repo from GitHub. If you only want to pull any branch, feel free to add after "pull".

```bash
sudo git pull 
```