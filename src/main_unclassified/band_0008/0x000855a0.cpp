/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9943E6C1CB3494362F88BA434D2465FF66FBCFAEF0F654D4091AB368D07F8291
 * Entry: 0x000855a0, Ghidra index: 1561, label: FUN_000855a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00086af0(undefined4 param_1,int param_2,undefined4 param_3);

void FUN_000855a0(void)

{
  int iVar1;
  int in_EAX;
  undefined4 in_ECX;
  undefined1 local_4 [4];
  
  iVar1 = *(int *)(in_EAX + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)(in_EAX + 8) - iVar1) / 0x24) <
      (uint)((*(int *)(in_EAX + 0xc) - iVar1) / 0x24))) {
    iVar1 = *(int *)(in_EAX + 8);
    FUN_00086af0(iVar1,1);
    *(int *)(in_EAX + 8) = iVar1 + 0x24;
    return;
  }
  FUN_00085850(local_4,*(undefined4 *)(in_EAX + 8),in_ECX);
  return;
}
