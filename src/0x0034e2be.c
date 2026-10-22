/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ACE8D4EE5CCDE7D7D0335E97F30DA38911E9112ADBAF5A83DEC4A245F2BD05F9
 * Entry: 0x0034e2be, Ghidra index: 13020, label: FUN_0034e2be
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0034e2be(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_1 + (param_2 >> 1) * 4);
  if ((param_2 & 1) == 0) {
    uVar2 = puVar1[-1] + *puVar1 >> 1;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}
