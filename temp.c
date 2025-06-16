#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PAGES 10000

#define MAX_FRAMES 10

typedef struct {
    int page_num;
    int valid;
    int frame_num;
    int last_used;
    int arrival_time;
} page_entry;

int page_faults = 0, time = 0;
int search_page(page_entry table[], int frames[], int num_frames, int page) {
    
    for (int i = 0; i < num_frames; i++) {
        if (frames[i] == page) return i;
    }
    return -1;
}
int find_lru(page_entry table[], int frames[], int num_frames) {
    int lru_index = 0, min_time = table[frames[0]].last_used;
    
    for (int i = 1; i < num_frames; i++) {
        if (table[frames[i]].last_used < min_time) {
            min_time = table[frames[i]].last_used;
            lru_index = i;
        }
    }
    return lru_index;
}



int find_fifo(page_entry table[], int frames[], int num_frames) {
    
    int fifo_index = 0, min_time = table[frames[0]].arrival_time;
    for (int i = 1; i < num_frames; i++) {
        if (table[frames[i]].arrival_time < min_time) {
            min_time = table[frames[i]].arrival_time;
            fifo_index = i;
        }
    }
    return fifo_index;
}



int find_optimal(page_entry table[], int frames[], int num_frames, int future[], int n, int index) {
    int max_dist = -1, victim = -1;
    
    for (int i = 0; i < num_frames; i++) {
        int dist = 0, found = 0;
        for (int j = index + 1; j < n; j++) {
            if (future[j] == frames[i]) {
                found = 1;
                break;
            }
            dist++;
        }
        if (!found) return i;
        if (dist > max_dist) {
            max_dist = dist;
            victim = i;
        }
    }
    return victim;
}
void simulate(int reference[], int n, int num_frames, char algo[]) {
    page_entry table[MAX_PAGES] = {0};  
    
    int frames[MAX_FRAMES] = {0};           
    int occupied = 0;

    for (int i = 0; i < n; i++) {
        int page = reference[i];
        time++;

        if (search_page(table, frames, occupied, page) != -1) {
            table[page].last_used = time;
            continue;
        }

        page_faults++;
        if (occupied < num_frames) {
            frames[occupied] = page;
            table[page].valid = 1;
            
            table[page].frame_num = occupied;
            table[page].last_used = time;
            table[page].arrival_time = time;
            occupied++;
        } else {
            int replace_index;
            if (algo[0] == 'L') replace_index = find_lru(table, frames, num_frames);
            else if (algo[0] == 'F') replace_index = find_fifo(table, frames, num_frames);
            else replace_index = find_optimal(table, frames, num_frames, reference, n, i);

            int old_page = frames[replace_index];
            table[old_page].valid = 0;

            frames[replace_index] = page;
            table[page].valid = 1;
            
            table[page].frame_num = replace_index;
            table[page].last_used = time;
            table[page].arrival_time = time;
        }
    }

    printf("\n    Simulation: %s    \n", algo);
    printf("Final Page Table:\n");
    for (int i = 0; i < MAX_PAGES; i++) {
        if (table[i].valid) {
            printf("Page %d → Frame %d | Valid\n", i, table[i].frame_num);
        } else if (table[i].arrival_time != 0) {  
            printf("Page %d → Invalid \n", i);
        }
    }
    
    printf("Page Faults: %d\n", page_faults);
}

int main() {
    int n, frames;
    int reference_string[MAX_PAGES];
    printf("Enter number of pages in reference string: ");
    scanf("%d", &n);
    while (getchar() != '\n'); 

    printf("Enter reference string (one per line):\n");
    for (int i = 0; i < n; i++) {
        printf("Page %d: ", i + 1);
        scanf("%d", &reference_string[i]);
    }
    printf("Enter number of frames: ");
    scanf("%d", &frames);
    page_faults = 0; time = 0;
    simulate(reference_string, n, frames, "LRU");
    page_faults = 0; time = 0;
    simulate(reference_string, n, frames, "FIFO");
    page_faults = 0; time = 0;
    simulate(reference_string, n, frames, "Optimal");

    return 0;
}