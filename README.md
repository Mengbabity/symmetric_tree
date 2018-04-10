# symmetric_tree

判断一棵树是否左右对称。

bool isSymmetric(TreeNode*root)
首先判断是否是一棵空树，若为空返回true；不为空调用mirror(p,q)

bool mirror(TreeNode*p,TreeNode*q)
if p与q都为空，返回true；   
else if 有一个为空，返回false；   //过了这一步判断，说明均不为空，接下来判断数值是否相等
若两个数值不相等，返回false；
递归 mirror(p的左，q的右)&&mirror(p的右，q的左)；

小tip：中止递归的条件均为NULL
