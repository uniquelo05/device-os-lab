#include "sync.h"
#include <stdio.h>
#include <assert.h>

static int shared_counter = 0;

void increment() {
    shared_counter++;
}

void test_sync() {
    shared_counter = 0;
    for (int i = 0; i < 1000; ++i) {
        sync_do_critical(increment);
    }
    printf("Shared counter: %d\n", shared_counter);
    assert(shared_counter == 1000);
    printf("Sync test passed!\n");
}

int main() {
    test_sync();
    return 0;
}
