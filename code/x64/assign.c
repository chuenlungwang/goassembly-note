typedef long src_t;
typedef char dest_t;

void assign(src_t *sp, dest_t *dp) {
    *dp = (dest_t)*sp;
}
