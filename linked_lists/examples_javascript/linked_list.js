
export class Node {
  constructor(v) {
    this.v = v
    this.next = null
  }
}

export class LinkedList {

  constructor() { this.head = null }

  append(number) {
    const newNode = new Node(number)
    if(this.head === null) { 
      this.head = newNode
      return
    }

    let c = this.head

    while(c.next !== null) {
      c = c.next
    }
  
    c.next = newNode
  }
  read() {
    let el = this.head
    while (el !== null) { 
      console.log(el.v)
      el = el.next
     }
  }
}

const list = new LinkedList()
list.append(15)
list.append(20)
list.append(500)

list.read()
