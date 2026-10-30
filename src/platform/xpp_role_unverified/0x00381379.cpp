/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D3D930CE2DD15377D0DF29C67E63A6DAF908794540FE52A1B4CD113D3DEE769
 * Entry: 0x00381379, Ghidra index: 13562, label: FUN_00381379
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00381379(int param_1)

{
  byte bVar1;
  uint uVar2;
  int in_ECX;
  undefined1 local_18 [2];
  undefined1 local_16;
  undefined4 local_14;
  undefined4 **local_10;
  undefined4 **local_c;
  char local_5;
  
  bVar1 = *(byte *)(param_1 + 1);
  local_5 = '\0';
  if (((bVar1 & 0x40) != 0) && (*(int *)(param_1 + 8) == 0)) {
    local_c = &local_10;
    local_10 = &local_10;
    local_5 = '\x01';
    local_18[0] = 0;
    local_16 = 4;
    local_14 = 0;
    *(undefined1 **)(param_1 + 8) = (uintptr_t)0x003804c9U;
    *(undefined1 **)(param_1 + 0xc) = local_18;
  }
  if (bVar1 == 2) {
    *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(in_ECX + 5);
    *(int *)(param_1 + 0x18) = in_ECX + 0x18;
    *(byte *)(param_1 + 0x1e) = *(byte *)(in_ECX + 4) >> 7;
  }
  else if (bVar1 == 9) {
    *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(in_ECX + 5);
  }
  else if (bVar1 == 0x40) {
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(in_ECX + 8);
    }
    if (*(char *)(param_1 + 0x29) == '\t') {
      *(undefined4 *)(in_ECX + 0x18) = 0;
    }
  }
  else if (bVar1 == 0x43) {
    *(int *)(param_1 + 0x18) = in_ECX + 0x18;
  }
  else {
    if (bVar1 == 0x82) {
      uVar2 = FUN_0038113d(param_1);
      goto LAB_00381434;
    }
    if (bVar1 == 0xc3) {
      uVar2 = FUN_003811c3(param_1);
      goto LAB_00381434;
    }
  }
  uVar2 = FUN_00383a75(*(int *)(in_ECX + 0xc) + 0x18,param_1);
LAB_00381434:
  if (local_5 != '\0') {
    if ((uVar2 & 0xc0000000) == 0x40000000) {
      KeWaitForSingleObject(local_18,0,0,0,0);
      uVar2 = *(uint *)(param_1 + 4);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return uVar2;
}
