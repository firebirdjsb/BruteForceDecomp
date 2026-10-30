/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B113A774103168652B8F3FB5DCF2FD88B0ECCCF137DB2DBC160441DAEE3D3A9D
 * Entry: 0x00063fe0, Ghidra index: 1083, label: FUN_00063fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00063fe0(void)

{
  int *in_ECX;
  undefined4 unaff_ESI;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_4;
  
  local_10 = 0;
  (**(code **)(*in_ECX + 0x40))(&local_10);
  uStack_c = 8;
  (**(code **)(*in_ECX + 0x48))(&local_10);
  FUN_00238080(unaff_ESI,uStack_4);
  return;
}
