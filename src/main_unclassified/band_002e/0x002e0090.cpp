/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 87806BDF16C676D2C60F10A2C05CCAD1E9DDB78B0560AC4F468DD4056A071ACE
 * Entry: 0x002e0090, Ghidra index: 10346, label: FUN_002e0090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e0090(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar1 = param_3 + 2;
    puVar2 = param_1 + 2;
    do {
      *param_3 = *param_1;
      puVar1[-1] = puVar2[-1];
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      param_1 = param_1 + 4;
      param_3 = param_3 + 4;
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
    } while (param_1 != param_2);
    *in_EAX = *param_3;
    return;
  }
  *in_EAX = *param_3;
  return;
}
