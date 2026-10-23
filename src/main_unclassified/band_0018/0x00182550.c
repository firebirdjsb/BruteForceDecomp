/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8C58F4B1AE037E6020D1AB92CE81D436F0563837AB11B66F5A7E2284729BC2B
 * Entry: 0x00182550, Ghidra index: 5177, label: FUN_00182550
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00182550(void)

{
  undefined4 *puVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 *puVar4;
  int unaff_EDI;
  
  if (in_EAX == -1) {
    iVar2 = 2;
  }
  else {
    iVar2 = in_EAX + -1;
  }
  iVar2 = in_ECX + iVar2 * 0xc;
  if (iVar2 != 0) {
    puVar4 = *(undefined4 **)(iVar2 + 4);
    if (puVar4 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)*puVar4;
    }
    if (puVar3 != puVar4) {
      do {
        if (puVar3[2] == unaff_EDI) break;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != puVar4);
      if (puVar3 != puVar4) {
        do {
          puVar1 = (undefined4 *)*puVar3;
          if (puVar1 == puVar4) {
            puVar3[2] = unaff_EDI;
          }
          else {
            puVar3[2] = puVar1[2];
          }
          puVar4 = *(undefined4 **)(iVar2 + 4);
          puVar3 = puVar1;
        } while (puVar1 != puVar4);
      }
    }
  }
  return;
}
