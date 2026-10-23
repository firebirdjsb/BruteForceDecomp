/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 56C87BB2B21C7B128F35B0BB5220A67F9C12C2CED4CFB165C41753B51C11B2FC
 * Entry: 0x001d1110, Ghidra index: 6230, label: FUN_001d1110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d1110(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EDX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_1 + 2;
    do {
      *param_1 = *in_EDX;
      puVar1[-1] = in_EDX[1];
      puVar3 = in_EDX + 2;
      puVar4 = puVar1;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = in_EDX + 7;
      puVar4 = puVar1 + 5;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = in_EDX + 0xc;
      puVar4 = puVar1 + 10;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = in_EDX + 0x11;
      puVar4 = puVar1 + 0xf;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = in_EDX + 0x16;
      puVar4 = puVar1 + 0x14;
      for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      param_1 = param_1 + 0x1b;
      puVar1 = puVar1 + 0x1b;
    } while (param_1 != param_2);
  }
  return;
}
