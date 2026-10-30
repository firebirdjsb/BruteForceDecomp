/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 029B496C0A6C37E86E90D08EB13E7D326A6B7D8F13123FCD0373AD5057C862A8
 * Entry: 0x0034a458, Ghidra index: 12931, label: FUN_0034a458
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034a458(int param_1)

{
  byte bVar1;
  int in_ECX;
  byte *pbVar2;
  
  pbVar2 = (byte *)(param_1 + -0x34);
  if (*(char *)(param_1 + -0x31) == '\0') {
    FUN_0034964a(pbVar2,0);
  }
  else {
    *(char *)(param_1 + -0x31) = *(char *)(param_1 + -0x31) + -1;
    if ((*pbVar2 & 4) == 0) {
      bVar1 = *(byte *)(in_ECX + 0x39);
    }
    else {
      bVar1 = *(byte *)(in_ECX + 0x3b);
    }
    FUN_0034c35a(param_1,*(int *)(in_ECX + 0x1d8) + (uint)bVar1 * 5);
    if (*(char *)(param_1 + -0x32) == '\b') {
      FUN_00349552(pbVar2);
    }
    else if (*(char *)(param_1 + -0x32) == '\x05') {
      FUN_00349366(pbVar2,0x530a,*(int *)(in_ECX + 0xbcc) + 0x920,0x128,0,0);
    }
    else {
      FUN_0034a3bd(pbVar2);
    }
  }
  return;
}
