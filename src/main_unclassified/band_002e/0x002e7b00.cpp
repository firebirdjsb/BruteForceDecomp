/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 00102A5181191D31851A8EAF59092D2847616B90B6BD0D323134F0D49C551124
 * Entry: 0x002e7b00, Ghidra index: 10527, label: FUN_002e7b00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040e89c;
undefined4 FUN_002e7b00(int param_1,int param_2)

{
  void *__dest;
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_0040e89c != 0) {
    bVar1 = *(byte *)(param_1 * 0x10 + 0xc + DAT_0040e89c);
    iVar2 = param_1 * 0x10 + DAT_0040e89c;
    uVar3 = 0;
    if (bVar1 != 0) {
      do {
        if (*(int *)(iVar2 + uVar3 * 4) == param_2) break;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(byte *)(iVar2 + 0xc));
    }
    if (uVar3 == bVar1) {
      return 0x80004005;
    }
    *(byte *)(iVar2 + 0xc) = bVar1 - 1;
    __dest = (void *)(iVar2 + uVar3 * 4);
    _memmove(__dest,(void *)((int)__dest + 4),((byte)(bVar1 - 1) - uVar3) * 4);
  }
  return 0;
}
