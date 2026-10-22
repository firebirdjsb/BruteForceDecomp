/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF7743EF348B3131CD3BEE3D5F6B260C99F92CCA6A841F1BEE18CB78130966FC
 * Entry: 0x000793b0, Ghidra index: 1446, label: FUN_000793b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000793b0(void)

{
  int in_EAX;
  int iVar1;
  byte bVar2;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(in_EAX + 0xc);
  iVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x18c))(&local_4);
  if (iVar1 != 0) {
    *(undefined4 *)(in_EAX + 0xa0) = *(undefined4 *)(iVar1 + 0x2c);
    bVar2 = *(byte *)(in_EAX + 0xa4) ^ (*(byte *)(iVar1 + 0x30) ^ *(byte *)(in_EAX + 0xa4)) & 1;
    *(byte *)(in_EAX + 0xa4) = bVar2;
    bVar2 = (*(char *)(iVar1 + 0x31) << 1 ^ bVar2) & 2 ^ bVar2;
    *(byte *)(in_EAX + 0xa4) = bVar2;
    bVar2 = (*(char *)(iVar1 + 0x32) << 2 ^ bVar2) & 4 ^ bVar2;
    *(byte *)(in_EAX + 0xa4) = bVar2;
    bVar2 = (*(char *)(iVar1 + 0x33) << 3 ^ bVar2) & 8 ^ bVar2;
    *(byte *)(in_EAX + 0xa4) = bVar2;
    *(byte *)(in_EAX + 0xa4) = (*(char *)(iVar1 + 0x34) << 4 ^ bVar2) & 0x10 ^ bVar2;
    if (7 < *(uint *)(iVar1 + 0x18)) {
      _wcsncpy((wchar_t *)(in_EAX + 0x18),*(wchar_t **)(iVar1 + 4),0x40);
      return;
    }
    _wcsncpy((wchar_t *)(in_EAX + 0x18),(wchar_t *)(iVar1 + 4),0x40);
  }
  return;
}
