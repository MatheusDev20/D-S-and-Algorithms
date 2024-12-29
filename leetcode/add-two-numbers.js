/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */ 
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */

function ListNode(val, next) {
  this.val = (val===undefined ? 0 : val)
  this.next = (next===undefined ? null : next)
}

const arrayToLinkedList = (arr) => {
  if (arr.length === 0) return null;

  const head = new ListNode(arr[0]);
  let current = head;

  for (let i = 1; i < arr.length; i++) {
    current.next = new ListNode(arr[i]); 
    current = current.next;
  }

  return head;
};

const printLL = (head) => {
  let current = head;
  const result = [];
  while (current) {
    result.push(current.val); 
    current = current.next;
  }

  console.log(result.join(" -> "));
}

const LL = arrayToLinkedList([1,2,3,4,5])
printLL(LL)

const addTwoNumbers = function(l1, l2) { };