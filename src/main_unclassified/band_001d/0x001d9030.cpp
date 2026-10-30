/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B96F94CC273A8B2E7A3727C9ED17A3D4725279BA037090AF70B05210DCB660A
 * Entry: 0x001d9030, Ghidra index: 6453, label: FUN_001d9030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d9030(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1 != param_2) {
    puVar2 = in_EAX + 2;
    puVar3 = param_1 + 2;
    do {
      *in_EAX = *param_1;
      puVar2[-1] = puVar3[-1];
      puVar4 = puVar3;
      puVar5 = puVar2;
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = puVar3 + 5;
      puVar5 = puVar2 + 5;
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = puVar3 + 10;
      puVar5 = puVar2 + 10;
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = puVar3 + 0xf;
      puVar5 = puVar2 + 0xf;
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = puVar3 + 0x14;
      puVar5 = puVar2 + 0x14;
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      param_1 = param_1 + 0x1b;
      in_EAX = in_EAX + 0x1b;
      puVar2 = puVar2 + 0x1b;
      puVar3 = puVar3 + 0x1b;
    } while (param_1 != param_2);
  }
  return;
}
