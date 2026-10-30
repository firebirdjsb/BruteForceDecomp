/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B814D967BC73B0CE3CBEABBA0B340B24C6B4BABE88E4CC19D28D552174B702AF
 * Entry: 0x00380eda, Ghidra index: 13540, label: FUN_00380eda
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00380eda(int param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(param_1,*(undefined4 *)(param_1 + 0xc));
  }
  return;
}
