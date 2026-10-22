/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7FB6BC136FC748C5B14B39BA8B7F63FAAD74D450B25FD75AF412C5DFF95484A7
 * Entry: 0x002f4b0e, Ghidra index: 10869, label: SleepEx
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XAPILIB__SleepEx(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = (undefined4 *)FUN_002f8a4b(&local_c,param_1);
  if (puVar1 == (undefined4 *)0x0) {
    local_c = 0;
    local_8 = 0x80000000;
    puVar1 = &local_c;
  }
  do {
    iVar2 = KeDelayExecutionThread(1,param_2,puVar1);
    if (param_2 == 0) break;
  } while (iVar2 == 0x101);
  if (iVar2 == 0xc0) {
    uVar3 = 0xc0;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
