/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 458063487579BBF0DCEF5E824D9621A5D0122928E1695C92CBC1E8AF0C400FF5
 * Entry: 0x00109a90, Ghidra index: 3416, label: FUN_00109a90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00109a90(void)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x78);
  bVar3 = *(byte *)(in_ECX + 0xa0) ^ (*(byte *)(in_ECX + 0xa0) ^ *(byte *)(in_ECX + 0x28) & 1) & 1;
  *(byte *)(in_ECX + 0xa0) = bVar3;
  if ((((bVar3 & 1) != 0) && (*(int *)(in_ECX + 0x7c) != 0)) &&
     (piVar2 = *(int **)(*(int *)(in_ECX + 0x7c) + 0x94), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x28))(piVar1);
  }
  (**(code **)(*piVar1 + 0x20))();
  FUN_000ff970(piVar1);
  return;
}
