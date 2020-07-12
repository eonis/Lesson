# MissingInteger

Find the minimal positive integer not occurring in a given sequence.

## Task description

Write a function:

```c
int solution(int A[], int N);
```

that, given an array A of N integers, returns the smallest positive integer (greater than 0) that does not occur in A.

For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.

Given A = [1, 2, 3], the function should return 4.

Given A = [−1, −3], the function should return 1.

Write an efficient algorithm for the following assumptions:

* N is an integer within the range [1..100,000];
* each element of array A is an integer within the range [−1,000,000..1,000,000].

Complexity:

* expected worst-case time complexity is O(N);
* expected worst-case space complexity is O(N), beyond input storage (not counting the storage required for input arguments).

https://app.codility.com/programmers/lessons/4-counting_elements/missing_integer/

***

위 문제를 Set 컨테이너이나 HashSet도 좋지만 Linked list로 한번의 for로 풀어 보았다.   
Linked list를 생성하지 않고 가상의 Linked list로 문제를 접근했는데,   
개인적으로 2시간을 제한했던 시간을 초과된 점은 아쉬운 부분이다.
