#ifndef SERVICES_SYNC_H
#define SERVICES_SYNC_H

void sync_lock();
void sync_unlock();
void sync_do_critical(void (*func)(void));

#endif // SERVICES_SYNC_H
