/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1FC9575FD9BDFA04DF9457E129A1225FC270978E4413F0AAFC90A917A9D60E8F
 * Entry: 0x002eb4ca, Ghidra index: 10621, label: __controlfp
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    __controlfp
   
   Library: Visual Studio 2003 Release */

void __controlfp(undefined4 param_1,uint param_2)

{
  __control87(param_1,param_2 & 0xfff7ffff);
  return;
}
