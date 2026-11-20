#ifndef __KSU_H_APK_V2_SIGN
#define __KSU_H_APK_V2_SIGN

#include <linux/types.h>
#include <linux/compiler.h>

enum ksu_manager_type {
	KSU_MANAGER_UNKNOWN = 0,
	KSU_MANAGER_KSUN,
	KSU_MANAGER_BKSU,
	KSU_MANAGER_ORIGINSU,
	KSU_MANAGER_FINASU,
	KSU_MANAGER_XXSU,
};

bool is_manager_apk(char *path);
void ksu_set_manager_type(enum ksu_manager_type type);
int get_pkg_from_apk_dir_path(char *pkg, const char *path);

#endif
