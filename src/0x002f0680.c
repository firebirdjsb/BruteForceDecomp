/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4ADCAAEDDFF7FC3980A56D0F0BD062F443E97AC27181910E7FC475851B93B5D9
 * Entry: 0x002f0680, Ghidra index: 10749, label: FUN_002f0680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_002f0680(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}
