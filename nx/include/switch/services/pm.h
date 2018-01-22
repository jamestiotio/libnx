// Copyright 2017 plutoo
#pragma once
#include "../types.h"

Result pmdmntInitialize(void);
Result pmdmntStartProcess(u64 pid);
Result pmdmntGetTitlePid(u64* pid_out, u64 title_id);
Result pmdmntEnableDebugForTitleId(Handle* handle_out, u64 title_id);
Result pmdmntGetApplicationPid(u64* pid_out);
Result pmdmntEnableDebugForApplication(Handle* handle_out);
