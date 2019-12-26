#ifndef MAIN_H
#define MAIN_H

#include <lime/common.h>
#include "common/cli.h"
#include "core/module.h"

#define LIME_VM_VERSION "0.0.1-alpha"

int main(int argc, char *argv[]);

bool command_help(char *arguments[]);

bool command_execute(char *arguments[]);

bool command_version(char *arguments[]);

bool command_kernel(char *arguments[]);

bool command_verbose(char *arguments[]);

#endif
