/* no need for stdlib */
/* no need for arena allocators either */

// Use buffer(4096) for a page-sized buffer.

typedef void *buffer_t; // Page-size
#define buffer(x) ((buffer_t) &(char[x]){0})
