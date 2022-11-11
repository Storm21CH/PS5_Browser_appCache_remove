#include "ftps4.h"//inkl resolve.h

#define PAYLOAD_NAME "Remove Browser Cache v1.0"


// https://github.com/OSM-Made/PS4-Notify
void printf_notification(const char* fmt, ...) {
    SceNotificationRequest noti_buffer;

    va_list args;
    va_start(args, fmt);
    f_vsprintf(noti_buffer.message, fmt, args);
    va_end(args);

    noti_buffer.type = 0;
    noti_buffer.unk3 = 0;
    noti_buffer.use_icon_image_uri = 1;
    noti_buffer.target_id = -1;
    f_strcpy(noti_buffer.uri, "cxml://psnotification/tex_icon_system");

    f_sceKernelSendNotificationRequest(0, (SceNotificationRequest * ) & noti_buffer, sizeof(noti_buffer), 0);
}


//File Check Funktion Datei vorhanden oder nicht?
int check_file_exists(const char* filename) {
    struct stat buffer;
    int exist = f_stat(filename, &buffer);
    if (exist == 0)
        return 1;
    else
        return 0;
}


//Browser Cache Dateien für ausgelesene User von get_user_folders löschen
int del_user_files(char* userfolder)
{

    //NKCookie.jar.db    /user/home/user_folder/webkit/shell/NKCookie.jar.db Datei finden und löschen
    char user_NKCookie_jar_db[256];
    f_strcpy(user_NKCookie_jar_db, "/user/home/");
    f_strcat(user_NKCookie_jar_db, userfolder);
    f_strcat(user_NKCookie_jar_db, "/webkit/shell/NKCookie.jar.db");

    //Datei finden und je nachdem was machen
    if (check_file_exists(user_NKCookie_jar_db))
    {
        //gefunden
        f_unlink(user_NKCookie_jar_db);//Datei löschen
        //printf_notification("Datei entfernt!");
    }
    else
    {
        //nicht gefunden
        //printf_notification("Datei nicht gefunden!");
    }


    //NKCookie.jar.db-shm    /user/home/user_folder/webkit/shell/NKCookie.jar.db-shm Datei finden und löschen
    char user_NKCookie_jar_db_shm[256];
    f_strcpy(user_NKCookie_jar_db_shm, "/user/home/");
    f_strcat(user_NKCookie_jar_db_shm, userfolder);
    f_strcat(user_NKCookie_jar_db_shm, "/webkit/shell/NKCookie.jar.db-shm");

    //Datei finden und je nachdem was machen
    if (check_file_exists(user_NKCookie_jar_db_shm))
    {
        //gefunden
        f_unlink(user_NKCookie_jar_db_shm);//Datei löschen
        //printf_notification("Datei entfernt!");
    }
    else
    {
        //nicht gefunden
        //printf_notification("Datei nicht gefunden!");
    }


    //NKCookie.jar.db-wal    /user/home/user_folder/webkit/shell/NKCookie.jar.db-wal Datei finden und löschen
    char user_NKCookie_jar_db_wal[256];
    f_strcpy(user_NKCookie_jar_db_wal, "/user/home/");
    f_strcat(user_NKCookie_jar_db_wal, userfolder);
    f_strcat(user_NKCookie_jar_db_wal, "/webkit/shell/NKCookie.jar.db-wal");

    //Datei finden und je nachdem was machen
    if (check_file_exists(user_NKCookie_jar_db_wal))
    {
        //gefunden
        f_unlink(user_NKCookie_jar_db_wal);//Datei löschen
        //printf_notification("Datei entfernt!");
    }
    else
    {
        //nicht gefunden
        //printf_notification("Datei nicht gefunden!");
    }


    //ApplicationCache.db    /user/home/user_folder/webkit/shell/appcache/ApplicationCache.db Datei finden und löschen
    char user_ApplicationCache_db[256];
    f_strcpy(user_ApplicationCache_db, "/user/home/");
    f_strcat(user_ApplicationCache_db, userfolder);
    f_strcat(user_ApplicationCache_db, "/webkit/shell/appcache/ApplicationCache.db");

    //Datei finden und je nachdem was machen
    if (check_file_exists(user_ApplicationCache_db))
    {
        //gefunden
        f_unlink(user_ApplicationCache_db);//Datei löschen
        //printf_notification("Datei entfernt!");
    }
    else
    {
        //nicht gefunden
        //printf_notification("Datei nicht gefunden!");
    }


    //ApplicationCache.db-shm    /user/home/user_folder/webkit/shell/appcache/ApplicationCache.db-shm Datei finden und löschen
    char user_ApplicationCache_db_shm[256];
    f_strcpy(user_ApplicationCache_db_shm, "/user/home/");
    f_strcat(user_ApplicationCache_db_shm, userfolder);
    f_strcat(user_ApplicationCache_db_shm, "/webkit/shell/appcache/ApplicationCache.db-shm");

    //Datei finden und je nachdem was machen
    if (check_file_exists(user_ApplicationCache_db_shm))
    {
        //gefunden
        f_unlink(user_ApplicationCache_db_shm);//Datei löschen
        //printf_notification("Datei entfernt!");
    }
    else
    {
        //nicht gefunden
        //printf_notification("Datei nicht gefunden!");
    }


    //ApplicationCache.db-wal    /user/home/user_folder/webkit/shell/appcache/ApplicationCache.db-wal Datei finden und löschen
    char user_ApplicationCache_db_wal[256];
    f_strcpy(user_ApplicationCache_db_wal, "/user/home/");
    f_strcat(user_ApplicationCache_db_wal, userfolder);
    f_strcat(user_ApplicationCache_db_wal, "/webkit/shell/appcache/ApplicationCache.db-wal");

    //Datei finden und je nachdem was machen
    if (check_file_exists(user_ApplicationCache_db_wal))
    {
        //gefunden
        f_unlink(user_ApplicationCache_db_wal);//Datei löschen
        //printf_notification("Datei entfernt!");
    }
    else
    {
        //nicht gefunden
        //printf_notification("Datei nicht gefunden!");
    }


    //https_manuals.playstation.net_0.localstorage    /user/home/user_folder/webkit/shell/local/https_manuals.playstation.net_0.localstorage Datei finden und löschen
    char user_https_manuals_playstation_net_0_localstorage[256];
    f_strcpy(user_https_manuals_playstation_net_0_localstorage, "/user/home/");
    f_strcat(user_https_manuals_playstation_net_0_localstorage, userfolder);
    f_strcat(user_https_manuals_playstation_net_0_localstorage, "/webkit/shell/local/https_manuals.playstation.net_0.localstorage");

    //Datei finden und je nachdem was machen
    if (check_file_exists(user_https_manuals_playstation_net_0_localstorage))
    {
        //gefunden
        f_unlink(user_https_manuals_playstation_net_0_localstorage);//Datei löschen
        //printf_notification("Datei entfernt!");
    }
    else
    {
        //nicht gefunden
        //printf_notification("Datei nicht gefunden!");
    }


    //https_manuals.playstation.net_0.localstorage-shm    /user/home/user_folder/webkit/shell/local/https_manuals.playstation.net_0.localstorage-shm Datei finden und löschen
    char user_https_manuals_playstation_net_0_localstorage_smh[256];
    f_strcpy(user_https_manuals_playstation_net_0_localstorage_smh, "/user/home/");
    f_strcat(user_https_manuals_playstation_net_0_localstorage_smh, userfolder);
    f_strcat(user_https_manuals_playstation_net_0_localstorage_smh, "/webkit/shell/local/https_manuals.playstation.net_0.localstorage-shm");

    //Datei finden und je nachdem was machen
    if (check_file_exists(user_https_manuals_playstation_net_0_localstorage_smh))
    {
        //gefunden
        f_unlink(user_https_manuals_playstation_net_0_localstorage_smh);//Datei löschen
        //printf_notification("Datei entfernt!");
    }
    else
    {
        //nicht gefunden
        //printf_notification("Datei nicht gefunden!");
    }


    //https_manuals.playstation.net_0.localstorage-wal    /user/home/user_folder/webkit/shell/local/https_manuals.playstation.net_0.localstorage-wal Datei finden und löschen
    char user_https_manuals_playstation_net_0_localstorage_wal[256];
    f_strcpy(user_https_manuals_playstation_net_0_localstorage_wal, "/user/home/");
    f_strcat(user_https_manuals_playstation_net_0_localstorage_wal, userfolder);
    f_strcat(user_https_manuals_playstation_net_0_localstorage_wal, "/webkit/shell/local/https_manuals.playstation.net_0.localstorage-wal");

    //Datei finden und je nachdem was machen
    if (check_file_exists(user_https_manuals_playstation_net_0_localstorage_wal))
    {
        //gefunden
        f_unlink(user_https_manuals_playstation_net_0_localstorage_wal);//Datei löschen
        //printf_notification("Datei entfernt!");
    }
    else
    {
        //nicht gefunden
        //printf_notification("Datei nicht gefunden!");
    }


    //full_browsing_session_resourceLog.plist    /user/home/user_folder/webkit/shell/resourceloadstatistics/full_browsing_session_resourceLog.plist Datei finden und löschen
    char user_full_browsing_session_resourceLog_plist[256];
    f_strcpy(user_full_browsing_session_resourceLog_plist, "/user/home/");
    f_strcat(user_full_browsing_session_resourceLog_plist, userfolder);
    f_strcat(user_full_browsing_session_resourceLog_plist, "/webkit/shell/resourceloadstatistics/full_browsing_session_resourceLog.plist");

    //Datei finden und je nachdem was machen
    if (check_file_exists(user_full_browsing_session_resourceLog_plist))
    {
        //gefunden
        f_unlink(user_full_browsing_session_resourceLog_plist);//Datei löschen
        //printf_notification("Datei entfernt!");
    }
    else
    {
        //nicht gefunden
        //printf_notification("Datei nicht gefunden!");
    }

    return 0;
}


