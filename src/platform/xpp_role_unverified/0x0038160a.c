/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C4F4FF9F5D755A03884F8AE453D3C223C2588E52DFB740B0090D37FD94189724
 * Entry: 0x0038160a, Ghidra index: 13571, label: FUN_0038160a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0038160a(uint param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = 0;
  uVar2 = 1;
  do {
    if ((param_1 & uVar2) != 0) {
      return;
    }
    bVar1 = bVar1 + 1;
    uVar2 = uVar2 << 1;
  } while (bVar1 < 0x20);
  return;
}
