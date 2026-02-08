/* Copyright (C) 2026 Storm21

This program is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 3, or (at your option) any
later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; see the file COPYING. If not, see
<http://www.gnu.org/licenses/>.  */





#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <dirent.h>
#include <stdbool.h>
#include "notify.h"
int notify_user;


bool check_file_exists(const char* filename)
{
    struct stat buffer;
    return stat(filename, &buffer) == 0 ? true : false;
}


int del_user_files(char* userfolder)
{
    char user_NKCookie_jar_db[256];
    strcpy(user_NKCookie_jar_db, "/user/home/");
    strcat(user_NKCookie_jar_db, userfolder);
    strcat(user_NKCookie_jar_db, "/webkit/shell/NKCookie.jar.db");

    if (check_file_exists(user_NKCookie_jar_db))
    {
        remove(user_NKCookie_jar_db);
    }
    else
    {
    }

    char user_NKCookie_jar_db_shm[256];
    strcpy(user_NKCookie_jar_db_shm, "/user/home/");
    strcat(user_NKCookie_jar_db_shm, userfolder);
    strcat(user_NKCookie_jar_db_shm, "/webkit/shell/NKCookie.jar.db-shm");

    if (check_file_exists(user_NKCookie_jar_db_shm))
    {
        remove(user_NKCookie_jar_db_shm); 
    }
    else
    {
    }


    char user_NKCookie_jar_db_wal[256];
    strcpy(user_NKCookie_jar_db_wal, "/user/home/");
    strcat(user_NKCookie_jar_db_wal, userfolder);
    strcat(user_NKCookie_jar_db_wal, "/webkit/shell/NKCookie.jar.db-wal");

    if (check_file_exists(user_NKCookie_jar_db_wal))
    {
        remove(user_NKCookie_jar_db_wal); 
    }
    else
    {
    }


    char user_ApplicationCache_db[256];
    strcpy(user_ApplicationCache_db, "/user/home/");
    strcat(user_ApplicationCache_db, userfolder);
    strcat(user_ApplicationCache_db, "/webkit/shell/appcache/ApplicationCache.db");

    if (check_file_exists(user_ApplicationCache_db))
    {
        remove(user_ApplicationCache_db); 
    }
    else
    {
    }


    char user_ApplicationCache_db_shm[256];
    strcpy(user_ApplicationCache_db_shm, "/user/home/");
    strcat(user_ApplicationCache_db_shm, userfolder);
    strcat(user_ApplicationCache_db_shm, "/webkit/shell/appcache/ApplicationCache.db-shm");

    if (check_file_exists(user_ApplicationCache_db_shm))
    {
        remove(user_ApplicationCache_db_shm); 
    }
    else
    {
    }


    char user_ApplicationCache_db_wal[256];
    strcpy(user_ApplicationCache_db_wal, "/user/home/");
    strcat(user_ApplicationCache_db_wal, userfolder);
    strcat(user_ApplicationCache_db_wal, "/webkit/shell/appcache/ApplicationCache.db-wal");

    if (check_file_exists(user_ApplicationCache_db_wal))
    {
        remove(user_ApplicationCache_db_wal); 
    }
    else
    {
    }


    char user_https_manuals_playstation_net_0_localstorage[256];
    strcpy(user_https_manuals_playstation_net_0_localstorage, "/user/home/");
    strcat(user_https_manuals_playstation_net_0_localstorage, userfolder);
    strcat(user_https_manuals_playstation_net_0_localstorage, "/webkit/shell/local/https_manuals.playstation.net_0.localstorage");

    if (check_file_exists(user_https_manuals_playstation_net_0_localstorage))
    {
        remove(user_https_manuals_playstation_net_0_localstorage); 
    }
    else
    {
    }


    char user_https_manuals_playstation_net_0_localstorage_smh[256];
    strcpy(user_https_manuals_playstation_net_0_localstorage_smh, "/user/home/");
    strcat(user_https_manuals_playstation_net_0_localstorage_smh, userfolder);
    strcat(user_https_manuals_playstation_net_0_localstorage_smh, "/webkit/shell/local/https_manuals.playstation.net_0.localstorage-shm");

    if (check_file_exists(user_https_manuals_playstation_net_0_localstorage_smh))
    {
        remove(user_https_manuals_playstation_net_0_localstorage_smh); 
    }
    else
    {
    }


    char user_https_manuals_playstation_net_0_localstorage_wal[256];
    strcpy(user_https_manuals_playstation_net_0_localstorage_wal, "/user/home/");
    strcat(user_https_manuals_playstation_net_0_localstorage_wal, userfolder);
    strcat(user_https_manuals_playstation_net_0_localstorage_wal, "/webkit/shell/local/https_manuals.playstation.net_0.localstorage-wal");

    if (check_file_exists(user_https_manuals_playstation_net_0_localstorage_wal))
    {
        remove(user_https_manuals_playstation_net_0_localstorage_wal); 
    }
    else
    {
    }


    char user_full_browsing_session_resourceLog_plist[256];
    strcpy(user_full_browsing_session_resourceLog_plist, "/user/home/");
    strcat(user_full_browsing_session_resourceLog_plist, userfolder);
    strcat(user_full_browsing_session_resourceLog_plist, "/webkit/shell/resourceloadstatistics/full_browsing_session_resourceLog.plist");

    if (check_file_exists(user_full_browsing_session_resourceLog_plist))
    {
        remove(user_full_browsing_session_resourceLog_plist); 
    }
    else
    {
    }

    return 0;
}


int get_user_folders()
{
    DIR* folder;
    struct dirent* entry;

    folder = opendir("/user/home");
    if (folder == NULL)
    {
        if (notify_user) {

            notify("Unable to read directory...");

        }

        return 1;
    }

    while ((entry = readdir(folder)))
    {
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {

            continue;
        }

        char user_folder[256];
        sprintf(user_folder, "%s", entry->d_name);

        del_user_files(user_folder);
    }

    closedir(folder);

    return 0;
}


int main() {

    notify_user = 1;

    if (notify_user) {

        notify("Remove PS5 browser and UG appCache...\nVersion 1.1 (elfLoader) by Storm\nRemoving for all users!");

    }

    get_user_folders();       

    if (notify_user) {

        notify("Info: Removed PS5 browser and\nUserGuide appCache for all users!");

    }

    notify_user = 0;

}

