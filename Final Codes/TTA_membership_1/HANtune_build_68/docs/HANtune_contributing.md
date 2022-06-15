>Copyright (c) 2020 [HAN University of Applied Sciences]
>
>Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
>
>The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
>
>THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING 
BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, 
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE 
OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

## HANtune Contribution guidelines: Fork and Branch model
If you are going to create a feature or fix a bug in HANtune, please follow this guideline.

At first, do some preparation
1. First create a fork in gitlab, using the **Fork** button in GitLab.
2. Clone the forked repository: ```git clone https://gitlab.com/{YourUsername}/hantune.git``` Note: YourUserName instead of AutomotiveResearch.
3. Connect the forked repo to the original repo. From the directory of the forked repo enter command:<br>
 ```git remote add upstream https://gitlab.com/AutomotiveResearch/hantune.git``` 
to connect to the original HANtune project. <br>
Check if everything went well:  ```git remote -v``` should output:
```
    origin  https://gitlab.com/{YourUsername}/hantune.git (fetch)
    origin  https://gitlab.com/{YourUsername}/hantune.git (push)
    upstream https://gitlab.com/AutomotiveResearch/hantune.git (fetch)
    upstream https://gitlab.com/AutomotiveResearch/hantune.git (push) 
``` 
Command: ```git fetch origin``` will fetch everything from your forked repo.<br> 
Command: ```git fetch upstream``` will fetch everything from AutomotiveResearch repo 

Create your own branch in the forked repo.
* ```git checkout master```  It is best to start your work based on the latest stable version of HANtune
* ```git checkout -b new-feature-branch``` Start a new branch based on your new feature.

Now, do your work, create a branch and work on your codes.
* make some changes on your code ....
* commit your changes: ```git commit -m"comment new feature changes..."```
* work some more....
* commit some more ```commit -m"Further improvements"```
* push all to your forked repo in GitLab: ```git push origin new-feature-branch```

When ready to push your branch to AutomotiveResearch.
* push to Automotive repo: ```git push upstream new-feature-branch```

**Thanks! We appreciate it!**

Then, in AutomotiveResearch repo issue a merge request by pressing **Merge Requests**<br>
    Source: your fork, new-feature-branch
    Target: AutomotiveResearch/hantune, new-feature-branch

In general, we will:      
* create a new branch in develop,
* evaluate your new-feature-branch
* merge it back into our develop branch
