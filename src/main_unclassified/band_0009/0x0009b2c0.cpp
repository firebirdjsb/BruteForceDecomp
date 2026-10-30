/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 947CC10FBF7CFC411E4B98C156FB9FB311B7D069ECAFB27C00D9D1EC2BE8774A
 * Entry: 0x0009b2c0, Ghidra index: 1859, label: FUN_0009b2c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea01d_allocator_guest32.h"
undefined4 FUN_0009b2c0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if ((*param_2 != 0x10) || (param_2[1] != *(int *)(param_1 + 8))) {
    *param_3 = 0;
    return 0x80004002;
  }
  iVar1 = FUN_002ea01d(0x6c);
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  iVar1 = FUN_0009b340();
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  *(undefined1 *)(iVar1 + 0x58) = 0;
  *param_3 = iVar1;
  return 0;
}
