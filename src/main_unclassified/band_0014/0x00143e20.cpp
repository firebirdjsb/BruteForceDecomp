/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84F18372FA70F9C53712FB136A4BADBB88B6DB551ECDE42A2C0E90F254E482D2
 * Entry: 0x00143e20, Ghidra index: 4148, label: FUN_00143e20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original x86 0x00143e20 saves EBX/ESI/EDI; at 0x00143e4a,
 * LEA ESI,[ESP+10h] therefore points to entry ESP+4, the first
 * incoming DWORD. RET 4 at 0x00143e61 and 0x00143e94 confirms
 * one four-byte stack argument. This is guest storage only;
 * EDX/ECX register contracts and native host ABI remain unverified. */
void FUN_00143e20(undefined4 guest_stack_word_04)

{
  int iVar1;
  uint uVar2;
  uint in_ECX;
  int in_EDX;
  
  iVar1 = *(int *)(in_EDX + 4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(in_EDX + 8) - iVar1 >> 2;
  }
  if (uVar2 < in_ECX) {
    FUN_00053080(*(undefined4 *)(in_EDX + 8),&guest_stack_word_04);
    return;
  }
  if ((iVar1 != 0) && (in_ECX < (uint)(*(int *)(in_EDX + 8) - iVar1 >> 2))) {
    FUN_0024f210(*(int *)(in_EDX + 4) + in_ECX * 4,*(int *)(in_EDX + 8));
  }
  return;
}
