/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0361C3DA2D30F574420A840459A3E92B70EA9A5BA70A59133D67739BA4C8E8BF
 * Entry: 0x00347b5c, Ghidra index: 12876, label: FUN_00347b5c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00347b5c(byte *param_1,undefined4 param_2)

{
  FUN_0034c7e5(param_1,8);
  FUN_0034c7e5(param_2,0x10);
  *param_1 = *param_1 & 0xf;
  return 0;
}
