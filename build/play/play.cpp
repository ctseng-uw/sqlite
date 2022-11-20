#include "../sqlite3.h"
#include <stdio.h>

int cb(void *, int, char **ctext, char **) {
  char **cur = ctext;
  while (*cur != NULL) {
    printf("%s ", *cur);
    cur++;
  }
  return 0;
}

int main() {
  sqlite3 *db = nullptr;
  sqlite3_open("./database.db", &db);
  char *errmsg = nullptr;
  sqlite3_exec(db, "select * from X, Y where X.b=Y.d", &cb, nullptr, &errmsg);
  if (errmsg)
    puts(errmsg);
}
