/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 06D15F6F53F58E00A30E34228DEA988F47B2D10D672DE2FCACF6697D2A915956
 * Entry: 0x0035399f, Ghidra index: 13094, label: FUN_0035399f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0035399f(int param_1)

{
  int iVar1;
  
  if (*(byte *)(param_1 + 0x7d) < *(byte *)(param_1 + 0x7e)) {
    iVar1 = FUN_003471d2(1,1);
    if (iVar1 != 0) {
      FUN_00353790(iVar1);
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
