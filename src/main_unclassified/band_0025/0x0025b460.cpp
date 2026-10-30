/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 392A9BD2988CE7C58A682677BEF03E0D462FDE245E11CD986CBDD6CAB0C6ABEB
 * Entry: 0x0025b460, Ghidra index: 8540, label: FUN_0025b460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0025b460(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    FUN_00359a70(iVar1,0,0);
    (**(code **)(*param_1 + 0x54))(param_1,1);
  }
  return iVar1 != 0;
}
