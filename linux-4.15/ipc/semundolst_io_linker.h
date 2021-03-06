#ifndef __SEMUNDOLST_IO_LINKER__
#define __SEMUNDOLST_IO_LINKER__

#include <gdm/gdm_types.h>


struct semundo_id {
	int semid;
	struct semundo_id *next;
};

struct semundo_list_object {
	unique_id_t id;
	atomic_t refcnt;
	atomic_t semcnt;
	struct semundo_id *list;
};

extern struct iolinker_struct semundo_linker;

#endif
