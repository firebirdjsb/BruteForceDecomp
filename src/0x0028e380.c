/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 773776D756A83B1A30D627778C851F71C07AA10C6D826F7850188E4727431170
 * Entry: 0x0028e380, Ghidra index: 9208, label: FUN_0028e380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0028e380(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    uVar1 = param_1[3];
    uVar2 = param_1[2];
    uVar3 = param_1[1];
    *in_EAX = *param_1;
    in_EAX[1] = uVar3;
    in_EAX[2] = uVar2;
    in_EAX[3] = uVar1;
    in_EAX = in_EAX + 4;
  }
  return;
}
