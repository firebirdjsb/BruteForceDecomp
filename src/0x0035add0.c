/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F04446590589A3C5CA7EE046DE16B2C9ACB6123CDCF890C84D1A6355029D115F
 * Entry: 0x0035add0, Ghidra index: 13190, label: FUN_0035add0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035add0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = *(undefined4 *)(param_4 + 4);
  uVar2 = *(undefined4 *)(param_2 + 4);
  local_8 = uVar2;
  local_4 = uVar1;
  iVar3 = XAPILIB__WaitForMultipleObjects(2,&local_8,0,0xffffffff);
  if (iVar3 == 0) {
    XAPILIB__WaitForSingleObject(uVar1,0xffffffff);
  }
  else if (iVar3 == 1) {
    XAPILIB__WaitForSingleObject(uVar2,0xffffffff);
    return;
  }
  return;
}
