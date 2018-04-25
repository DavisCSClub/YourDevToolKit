# **Your Developer Tool Kit Workshop**
## By the Davis Computer Science Club, 4/25/18
### Host: [Bryan Ngo](http://bryngo.me)

## 1. Set up
### macOS
1. Install [Homebrew](https://brew.sh)

**Copy and paste** the following in your **terminal** and hit `return`.

```
/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
```

2. Install [Git](https://github.com/git/git)

**Copy and paste** the following in your **terminal** and hit `return`.

```
brew install git
```

### Windows
1. Install [cmder](http://cmder.net)

*Click on the above link to the installtion file*

2. Install git

*Nothing to be done here! Git should come wth Cmder*

### Linux
1. Install git

**Copy and paste** the following in your **terminal** and hit `return`.

```
sudo apt-get update
sudo apt-get upgrade
sudo apt-get install git
```


## 2. Last Week, Brand Development. Now what?
### Personal Website
1. Go [here](https://github.com/new) and create a new repository with format of
`<YOUR GITHUB USERNAME>.github.io`. My username is `bryngo`, so I would name my repo
`bryngo.github.io`
2. Clone the [repository](https://github.com/DavisCSClub/YourDevToolKit) for
today's workshop.

```
git clone https://github.com/DavisCSClub/YourDevToolKit.git
```

3. *Copy* or *move* the `Ceevee10` folder to a different working directory on
your computer and then `cd` into it.

```
cp -r YourDevToolKit/Ceevee10 ~/Desktop/
cd ~/Desktop/Ceevee10
```

4. Locally initialize the local `Ceevee10` directory as a new local git repository and
push all the files to GitHub

```
git init
git remote add origin <YOUR REPO URL>
git add -A
git commit -m "Initial Commit"
git push -u origin master
```

5. Your site should now be live! Head to `<YOUR GITHUB USERNAME>.github.io` to
see your site. I would go to `bryngo.github.io`

6. Now, let's make some changes to our website.

## 3. Optimizing Your Workflow
### Text Editors
- *insert a nice graph here showcasing out-of-box effectiveness*
-
#### Bottom Tier
##### Vim / Emacs
- *maybe a demo here? probably not needed*

#### Middle Tier
##### Atom / Sublime
- *show off atom cli & quick markdown plugin demo*
- be sure to mention how bad & clunky MS office is

##### Top Tier
###### IDEs
- *middle tier vs top tier demo*

#### Alfred (?)
- *research this*

## 4. Random Plugins
### youtube-dl
- Like youtube clip converter, but without the ads and more command line
- *outline quick demo*

### oh-my-zsh
- allows to greater customization to your shell
- *outline very quick demo*

### keycastr
- https://github.com/keycastr/keycastr

## 5. Honorable Mentions (Plugins)
- Travs CI
