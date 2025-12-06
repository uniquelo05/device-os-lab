#include <stdio.h>
#include <pthread.h>

static pthread_mutex_t sync_mutex = PTHREAD_MUTEX_INITIALIZER;

void sync_lock() {
    pthread_mutex_lock(&sync_mutex);
}

void sync_unlock() {
    pthread_mutex_unlock(&sync_mutex);
}

void sync_do_critical(void (*func)(void)) {
    sync_lock();
    func();
    sync_unlock();
}
