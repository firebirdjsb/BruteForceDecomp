/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF8CA50AD716D2D5FD27518BCDC37B4CCDCFE66EC8203D706323196A418B7BE4
 * Entry: 0x00131d60, Ghidra index: 3834, label: FUN_00131d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00131d60(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int in_EDX;
  int unaff_ESI;
  
  puVar1 = (undefined4 *)(unaff_ESI + 0x688 + in_EDX * 0xc);
  uVar2 = puVar1[2];
  uVar3 = puVar1[1];
  *in_ECX = *puVar1;
  in_ECX[1] = uVar3;
  in_ECX[2] = uVar2;
  *param_1 = *(undefined4 *)(unaff_ESI + 0x6dc + in_EDX * 4);
  return;
}
