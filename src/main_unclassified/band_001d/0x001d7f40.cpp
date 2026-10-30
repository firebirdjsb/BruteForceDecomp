/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0A2008DD70B9C9E969E01D9A5504A6E7561030D307A90C422620ADFD640ADE0
 * Entry: 0x001d7f40, Ghidra index: 6415, label: FUN_001d7f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d7f40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar1 = in_EAX + 5;
    puVar2 = param_1 + 5;
    do {
      *in_EAX = *param_1;
      puVar1[-4] = puVar2[-4];
      puVar1[-3] = puVar2[-3];
      puVar1[-2] = puVar2[-2];
      puVar1[-1] = puVar2[-1];
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[4] = puVar2[4];
      puVar1[5] = puVar2[5];
      param_1 = param_1 + 0xb;
      in_EAX = in_EAX + 0xb;
      puVar1 = puVar1 + 0xb;
      puVar2 = puVar2 + 0xb;
    } while (param_1 != param_2);
  }
  return;
}
