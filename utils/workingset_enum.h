#pragma once

#include <Windows.h>
#include <set>

#define PAGE_SIZE 0x1000

size_t enum_workingset(HANDLE processHandle, std::set<ULONGLONG> &region_bases);

size_t fetch_region_size(HANDLE processHandle, PBYTE moduleBase);
