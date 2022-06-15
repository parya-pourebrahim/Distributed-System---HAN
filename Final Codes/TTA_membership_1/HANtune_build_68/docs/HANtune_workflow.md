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

## HANtune Branching Workflow
HANtune uses the Git Feature Branch Workflow. Therefore, there are 2 Long-Running Branches and countless Short-Lived topic branches.

![HANtune Workflow](/images/FeatureBranchWorkflow.png)

* The first and most Long-Running Branch: ![#F0A30A](https://via.placeholder.com/15/F0A30A/000000?text=+) **Master**
. No code should be committed directly to this branch. The Master branch
should only contain production code. You shouldn't work directly on this branch. Only tested features of the Develop 
branch should be integrated into the Master branch.
* The ![#7A7FFF](https://via.placeholder.com/15/7A7FFF/000000?text=+) **Develop** branch is the second Long-Running branch. Use this branch to integrate new features and merge 
them into the Master branch.

The real code change takes place in the ![#00DEDE](https://via.placeholder.com/15/00DEDE/000000?text=+) Feature Branches.
Every time when some code needs to be changed, a new feature branch should be created. Normally, a new feature branch should 
be derived from the latest code in the ![#7A7FFF](https://via.placeholder.com/15/7A7FFF/000000?text=+) **Develop** branch. 
It should have a topic name based on the ticket ID plus a short description of the feature. 
When work on a feature has finished, a Merge Request can be issued where the code change can be discussed and reviewed. 
The merge should have the ![#7A7FFF](https://via.placeholder.com/15/7A7FFF/000000?text=+) **Develop** branch as target branch. 
After reviewing has been approved, the merge can be completed.

When a number of new features have been added to the ![#7A7FFF](https://via.placeholder.com/15/7A7FFF/000000?text=+) **Develop**
branch and this code has been tested, a merge to the ![#F0A30A](https://via.placeholder.com/15/F0A30A/000000?text=+) **Master**
branch can take place. After a tag has been placed, the code can be taken into production. 
 

