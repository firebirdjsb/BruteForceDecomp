/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2F73F63318F924A98B8874B4B84CBDFCD77A74DE1A8EC5C569E2BB535F0FC541
 * Entry: 0x0037f4d0, Ghidra index: 13499, label: FUN_0037f4d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037ecc8;
void FUN_0037f4d0(void)

{
  byte bVar1;
  byte *pbVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int local_10;
  int local_c;
  int local_8;
  
  iVar4 = 0;
  *(undefined1 *)(in_ECX + 0xa0) = 0x10;
  local_8 = 0;
  local_c = 0;
  if (DAT_0037ecc8 != '\0') {
    *(undefined1 *)(in_ECX + 0xa0) = 0x30;
  }
  bVar1 = *(byte *)(in_ECX + 2);
  *(char *)(in_ECX + 0xa0) =
       *(char *)(in_ECX + 0xa0) +
       (*(char *)(in_ECX + 0x34) + bVar1 + *(char *)(in_ECX + 0x66)) * '\x04' + '\x03';
  if (*(byte *)(in_ECX + 0xa1) < bVar1) {
    *(byte *)(in_ECX + 0xa1) = bVar1;
  }
  if (*(byte *)(in_ECX + 0xa1) < *(byte *)(in_ECX + 0x66)) {
    *(byte *)(in_ECX + 0xa1) = *(byte *)(in_ECX + 0x66);
  }
  if (*(byte *)(in_ECX + 0xa1) < *(byte *)(in_ECX + 0x34)) {
    *(byte *)(in_ECX + 0xa1) = *(byte *)(in_ECX + 0x34);
  }
  *(char *)(in_ECX + 0xa0) = *(char *)(in_ECX + 0xa0) + *(char *)(in_ECX + 0xa1);
  local_10 = 4;
  pbVar2 = (byte *)(in_ECX + 0x37);
  do {
    iVar4 = (uint)*pbVar2 + iVar4 + (uint)pbVar2[-0x32] + (uint)pbVar2[0x32];
    local_8 = (uint)pbVar2[-2] + local_8 + (uint)pbVar2[-0x34] + (uint)pbVar2[0x30];
    local_c = (uint)pbVar2[-1] + local_c + (uint)pbVar2[-0x33] + (uint)pbVar2[0x31];
    *(int *)(in_ECX + 0xa8) = *(int *)(in_ECX + 0xa8) + (uint)pbVar2[-0x2f];
    iVar3 = *(int *)(in_ECX + 0xa8) + (uint)pbVar2[0x35];
    *(int *)(in_ECX + 0xa8) = iVar3;
    local_10 = local_10 + -1;
    *(uint *)(in_ECX + 0xa8) = (uint)pbVar2[3] + iVar3;
    pbVar2 = pbVar2 + 10;
  } while (local_10 != 0);
  if (DAT_0037ecc8 == '\0') {
    iVar4 = iVar4 + 5;
    local_8 = local_8 + 5;
  }
  else {
    iVar4 = iVar4 + 0xd;
    local_8 = local_8 + 0xd;
  }
  if (*(byte *)(in_ECX + 0xb0) < 0xd) {
    *(undefined1 *)(in_ECX + 0xb0) = 0xd;
  }
  local_c = local_8 + 1 + local_c;
  *(uint *)(in_ECX + 0xac) =
       (uint)*(byte *)(in_ECX + 0xb0) + local_c + iVar4 * 3 + (uint)*(byte *)(in_ECX + 0xb1);
  *(int *)(in_ECX + 0xa4) = local_c + iVar4;
  return;
}
