/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43DF5C7E48FFAD75AF4A8352FC16E444640DE007471841276A1E566F3549A913
 * Entry: 0x000adfb0, Ghidra index: 2082, label: FUN_000adfb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
void FUN_000adfb0(void)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  int unaff_ESI;
  
  iVar1 = (**(code **)(*DAT_00469b54 + 0x48))();
  *(undefined4 *)(unaff_ESI + 0x90) = *(undefined4 *)(iVar1 + 0x158);
  iVar1 = (**(code **)(*DAT_00469b54 + 0x48))();
  bVar2 = *(byte *)(unaff_ESI + 0x2c) ^
          (*(char *)(iVar1 + 0x155) << 2 ^ *(byte *)(unaff_ESI + 0x2c)) & 4;
  *(byte *)(unaff_ESI + 0x2c) = bVar2;
  iVar1 = *(int *)(*(int *)(unaff_ESI + 0x84) + 0x34);
  bVar4 = 1;
  if (((599 < *(short *)(iVar1 + 0x20)) && (399 < *(short *)(iVar1 + 0x22))) &&
     (1 < *(uint *)(*(int *)(iVar1 + 0x30) + 4))) {
    bVar4 = 0;
  }
  bVar2 = (bVar2 ^ bVar4) & 1 ^ bVar2;
  *(byte *)(unaff_ESI + 0x2c) = bVar2;
  iVar1 = *(int *)(*(int *)(unaff_ESI + 0x84) + 0x34);
  cVar3 = '\0';
  if ((*(short *)(iVar1 + 0x20) < 600) && (*(short *)(iVar1 + 0x22) < 400)) {
    cVar3 = '\x01';
  }
  *(byte *)(unaff_ESI + 0x2c) = (cVar3 << 1 ^ bVar2) & 2 ^ bVar2;
  if (cVar3 != '\0') {
    *(undefined2 *)(unaff_ESI + 4) = 4;
    *(undefined2 *)(unaff_ESI + 6) = 0x18;
    return;
  }
  *(undefined2 *)(unaff_ESI + 4) = 0;
  *(undefined2 *)(unaff_ESI + 6) = 0;
  return;
}
