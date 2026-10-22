/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33227F4359910EA65E9A8785449BED97246DBC7D936F07E7FC281FF970C690FB
 * Entry: 0x002f1ead, Ghidra index: 10792, label: ___shr_12
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    ___shr_12
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void ___shr_12(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}