//Alle User Ordner holen und an del_user_files weitergeben
int get_user_folders()
{
    DIR* folder;
    struct dirent* entry;

    folder = f_opendir("/user/home");
    if (folder == NULL)
    {
        printf_notification("Unable to read directory...");
        return 1;
    }

    while ((entry = f_readdir(folder)))
    {
        //Wenn . und .. nicht auswerten
        if (f_strcmp(entry->d_name, ".") == 0 || f_strcmp(entry->d_name, "..") == 0) {

            continue;
        }

        //Debug Anzeige direkt String OK
        //printf_notification("%s", entry->d_name);

        char user_folder[256];
        f_sprintf(user_folder, "%s", entry->d_name);

        //Debug Anzeige String to char OK
        //printf_notification(user_folder);

        //Dateien für alle User löschen
        del_user_files(user_folder);
    }

    f_closedir(folder);

    return 0;
}


//Main Payload init
int payload_main(struct payload_args *args) {
    dlsym_t *dlsym = args->dlsym;

    int libKernel = 0x2001;


    dlsym(libKernel, "sceKernelLoadStartModule", &f_sceKernelLoadStartModule);
    dlsym(libKernel, "sceKernelDebugOutText", &f_sceKernelDebugOutText);
    dlsym(libKernel, "sceKernelSendNotificationRequest", &f_sceKernelSendNotificationRequest);
    dlsym(libKernel, "sceKernelUsleep", &f_sceKernelUsleep);
    dlsym(libKernel, "scePthreadMutexLock", &f_scePthreadMutexLock);
    dlsym(libKernel, "scePthreadMutexUnlock", &f_scePthreadMutexUnlock);
    dlsym(libKernel, "scePthreadExit", &f_scePthreadExit);
    dlsym(libKernel, "scePthreadMutexInit", &f_scePthreadMutexInit);
    dlsym(libKernel, "scePthreadCreate", &f_scePthreadCreate);
    dlsym(libKernel, "scePthreadMutexDestroy", &f_scePthreadMutexDestroy);
    dlsym(libKernel, "scePthreadJoin", &f_scePthreadJoin);
    dlsym(libKernel, "socket", &f_socket);
    dlsym(libKernel, "bind", &f_bind);
    dlsym(libKernel, "listen", &f_listen);
    dlsym(libKernel, "accept", &f_accept);
    dlsym(libKernel, "open", &f_open);
    dlsym(libKernel, "read", &f_read);
    dlsym(libKernel, "write", &f_write);
    dlsym(libKernel, "close", &f_close);
    dlsym(libKernel, "stat", &f_stat);
    dlsym(libKernel, "fstat", &f_fstat);
    dlsym(libKernel, "rename", &f_rename);
    dlsym(libKernel, "rmdir", &f_rmdir);
    dlsym(libKernel, "mkdir", &f_mkdir);
    dlsym(libKernel, "getdents", &f_getdents);
    dlsym(libKernel, "unlink", &f_unlink);
    dlsym(libKernel, "readlink", &f_readlink);
    dlsym(libKernel, "lseek", &f_lseek);
    dlsym(libKernel, "puts", &f_puts);
    dlsym(libKernel, "mmap", &f_mmap);
    dlsym(libKernel, "munmap", &f_munmap);
    dlsym(libKernel, "_read", &f__read);

    int libNet = f_sceKernelLoadStartModule("libSceNet.sprx", 0, 0, 0, 0, 0);
    dlsym(libNet, "sceNetSocket", &f_sceNetSocket);
    dlsym(libNet, "sceNetConnect", &f_sceNetConnect);
    dlsym(libNet, "sceNetHtons", &f_sceNetHtons);
    dlsym(libNet, "sceNetAccept", &f_sceNetAccept);
    dlsym(libNet, "sceNetSend", &f_sceNetSend);
    dlsym(libNet, "sceNetInetNtop", &f_sceNetInetNtop);
    dlsym(libNet, "sceNetSocketAbort", &f_sceNetSocketAbort);
    dlsym(libNet, "sceNetBind", &f_sceNetBind);
    dlsym(libNet, "sceNetListen", &f_sceNetListen);
    dlsym(libNet, "sceNetSocketClose", &f_sceNetSocketClose);
    dlsym(libNet, "sceNetHtonl", &f_sceNetHtonl);
    dlsym(libNet, "sceNetInetPton", &f_sceNetInetPton);
    dlsym(libNet, "sceNetGetsockname", &f_sceNetGetsockname);
    dlsym(libNet, "sceNetRecv", &f_sceNetRecv);
    dlsym(libNet, "sceNetErrnoLoc", &f_sceNetErrnoLoc);
    dlsym(libNet, "sceNetSetsockopt", &f_sceNetSetsockopt);

    int libC = f_sceKernelLoadStartModule("libSceLibcInternal.sprx", 0, 0, 0, 0, 0);
    dlsym(libC, "vsprintf", &f_vsprintf);
    dlsym(libC, "memset", &f_memset);
    dlsym(libC, "sprintf", &f_sprintf);
    dlsym(libC, "snprintf", &f_snprintf);
    dlsym(libC, "snprintf_s", &f_snprintf_s);
    dlsym(libC, "strcat", &f_strcat);
    dlsym(libC, "free", &f_free);
    dlsym(libC, "memcpy", &f_memcpy);
    dlsym(libC, "strcpy", &f_strcpy);
    dlsym(libC, "strncpy", &f_strncpy);
    dlsym(libC, "sscanf", &f_sscanf);
    dlsym(libC, "malloc", &f_malloc);
    dlsym(libC, "calloc", &f_calloc);
    dlsym(libC, "strlen", &f_strlen);
    dlsym(libC, "strcmp", &f_strcmp);
    dlsym(libC, "strchr", &f_strchr);
    dlsym(libC, "strrchr", &f_strrchr);
    dlsym(libC, "gmtime_s", &f_gmtime_s);
    dlsym(libC, "time", &f_time);
    dlsym(libC, "localtime", &f_localtime);

    int libNetCtl = f_sceKernelLoadStartModule("libSceNetCtl.sprx", 0, 0, 0, 0, 0);
    dlsym(libNetCtl, "sceNetCtlInit", &f_sceNetCtlInit);
    dlsym(libNetCtl, "sceNetCtlTerm", &f_sceNetCtlTerm);
    dlsym(libNetCtl, "sceNetCtlGetInfo", &f_sceNetCtlGetInfo);


    //Eigener Payload
    //Eigene defs für dirent.h, muss in LibC dann geht es sonst immer memory error bei Ausführung PL
    dlsym(libC, "opendir", &f_opendir);
    dlsym(libC, "readdir", &f_readdir);
    dlsym(libC, "closedir", &f_closedir);
    //Bei resolve.h unten bei definitionen anhängen --- Wichtig ohne Kommentare, Absätze usw. sonst wird es nicht richtig erkannt
    //typeof(opendir)* f_opendir;
    //typeof(readdir)* f_readdir;
    //typeof(closedir)* f_closedir;

   
    printf_notification("Remove PS5 browser and UG appCache...\nVersion 1.0 by Storm\nRemoving for all users!");


    //Alle cache files und cookie db files
	///user/home/user_folder/webkit/shell/NKCookie.jar.db
	///user/home/user_folder/webkit/shell/NKCookie.jar.db-shm
	///user/home/user_folder/webkit/shell/NKCookie.jar.db-wal
	///user/home/user_folder/webkit/shell/appcache/ApplicationCache.db
	///user/home/user_folder/webkit/shell/appcache/ApplicationCache.db-shm
	///user/home/user_folder/webkit/shell/appcache/ApplicationCache.db-wal
	///user/home/user_folder/webkit/shell/local/https_manuals.playstation.net_0.localstorage
	///user/home/user_folder/webkit/shell/local/https_manuals.playstation.net_0.localstorage-shm
	///user/home/user_folder/webkit/shell/local/https_manuals.playstation.net_0.localstorage-wal
	///user/home/user_folder/webkit/shell/resourceloadstatistics/full_browsing_session_resourceLog.plist

    get_user_folders();//User Ordner holen und in Funktion del_user_files löschen


    printf_notification("Info: Removed PS5 browser and\nUserGuide appCache for all users!");


    return 0;
}
