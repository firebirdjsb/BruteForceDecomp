/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 398E08BFBCBB036E82E2FB96B8E3CE3B6D32292414DADA47B4717B725B2E211F
 * Entry: 0x00383a22, Ghidra index: 13628, label: FUN_00383a22
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00383a22(void)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
  undefined4 uVar2;
  
  iVar1 = *(int *)(in_EDX + 0x10);
  uVar2 = 0;
  KeRaiseIrqlToDpcLevel();
  FUN_00383816();
  if (*(char *)(iVar1 + 0x27) != '\0') {
    *(int *)(in_EDX + 0x14) = *(int *)(in_ECX + 0x430);
    *(int *)(in_ECX + 0x430) = in_EDX;
    FUN_0038388c();
    uVar2 = 0x40000000;
  }
  KfLowerIrql();
  return uVar2;
}
