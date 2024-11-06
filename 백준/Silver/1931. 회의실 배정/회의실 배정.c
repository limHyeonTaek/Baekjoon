#include <stdio.h>
#include <stdlib.h>

typedef struct s_metting{
    int start;
    int end;
} t_meeting;

int compare(const void *a, const void *b) {
    t_meeting *m1 = (t_meeting *)a;
    t_meeting *m2 = (t_meeting *)b;
    if (m1->end == m2->end)
        return m1->start - m2->start;
    return m1->end - m2->end;
}

int main() {
    int N;
    scanf("%d", &N);

    t_meeting *meetings = (t_meeting *)malloc(N * sizeof(t_meeting));

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &meetings[i].start, &meetings[i].end);
    }

    qsort(meetings, N, sizeof(t_meeting), compare);

    int count = 0;
    int end_time = 0;

    for (int i = 0; i < N; i++) {
        if (meetings[i].start >= end_time) {
            end_time = meetings[i].end;
            count++;
        }
    }

    printf("%d\n", count);

    free(meetings);
    return 0;
}