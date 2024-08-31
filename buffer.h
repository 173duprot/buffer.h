/* no need for stdlib */

typedef void *buffer_t; // Page-size
#define buffer(x) ((buffer_t) &(char[x]){0})
