/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EBA758CDB460B4937C2F9B30732DDF715D1C9548EB38B0FAF952CDA60756C4E2
 * Entry: 0x0033554d, Ghidra index: 12430, label: FUN_0033554d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033554d(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    if ((*(int *)(in_ECX + 0x15c4) != 0) && (*(int *)(in_ECX + 0x15c8) != 0)) {
      iVar2 = FUN_0033d39c(*(int *)(in_ECX + 0x15c4),*(int *)(in_ECX + 0x15c8));
      if (-1 < iVar2) {
        *(undefined4 *)(in_ECX + 0x15c4) = 0;
        do {
          iVar2 = FUN_00330c3e(*(undefined4 *)(in_ECX + 0x15c8));
        } while (iVar2 == 0);
      }
    }
    if (*(int *)(in_ECX + 0x15c4) != 0) {
      FUN_0033c53d(*(int *)(in_ECX + 0x15c4));
      *(undefined4 *)(in_ECX + 0x15c4) = 0;
    }
    iVar1 = *(int *)(in_ECX + 0x15c8);
    if (iVar1 != 0) {
      FUN_00330c53(iVar1);
      *(int *)(in_ECX + 0x15c8) = 0;
    }
    if (iVar2 < 0) {
      FUN_0033c4ab(4);
    }
  }
  return;
}
