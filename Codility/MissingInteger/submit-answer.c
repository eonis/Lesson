#include <string.h>

typedef struct _Node {
    int prev;
    int next;
} Node;

#define NEXT( node, n ) \
    (node)->next == 0 ? n + 1 : (node)->next

#define PREV( node, n ) \
    (node)->prev == 0 ? n - 1 : (node)->prev

int remove_link(int *head, Node *nodes, int num) {

    Node *node = nodes + num;

    int next = NEXT( node, num );
    int prev = PREV( node, num );

    if( prev < 0 ) {
        return 1;
    }

    (nodes + prev)->next = next;
    (nodes + next)->prev = prev;

    if( *head == num ) {
        *head = NEXT( nodes + num, num );
    }

    node->prev = node->next = -1;

    return 0;
}

int solution(int A[], int N) {

    int head, i, n;
    Node *nodes = NULL;

    nodes = (Node*)malloc( sizeof(Node) * (N+2));
    memset( nodes, 0, sizeof(Node) * (N+2));

    head = 1;

    for( i = 0; i < N; i++ ) {
        n = A[i];
        if( n > 0 && n <= N ) {
            remove_link( &head, nodes, n );
        }
    }

    if( nodes != NULL ) {
        free( nodes );
    }

    return head;
}
