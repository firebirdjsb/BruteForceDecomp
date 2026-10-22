/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F9571B2E4ECD01E3151FE61C2748EE3D19A5D6BE00F996C127760D3BC97E8797
 * Entry: 0x00213880, Ghidra index: 7445, label: FUN_00213880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00213880(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  uVar1 = FUN_00061500(unaff_ESI + 2);
  unaff_ESI[3] = uVar1;
  unaff_ESI[4] = 0;
  *unaff_ESI = param_1;
  unaff_ESI[1] = param_2;
  return;
}
