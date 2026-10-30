/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 21F318745BA0153407DAD50481B2455D3B26D8EA4BE8B323DECC6DE8D0DA6F93
 * Entry: 0x00335451, Ghidra index: 12427, label: FUN_00335451
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00335451(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
    if ((*(int *)(in_ECX + 0x15bc) != 0) && (*(int *)(in_ECX + 0x15c0) != 0)) {
      iVar2 = FUN_0033d39c(*(int *)(in_ECX + 0x15bc),*(int *)(in_ECX + 0x15c0));
      if (-1 < iVar2) {
        *(undefined4 *)(in_ECX + 0x15bc) = 0;
        do {
          iVar2 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x15c0));
        } while (iVar2 == 0);
      }
    }
    if (*(int *)(in_ECX + 0x15bc) != 0) {
      FUN_0033c53d(*(int *)(in_ECX + 0x15bc));
      *(undefined4 *)(in_ECX + 0x15bc) = 0;
    }
    iVar1 = *(int *)(in_ECX + 0x15c0);
    if (iVar1 != 0) {
      FUN_00330c53(iVar1);
      *(int *)(in_ECX + 0x15c0) = 0;
    }
    if (iVar2 < 0) {
      FUN_0033c4ab(3);
    }
  }
  return;
}
