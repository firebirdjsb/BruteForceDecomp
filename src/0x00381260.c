/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 76FCD3CB7ED56D00C266B68720000F09C82C95C8C3C36C765A7FEDA90F79E6E0
 * Entry: 0x00381260, Ghidra index: 13559, label: FUN_00381260
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00412800;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00381260(int param_1)

{
  int iVar1;
  int in_ECX;
  undefined1 uVar2;
  int iVar3;
  
  iVar3 = param_1 - _DAT_00412800;
  *(undefined1 *)(param_1 + 3) = 0x80;
  *(char *)(param_1 + 1) = (char)(in_ECX - _DAT_00412800 >> 5);
  iVar1 = FUN_00380f83();
  uVar2 = (undefined1)(iVar3 >> 5);
  if (iVar1 == 0) {
    *(undefined1 *)(in_ECX + 2) = uVar2;
  }
  else {
    while (*(char *)(iVar1 + 3) != -0x80) {
      iVar1 = FUN_00380f9a();
    }
    *(undefined1 *)(iVar1 + 3) = uVar2;
  }
  return;
}
