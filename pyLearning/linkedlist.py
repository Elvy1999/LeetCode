class Node:
  def __init__(self,data):
    self.data = data
    self.next = None
    
class LinkedList:
  def __init__(self) -> None:
    self.head = None
  
  def insertBeginning(self,data):
    new_node = Node(data)
    new_node.next = self.head
    self.head = new_node
  
  def insertEnd(self,data):
    new_node = Node(data)
    if(self.head == None):
      self.head = new_node
      return
    tempNode = self.head
    while(tempNode.next != None):
      tempNode = tempNode.next
    tempNode.next = new_node
    
  def showLinkedList(self):
      temp = self.head
      while temp:
          print(f"{temp.data} -> ", end="")  # Print on the same line
          temp = temp.next
      print("None")  # End the list with "None"


  