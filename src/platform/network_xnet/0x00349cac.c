/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8CE89BF1F2C0AD6BC6C1FC1CC6A0A489032AD4DA5E2AE8B6803A9824870601F
 * Entry: 0x00349cac, Ghidra index: 12923, label: FUN_00349cac
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00349cac(void)

{
  uint *in_ECX;
  
  if (((*in_ECX & 0x100000) != 0) && ((*in_ECX & 0x800000) == 0)) {
    FUN_00349750(0);
    FUN_00350c50(0,0,0);
    FUN_00355ffd();
    FUN_0034d4b5();
    FUN_003511e5();
    FUN_00352ebc(0x800000);
  }
  FUN_00355af1();
  return;
}
