/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D73FEC46A10072E13C523C85992ED47466AA018C2522A02E27CBCF52E1534521
 * Entry: 0x001e2de0, Ghidra index: 6757, label: FUN_001e2de0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001e2de0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_2 - param_1) / 0x1c;
  iVar2 = -(param_2 - param_1 >> 0x1f);
  if (1 < iVar1) {
    param_2 = param_2 + -0x1c;
    if (iVar1 < 2) goto LAB_001e2e4c;
    do {
      FUN_0001f4f0(param_2,0,0xffffffff);
      FUN_001e3550(param_1,param_2,param_2);
LAB_001e2e4c:
      param_2 = param_2 + -0x1c;
      iVar1 = param_2 + (0x1c - param_1);
      iVar2 = iVar1 * -0x6db6db6d;
    } while (1 < iVar1 / 0x1c);
  }
  return iVar2;
}
