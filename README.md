# ROS Template
A template repo. So that I don't have to repeat the same process every time I want to code a ROS node.


## Prerequisites

You will need a Python2 virtualenv:
```bash
sudo pip2 install -U virtualenv virtualenvwrapper
```
On Ubuntu do:
```bash
echo "# Virtual Environment Wrapper"  >> ~/.bashrc
echo "source /usr/local/bin/virtualenvwrapper.sh" >> ~/.bashrc
source ~/.bashrc
```
And on Mac:
```bash
echo "# Virtual Environment Wrapper"  >> ~/.bash_profile
echo "source /usr/local/bin/virtualenvwrapper.sh" >> ~/.bash_profile
source ~/.bash_profile
```

Then finally:
```bash
mkvirtualenv <project_name>-py2 -p python2
workon <project_name>-py2
```

Where once activated you install from the repo:
```bash
pip install -r requirements.txt
```

## Setup

Clone this repository into `~/catkin_ws/src` and run `catkin build` from `~/catkin_ws`.

