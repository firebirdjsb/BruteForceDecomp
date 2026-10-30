/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3364CCEA91C1707F8398205DC2E49966C10AACCBC295EDBFE791FDEE2231EC09
 * Entry: 0x000bb220, Ghidra index: 2268, label: FUN_000bb220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000bb220(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  undefined1 local_6c [104];
  undefined1 local_4;
  undefined1 local_3;
  
  if ((*(byte *)(in_EAX + 0x13) & 1) != 0) {
    return 0;
  }
  if (*(int *)(in_EAX + 0x28) == 0) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(in_EAX + 0x28) + 8);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(iVar2 + 0x10) == 0) {
    return 0;
  }
  cVar1 = FUN_00072b60();
  if (cVar1 == '\0') {
    return 0;
  }
  if (*(short *)(iVar2 + 0x24) == 5) {
    iVar2 = *(int *)(iVar2 + 0x60);
  }
  else {
    if (*(short *)(iVar2 + 0x24) != 6) goto LAB_000bb29f;
    iVar2 = (**(code **)(**(int **)(*(int *)(*(int *)(iVar2 + 0xe0) + 8) + 0xbec) + 0xc))
                      (*(int *)(iVar2 + 0xe0));
  }
  if (iVar2 == 0) {
    return 0;
  }
  cVar1 = FUN_0008b880();
  if (cVar1 == '\0') {
    return 0;
  }
LAB_000bb29f:
  FUN_0003f010();
  local_3 = 1;
  local_4 = 0;
  FUN_0017c020(local_6c);
  return 1;
}
