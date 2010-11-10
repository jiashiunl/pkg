#ifndef _PKGDB_H
#define _PKGDB_H

struct pkgdb {
	sqlite3 *sqlite;
	sqlite3_stmt *stmt;
	int errnum;
	char errstring[1024];
};

int pkgdb_query_dep(struct pkg *, struct pkg *);
int pkgdb_query_rdep(struct pkg *, struct pkg *);
int pkgdb_query_conflicts(struct pkg *, struct pkg *);
int pkgdb_query_files(struct pkg *, const char **, const char **);
void pkgdb_set_error(struct pkgdb *, int, const char *, ...);

#endif
