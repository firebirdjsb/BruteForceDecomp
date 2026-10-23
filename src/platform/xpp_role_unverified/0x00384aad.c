/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44919B070058CDD67A435EE978325EEA6905308422899F5B47D7F8F51F4AFEF0
 * Entry: 0x00384aad, Ghidra index: 13656, label: FUN_00384aad
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00384aad(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  undefined4 *puVar3;
  int in_EDX;
  int *piVar4;
  int iVar5;
  
  if (*(char *)(in_EDX + 0x11) == '\0') {
    piVar4 = in_ECX + 0x103;
    puVar3 = (undefined4 *)(*in_ECX + 0x20);
  }
  else {
    piVar4 = in_ECX + 0x104;
    puVar3 = (undefined4 *)(*in_ECX + 0x28);
  }
  iVar2 = *piVar4;
  iVar5 = 0;
  do {
    iVar1 = iVar2;
    iVar2 = iVar1;
    if (in_EDX == iVar1) break;
    iVar2 = *(int *)(iVar1 + 0x18);
    iVar5 = iVar1;
  } while (iVar2 != 0);
  if (iVar5 == 0) {
    *piVar4 = *(int *)(iVar2 + 0x18);
    *puVar3 = *(undefined4 *)(iVar2 + 0xc);
  }
  else {
    *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
  }
  return;
}
