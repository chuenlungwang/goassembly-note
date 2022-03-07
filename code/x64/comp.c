#define COMP >

typedef unsigned long data_t;

int comp(data_t a, data_t b) {
    return a COMP b;
}

#define TEST >=
typedef long test_data_t;

int test(test_data_t a) {
    return a TEST 0;
}
