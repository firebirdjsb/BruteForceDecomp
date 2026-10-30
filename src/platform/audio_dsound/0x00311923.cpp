/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 622E5B3663181F45B1ADCE4A50562F6FA473C1A75BA67C10C5920358953D76D3
 * Entry: 0x00311923, Ghidra index: 11899, label: FUN_00311923
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00311923(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    KfLowerIrql();
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  return;
}
