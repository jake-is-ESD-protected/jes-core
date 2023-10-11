#ifndef _COMMANDS_H_
#define _COMMANDS_H_

/// @file Enums and structs for notification commands.

#include <Arduino.h>

/// @brief Enum for types of places where a command can
/// originate from. Used in command_struct_t.
typedef enum origin_t{
    e_origin_undefined,
    e_origin_interrupt,
    e_origin_cli,
    e_origin_core
}origin_t;

/// @brief Enum for command content types aka jobs to do.
/// Used in cmd_struct_t.
typedef enum cmd_t{
    e_cmd_undefined,
    e_cmd_generic,
    e_cmd_read_queue
}cmd_t;

/// @brief Struct for sendable commands.
/// @param origin (origin_t): Place of command creation.
/// @param content (cmd_t): The job to do.
typedef struct cmd_struct_t{
    origin_t origin = e_origin_undefined;
    cmd_t content = e_cmd_undefined;
}cmd_struct_t;

#endif