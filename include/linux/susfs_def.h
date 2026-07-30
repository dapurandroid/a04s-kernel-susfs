#ifndef _LINUX_SUSFS_DEF_H
#define _LINUX_SUSFS_DEF_H

/* 1. Konstanta Inti Inode & Path (Standar Simonpunk) */
#ifndef INODE_STATE_SUS_KSTAT
#define INODE_STATE_SUS_KSTAT (1 << 28)
#endif
#ifndef SUSFS_MAX_LEN_PATHNAME
#define SUSFS_MAX_LEN_PATHNAME 256
#endif
#ifndef TASK_STRUCT_NON_ROOT_USER_APP_PROC
#define TASK_STRUCT_NON_ROOT_USER_APP_PROC (1 << 0)
#endif

/* 2. Namespace Flags */
#ifndef CL_COPY_MNT_NS
#define CL_COPY_MNT_NS (1<<23)
#endif
#ifndef CL_ZYGOTE_COPY_MNT_NS
#define CL_ZYGOTE_COPY_MNT_NS (1<<24)
#endif

/* 3. Path KSU-Next Modern */
#define DATA_ADB_UMOUNT_FOR_ZYGOTE_SYSTEM_PROCESS "/data/adb/ksu/umount_zygote_system_process"
#define DATA_ADB_NO_AUTO_ADD_SUS_BIND_MOUNT "/data/adb/ksu/no_auto_add_sus_bind_mount"
#define DATA_ADB_NO_AUTO_ADD_SUS_KSU_DEFAULT_MOUNT "/data/adb/ksu/no_auto_add_sus_ksu_default_mount"
#define DATA_ADB_NO_AUTO_ADD_TRY_UMOUNT_FOR_BIND_MOUNT "/data/adb/ksu/no_auto_add_try_umount_for_bind_mount"

/* 4. Perintah KSU-Next Modern (Lengkap 1-17) */
#define CMD_SUSFS_ADD_SUS_PATH 1
#define CMD_SUSFS_ADD_SUS_MOUNT 2
#define CMD_SUSFS_ADD_SUS_KSTAT 3
#define CMD_SUSFS_UPDATE_SUS_KSTAT 4
#define CMD_SUSFS_ADD_SUS_KSTAT_STATICALLY 5
#define CMD_SUSFS_ADD_TRY_UMOUNT 6
#define CMD_SUSFS_RUN_UMOUNT_FOR_CURRENT_MNT_NS 7
#define CMD_SUSFS_SET_UNAME 8
#define CMD_SUSFS_ENABLE_LOG 9
#define CMD_SUSFS_SET_CMDLINE_OR_BOOTCONFIG 10
#define CMD_SUSFS_ADD_OPEN_REDIRECT 11
#define CMD_SUSFS_SUS_SU 12
#define CMD_SUSFS_SHOW_VERSION 13
#define CMD_SUSFS_SHOW_ENABLED_FEATURES 14
#define CMD_SUSFS_SHOW_VARIANT 15
#define CMD_SUSFS_IS_SUS_SU_READY 16
#define CMD_SUSFS_SHOW_SUS_SU_WORKING_MODE 17

#define SUSFS_FAKE_CMDLINE_OR_BOOTCONFIG_SIZE 4096

/* 5. Variabel Penambal Error Kompilasi sizeof() & Versi */
#define SUSFS_VERSION "1.5.5"
#define SUSFS_VARIANT "A04s-GKI"
struct st_susfs_open_redirect { int dummy; };
struct st_sus_su { int dummy; };

#endif /* _LINUX_SUSFS_DEF_H */
