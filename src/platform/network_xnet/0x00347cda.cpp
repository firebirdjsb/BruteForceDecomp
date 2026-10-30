/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F1C10157E0107E27F2AE9F2BDE0C435E3D141B248F416024D78632735775537C
 * Entry: 0x00347cda, Ghidra index: 12882, label: FUN_00347cda
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00347cda(undefined4 *param_1,undefined4 param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = __allmul(*param_1,0,param_2,0);
  uVar2 = __allmul(param_1[1],0,param_2,0);
  *param_3 = (uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar1;
  param_3[1] = (uint)uVar2 ^ (uint)((ulonglong)uVar1 >> 0x20);
  return;
}
