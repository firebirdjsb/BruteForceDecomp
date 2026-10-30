/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F5960135D8F430F484E9155CAED8E6D558A6D77FD6372C32ED1A9478CDA575A
 * Entry: 0x001d70b0, Ghidra index: 6389, label: FUN_001d70b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d70b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    uVar1 = param_1[2];
    uVar2 = param_1[1];
    *in_EAX = *param_1;
    in_EAX[1] = uVar2;
    in_EAX[2] = uVar1;
    in_EAX = in_EAX + 3;
  }
  return;
}
