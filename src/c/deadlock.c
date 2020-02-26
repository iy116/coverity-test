#include <pthread.h>

pthread_mutex_t mutex1;
pthread_mutex_t mutex2;

void deadlock1() {
    pthread_mutex_lock(&mutex1);
    pthread_mutex_lock(&mutex2);
    pthread_mutex_unlock(&mutex1);
    pthread_mutex_unlock(&mutex2);
}

void deadlock2() {
    pthread_mutex_lock(&mutex2);
    pthread_mutex_lock(&mutex1);
    pthread_mutex_unlock(&mutex1);
    pthread_mutex_unlock(&mutex2);
}

int main() {
  deadlock1();
  deadlock2();

  return 0;
}
