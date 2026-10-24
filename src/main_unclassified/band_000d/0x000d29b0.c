/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 073A4A2E9E3EBE0131000B38C3A9C59D6362C7983AF7499C7B5F3468D33F4501
 * Entry: 0x000d29b0, Ghidra index: 2619, label: FUN_000d29b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* 0x000d2a47: LEA EDX,[ESP+18h] addresses entry ESP+4 after
 * three saved registers and two pushed scratch words. 0x002463e3
 * writes a single DWORD through that address. This parameter models
 * the first incoming guest-stack slot's storage, NOT a verified host
 * ABI or caller-visible guest-stack writeback. EAX and ECX are implicit
 * guest inputs; the original function ends with RET 18h. */
void FUN_000d29b0(undefined4 guest_out_word)

{
  uint in_EAX;
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(int *)(in_ECX + 8) - iVar1) / 0x18;
  }
  if (uVar2 < in_EAX) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)(in_ECX + 8) - iVar1) / 0x18;
    }
    FUN_000d2a60(*(undefined4 *)(in_ECX + 8),in_EAX - iVar1);
    return;
  }
  if (iVar1 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar1) / 0x18)) {
      FUN_002463a0(in_ECX,&guest_out_word,*(int *)(in_ECX + 4) + in_EAX * 0x18,*(int *)(in_ECX + 8)
                  );
    }
  }
  return;
}
