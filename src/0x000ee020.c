/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A41C247AC6D97E638E31F738936FA972BB0D35A09A1A94318F10C7C93DFA6F18
 * Entry: 0x000ee020, Ghidra index: 2958, label: FUN_000ee020
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_000ee020(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = param_2;
  cVar2 = FUN_000eddd0(param_1,param_2,param_3);
  param_3 = CONCAT31(param_3._1_3_,cVar2);
  if (cVar2 == '\0') {
    param_2 = 0xc3008e9;
    FUN_000ee4d0(param_1,&param_2,uVar1);
    cVar2 = (char)param_3;
  }
  return cVar2;
}
