/* YOUR NAME HERE
 * CSCI 4100
 * Assignment 4
 * Source file for bounded buffer implementation
 */

#include <stdio.h>
#include <stdlib.h>
#include "bbuff.h"

/* Initiailze a message structure */
void bb_init_msg(struct bb_msg *msg, int t_id, int m_id) {
  /* YOUR CODE HERE */
}

/* Copy the source message to the destination message */
void bb_copy_msg(struct bb_msg * source, struct bb_msg * destination) {
  /* YOUR CODE HERE */
}

/* Display the contents of a message along with the id of the receiver */
void bb_display_msg(struct bb_msg *msg, int receiver) {
  /* YOUR CODE HERE */
}

/* Initialize the bounded buffer */
void bb_init(struct bbuff * buffer) {
  /* YOUR CODE HERE */
  pthread_mutex_t lock;
  buffer->in = 0;
  buffer->out = 0;
  buffer->lock = lock;
}

/* Send a message to a bounded buffer */
void bb_send(struct bbuff * buffer, struct bb_msg * message) {
  /* YOUR CODE HERE */
  int t = pthread_mutex_lock(buffer->lock);
  if (t != 0)
    fprintf(stderr, "%s", "Unable to acquire lock.\n");
  if (buffer->in == buffer->out){

  } else {

  }
}

/* Receive a message from a bounded buffer */
void bb_receive(struct bbuff *buffer, struct bb_msg * message) {
  /* YOUR CODE HERE */
}
