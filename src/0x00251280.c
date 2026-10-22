/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 02567E3D9A32B1EE07BADAC04890A333035ABF728A991235DFA765F8A4E1D505
 * Entry: 0x00251280, Ghidra index: 8362, label: FUN_00251280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00251280(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  
  while( true ) {
    iVar3 = in_EAX * 2 + 2;
    if (param_2 <= iVar3) break;
    iVar1 = *(int *)(param_1 + iVar3 * 4);
    if (((iVar1 != 0) && (iVar2 = *(int *)(param_1 + -4 + iVar3 * 4), iVar2 != 0)) &&
       (*(uint *)(iVar1 + 8) < *(uint *)(iVar2 + 8))) {
      iVar3 = in_EAX * 2 + 1;
    }
    *(undefined4 *)(param_1 + in_EAX * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    in_EAX = iVar3;
  }
  if (iVar3 == param_2) {
    *(undefined4 *)(param_1 + in_EAX * 4) = *(undefined4 *)(param_1 + -4 + param_2 * 4);
  }
  FUN_002513e0(param_1,param_4);
  return;
}
