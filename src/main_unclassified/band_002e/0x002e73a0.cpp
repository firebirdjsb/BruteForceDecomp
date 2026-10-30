/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BC21F20A55E608630A43F4A657218CF182A80C0F78CF8636C6406591B26ED3C6
 * Entry: 0x002e73a0, Ghidra index: 10506, label: FUN_002e73a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e73a0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_2b8 [24];
  undefined4 local_2a0;
  
  iVar1 = FUN_002e6db0();
  if (-1 < iVar1) {
    if ((*(int *)(in_ECX + 0x28) == 1) && (*(int *)(in_ECX + 0x4898) == 5)) {
      iVar1 = FUN_002e5f70();
    }
    if ((*(int *)(in_ECX + 0x4898) == 6) &&
       (iVar2 = XAPILIB__GetTickCount(),
       *(uint *)(in_ECX + 0x4944) < (uint)(iVar2 - *(int *)(in_ECX + 0x4948)))) {
      FUN_002e55f0();
      local_2a0 = 0x8000000a;
      iVar1 = FUN_002e7f50(0,local_2b8,1,1);
      FUN_002e4fc0();
      FUN_002e8b80();
      if (iVar1 < 0) {
        return iVar1;
      }
    }
    if ((*(int *)(in_ECX + 0x4898) == 3) && (*(char *)(in_ECX + 0x280) != '\0')) {
      FUN_002e59f0();
    }
  }
  return iVar1;
}
