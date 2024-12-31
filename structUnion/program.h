typedef enum {
  JAN=1, FEB=2, MAR=3, APR=4, MAY=5, JUN=6,
  JUL=7, AUG=8, SEP=9, OCT=10, NOV=11, DEC=12
} Month;

typedef struct {
  int day;
  Month month;
  int year;
} Date;

typedef struct {
  int age;
  float weight;
  char color[50];
  Date birthday;
} Duck;

// fields share the same memory
// contains only one of the 3 fields at any point in time
typedef union {
  int score;
  char letter;
  float gpa;
} Grade;