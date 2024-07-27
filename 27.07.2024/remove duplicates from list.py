class Solution(object):
    def deleteDuplicates(self, head):
        if not head:
            return
        temp = head.next
        prevNode = head.val
        prevP = head

        while temp:
            if temp.val != prevNode:
                prevP.next = temp
                prevP= prevP.next
                prevNode = temp.val
            temp = temp.next
        
        prevP.next = None
        return head
