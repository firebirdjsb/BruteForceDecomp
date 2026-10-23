/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 055C5C3F3720CFF24D44A0BD7AB41F42689D7D25B857C5D38790D785029B022B
 * Entry: 0x002f1e7f, Ghidra index: 10791, label: ___shl_12
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    ___shl_12
   
   Library: Visual Studio 2003 Release */

void ___shl_12(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] << 1 | uVar2 >> 0x1f;
  return;
}
