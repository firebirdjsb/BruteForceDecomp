/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AFB6A904B023425AFBF7511D4FA85AAE65B7D9301BC666A37276CA58A7AFBA9A
 * Entry: 0x002eb498, Ghidra index: 10620, label: __control87
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    __control87
   
   Library: Visual Studio 2003 Release */

uint __control87(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = __abstract_cw();
  __hw_cw();
  return uVar1 & ~param_2 | param_1 & param_2;
}
