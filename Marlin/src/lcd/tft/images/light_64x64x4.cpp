#include "../../../inc/MarlinConfigPre.h"

#if HAS_GRAPHICAL_TFT


extern const uint8_t light_64x64x4[2048] = {
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x4f, 0xf5, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xaf, 0xfa, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x84, 0xef, 0xfe, 0x48, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x86, 0xff, 0xff, 0x68, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x86, 0xff, 0xff, 0x68, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x86, 0xff, 0xff, 0x68, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x86, 0xff, 0xff, 0x68, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x86, 0xff, 0xff, 0x68, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x84, 0xef, 0xfe, 0x38, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x85, 0xaa, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x9e, 0xe9, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xaa, 0x58, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x8a, 0xff, 0xe9, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x83, 0x48, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x9e, 0xff, 0xa8, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x8a, 0xff, 0xfe, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x89, 0xef, 0xff, 0xa8, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0xef, 0xff, 0xe9, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x9e, 0xff, 0xfe, 0x98, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x9e, 0xff, 0xfe, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x89, 0xef, 0xff, 0xe9, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x89, 0xef, 0xff, 0xe4, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x5e, 0xff, 0xfe, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x9e, 0xff, 0xe5, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x4e, 0xff, 0xe9, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x89, 0xee, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x48, 0x9a, 0xa9, 0x84, 0x88, 0x88, 0x88, 0x88, 0x88, 0x89, 0xee, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x54, 0x88, 0x88, 0x88, 0x88, 0x83, 0x9a, 0xef, 0xff, 0xff, 0xfe, 0xaa, 0x48, 0x88, 0x88, 0x88, 0x88, 0x54, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x83, 0xae, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xea, 0x38, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0xef, 0xff, 0xff, 0xff, 0xea, 0xae, 0xff, 0xff, 0xff, 0xfe, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7e, 0xff, 0xff, 0xea, 0x96, 0x18, 0x81, 0x69, 0xae, 0xff, 0xff, 0xe7, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0xef, 0xff, 0xfe, 0x78, 0x88, 0x88, 0x88, 0x88, 0x87, 0xef, 0xff, 0xfe, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x3e, 0xff, 0xff, 0xe3, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x2e, 0xff, 0xff, 0xe3, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xaf, 0xff, 0xfe, 0x28, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x82, 0xef, 0xff, 0xfa, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x84, 0xef, 0xff, 0xe2, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x3e, 0xff, 0xfe, 0x38, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8a, 0xff, 0xfe, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0xef, 0xff, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8a, 0xff, 0xfa, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xaf, 0xff, 0xa8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x4e, 0xff, 0xf9, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x9f, 0xff, 0xe4, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x46, 0x66, 0x66, 0x38, 0x88, 0x88, 0x88, 0x8f, 0xff, 0xf6, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x6f, 0xff, 0xf8, 0x88, 0x88, 0x88, 0x84, 0x66, 0x66, 0x64, 0x88, 
    0x5a, 0xef, 0xff, 0xff, 0xe9, 0x88, 0x88, 0x88, 0x9f, 0xff, 0xe1, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x1e, 0xff, 0xf9, 0x88, 0x88, 0x88, 0x9e, 0xff, 0xff, 0xfe, 0xa4, 
    0xff, 0xff, 0xff, 0xff, 0xfe, 0x48, 0x88, 0x88, 0xaf, 0xff, 0xa8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8a, 0xff, 0xfa, 0x88, 0x88, 0x83, 0xef, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xfe, 0x38, 0x88, 0x88, 0xaf, 0xff, 0xa8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8a, 0xff, 0xfa, 0x88, 0x88, 0x84, 0xef, 0xff, 0xff, 0xff, 0xff, 
    0x4a, 0xef, 0xff, 0xff, 0xe9, 0x88, 0x88, 0x88, 0x9f, 0xff, 0xe1, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x1e, 0xff, 0xf9, 0x88, 0x88, 0x88, 0x9e, 0xff, 0xff, 0xfe, 0xa5, 
    0x88, 0x46, 0x66, 0x66, 0x48, 0x88, 0x88, 0x88, 0x8f, 0xff, 0xf6, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x6f, 0xff, 0xf8, 0x88, 0x88, 0x88, 0x83, 0x66, 0x66, 0x64, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x4e, 0xff, 0xf9, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x9f, 0xff, 0xe4, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8a, 0xff, 0xfa, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xaf, 0xff, 0xa8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x89, 0xff, 0xfe, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0xef, 0xff, 0xa8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x83, 0xef, 0xff, 0xe3, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x2e, 0xff, 0xfe, 0x48, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xaf, 0xff, 0xfe, 0x28, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x82, 0xef, 0xff, 0xfa, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x3e, 0xff, 0xff, 0xe2, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x3e, 0xff, 0xff, 0xe3, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0xef, 0xff, 0xfe, 0x78, 0x88, 0x88, 0x88, 0x88, 0x87, 0xef, 0xff, 0xfe, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7e, 0xff, 0xff, 0xea, 0x96, 0x18, 0x81, 0x69, 0xae, 0xff, 0xff, 0xe7, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0xef, 0xff, 0xff, 0xff, 0xea, 0xae, 0xff, 0xff, 0xff, 0xfe, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x83, 0xae, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xea, 0x38, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x45, 0x88, 0x88, 0x88, 0x88, 0x84, 0xaa, 0xef, 0xff, 0xff, 0xfe, 0xa9, 0x38, 0x88, 0x88, 0x88, 0x88, 0x45, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x89, 0xee, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x48, 0x9a, 0xa9, 0x84, 0x88, 0x88, 0x88, 0x88, 0x88, 0x89, 0xee, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x9e, 0xff, 0xe4, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x5e, 0xff, 0xe9, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x89, 0xef, 0xff, 0xe5, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x4e, 0xff, 0xfe, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x9e, 0xff, 0xfe, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x89, 0xef, 0xff, 0xe9, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x89, 0xef, 0xff, 0xe9, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x9e, 0xff, 0xfe, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x8a, 0xff, 0xfe, 0x98, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x89, 0xef, 0xff, 0xa8, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x8a, 0xff, 0xe9, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x84, 0x38, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x9e, 0xff, 0xa8, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x85, 0xaa, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x9e, 0xe9, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x89, 0xaa, 0x58, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x83, 0xef, 0xfe, 0x48, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x86, 0xff, 0xff, 0x68, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x86, 0xff, 0xff, 0x68, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x86, 0xff, 0xff, 0x68, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x86, 0xff, 0xff, 0x68, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x86, 0xff, 0xff, 0x68, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x84, 0xef, 0xfe, 0x48, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xaf, 0xfa, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x5f, 0xf4, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88
};

#endif // HAS_GRAPHICAL_TFT