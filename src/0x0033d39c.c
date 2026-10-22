/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F0FB099241245F69170719C2CEF5BE62481C156648FFA22C28220E73EB06D34
 * Entry: 0x0033d39c, Ghidra index: 12579, label: FUN_0033d39c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0033d39c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    do {
      iVar1 = FUN_00330c3e(param_2);
    } while (iVar1 == 0);
  }
  FUN_0033bc7e(5,0,0,0,1);
  iVar1 = FUN_0033c657();
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return;
}
