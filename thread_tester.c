/* YOUR NAME HERE
 * CSCI 4100
 * Assignment 4
 * This program tests a bounded buffer by creating multiple sending and
 * receiving threads
 */

#include <stdio.h>
#include <stdlib.h>
#include "bbuff.h"

/* Structure to hold thread arguments */
struct t_args {

  /* Thread ID */
  int t_id;

  /* Number of messages to send/receive */
  int num_msgs;

  /* Bounded buffer to use */
  struct bbuff * buffer;
};

/* Initialize t_args structure */
void t_args_init(struct t_args *args, int t_id, int num_msgs, struct bbuff * buffer);

/* Function for sending thread to execute */
void * send_msgs(void * args);

/* Function for receiving thread to execute */
void * receive_msgs(void * args);

/* Main function */
int main(int argc, char *argv[]) {
  /* YOUR CODE HERE */
  pthread_t send;
  pthread_t receive;
  int s;

  struct bbuff *buffer = malloc(sizeof(struct bbuff));
  bb_init(buffer);

  struct t_args *send_args = malloc(sizeof(struct t_args));
  t_args_init(send_args, 1, 10, buffer);

  struct t_args *recv_args;
  t_args_init(recv_args, 2, 10, buffer);

  s = pthread_create(&send, NULL, send_msgs, &send_args);
  if (s!= 0)
    fprintf(stderr, "%s", "Thread terminated unexpectedly.\n");
  s = pthread_join(send, NULL);

  return 0;
}

/* Initialize t_args structure */
void t_args_init(struct t_args *args, int t_id, int num_msgs, struct bbuff * buffer) {
  /* YOUR CODE HERE */
  args->t_id = t_id;
  args->num_msgs = num_msgs;
  args->buffer = buffer;
}

/* Function for sending thread to execute */
void * send_msgs(void * args) {
  /* YOUR CODE HERE */
  
}

/* Function for receiving thread to execute */
void * receive_msgs(void * args) {
  /* YOUR CODE HERE */
}
