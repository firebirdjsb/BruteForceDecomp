/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5413086BE40D7BB934BAFA5EABA132F891090921A91F948DFFF0D6789D6C3A51
 * Entry: 0x0016e6e0, Ghidra index: 4820, label: FUN_0016e6e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016e6e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_0016eaa0(param_1);
    FUN_0016eaa0(param_2 + iVar1 * -4);
    FUN_0016eaa0(param_3 + iVar1 * -8);
    FUN_0016eaa0(iVar1 * 4 + param_1);
    return;
  }
  FUN_0016eaa0(param_1);
  return;
}
