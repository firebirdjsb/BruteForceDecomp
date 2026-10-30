/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 394E3DC946F7281157045F738DEF6378EBDA7A43312216AE40E5F3D6E39F84D5
 * Entry: 0x0004e720, Ghidra index: 673, label: FUN_0004e720
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0004e790(int param_1,undefined4 param_2,float param_3);

void FUN_0004e720(int param_1,undefined4 param_2,undefined4 param_3)

{
  int in_EAX;
  int iVar1;
  int unaff_EDI;
  
  while( true ) {
    iVar1 = in_EAX * 2 + 2;
    if (unaff_EDI <= iVar1) break;
    if (*(float *)(param_1 + 4 + iVar1 * 8) < *(float *)(param_1 + -4 + iVar1 * 8)) {
      iVar1 = in_EAX * 2 + 1;
    }
    *(undefined4 *)(param_1 + in_EAX * 8) = *(undefined4 *)(param_1 + iVar1 * 8);
    *(undefined4 *)(param_1 + 4 + in_EAX * 8) = *(undefined4 *)(param_1 + 4 + iVar1 * 8);
    in_EAX = iVar1;
  }
  if (iVar1 == unaff_EDI) {
    *(undefined4 *)(param_1 + in_EAX * 8) = *(undefined4 *)(param_1 + -8 + unaff_EDI * 8);
    *(undefined4 *)(param_1 + 4 + in_EAX * 8) = *(undefined4 *)(param_1 + -4 + unaff_EDI * 8);
  }
  FUN_0004e790(param_1,param_2,param_3);
  return;
}
