/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EE1E641150B6233E4C6D0961CB1D01E8562DC60CD265B2C2C5E38409FC58BBCE
 * Entry: 0x000c7ab0, Ghidra index: 2454, label: FUN_000c7ab0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000c7ab0(void)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(in_ECX + 0x28) + 8);
  iVar3 = *(int *)(in_ECX + 0x30);
  if (*(short *)(iVar2 + 0x20) < 600) {
    if (399 < *(short *)(iVar2 + 0x22)) {
LAB_000c7b11:
      *(undefined4 *)(in_ECX + 0x38) = 0xffffffba;
      *(undefined4 *)(in_ECX + 0x3c) = 0x38;
      *(undefined4 *)(in_ECX + 0x40) = 0x14;
      iVar3 = iVar3 + *(int *)(in_ECX + 0x34);
      goto LAB_000c7aea;
    }
    iVar3 = iVar3 + 0x14 + *(int *)(in_ECX + 0x34);
  }
  else if (*(short *)(iVar2 + 0x22) < 400) goto LAB_000c7b11;
  *(undefined4 *)(in_ECX + 0x38) = 0xffffffa6;
  *(undefined4 *)(in_ECX + 0x3c) = 10;
  *(undefined4 *)(in_ECX + 0x40) = 0xfffffff5;
LAB_000c7aea:
  iVar2 = 0;
  do {
    cVar1 = FUN_000c7b30(iVar3);
    if (cVar1 != '\0') {
      iVar3 = iVar3 + *(int *)(in_ECX + 0x38);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}
