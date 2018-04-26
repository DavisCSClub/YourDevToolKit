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

#### Optional Further Steps
##### Get a custom domain
- [Namecheap](https://www.namecheap.com)
  - About $10 a year depending on domain
##### Get a server
- [DigitalOcean](http://digitalocean.com)
  - Cheapest option is $5 a month

## 3. Optimizing Your Workflow
### Text Editors

*Note: Picture shown below is a complete opinion and pretty inaccurate.
illustrative purposes only*

![Text Editor Effectivess](./images/Rplot.png)

#### Lower Tier
##### Vim / Emacs
- Why use this?
  - Making changes to files on a server.
  - Nice for quick / small changes
- Everyone should know how to use this.

#### Middle Tier
##### Atom / Sublime
- Why use this?
  - You're tired to the clunky interface from vim, and don't feel like learning
  all the shortcuts.
- Awesome plugins ([Atom](https://atom.io))
  - *Demo Markdown + LaTeX plugin*

#### Top Tier
##### IDEs
- Why use this?
  - You're using middle tier text editors, but you find yourself using other
  tools to help with your development (debuggers, database viewers, etc).
- IDEs are pretty much intelligent and customizable text editors.
- *Demo C++ code refactoring*

##### Text Editor Summary
- Different tiers require different levels of commitment to really take
advantage of its full potential.
- Out of the box performance vs performance after learning the tool

### [Alfred](https://www.alfredapp.com)
- macOS application of workflow optimization
  - cost money :(

## 4. Random Plugins
### [youtube-dl](https://github.com/rg3/youtube-dl)
- Like youtube clip converter, but without the ads and more command line

### oh-my-zsh
- allows to greater customization to your shell
- Lots of plug-ins
  - [osx](https://github.com/robbyrussell/oh-my-zsh/tree/master/plugins/osx)
  - [pj](https://github.com/robbyrussell/oh-my-zsh/tree/master/plugins/pj)
  - [thefuck](https://github.com/robbyrussell/oh-my-zsh/tree/master/plugins/thefuck)


### keycastr
- https://github.com/keycastr/keycastr

## 5. Honorable Mentions (Plugins)
- [Travs CI](https://travis-ci.org)
  - Integrate testing into your projects
- [Anaconda](https://www.anaconda.com/download/#macos)
  - Popular way to manage python modules / python versions
