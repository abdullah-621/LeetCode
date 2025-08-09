# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def zigzagLevelOrder(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[List[int]]
        """
        if not root:
            return []

        ans = []
        q = deque([root])

        left_to_right = True

        while q:
            l = len(q)
            temp = [0] * l

            for i in range(l):

                node = q.popleft()
                
                index = i if left_to_right else (l - 1 - i)
                temp[index] = node.val

                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            
            
            ans.append(temp)
            left_to_right = not left_to_right

        return ans
            