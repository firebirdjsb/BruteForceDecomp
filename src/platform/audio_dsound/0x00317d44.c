/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B8DCC425F1FD8B417ED94EEC2505E99270D90FC6318A1756BD50B92B99F9144F
 * Entry: 0x00317d44, Ghidra index: 12187, label: FUN_00317d44
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_0032fde0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00317d44(void)

{
  int iVar1;
  int *in_ECX;
  
  FUN_003118f0();
  _DAT_0032fde0 = _DAT_0032fde0 + 1;
  iVar1 = FUN_0031be91(1);
  if ((*(ushort *)((int)in_ECX + 0x12) & 0x8001) == 0x8001) {
    FUN_00317b5d(0);
  }
  if (iVar1 != 0) {
    FUN_0031be91(0);
  }
  (**(code **)(*in_ECX + 0x14))();
  FUN_00311923();
  return;
}
