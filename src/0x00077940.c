/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 526F9A84E8C561C174511BEED9631DDD0D456ABF1204CE7E6F503884B11D5DE2
 * Entry: 0x00077940, Ghidra index: 1406, label: FUN_00077940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00077940(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  if (in_ECX != (undefined4 *)0x0) {
    *in_ECX = 0;
    in_ECX[1] = 0;
    in_ECX[2] = 0;
    in_ECX[3] = 0;
    in_ECX[1] = 0;
    FUN_000765d0(param_2);
  }
  return;
}
