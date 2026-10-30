/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 79773C87ED732265A15FBE93E7D67FF06D8A9CB6C1798E1202922F8BA5CCAF5B
 * Entry: 0x000d05d0, Ghidra index: 2575, label: FUN_000d05d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000d0c20(bf_000d0c20_incoming_words guest_words);

void FUN_000d05d0(void)

{
  int iVar1;
  int *piVar2;
  int in_EAX;
  undefined4 *puVar3;
  int *unaff_ESI;
  
  iVar1 = *unaff_ESI;
  while (iVar1 != 0) {
    piVar2 = (int *)*unaff_ESI;
    *unaff_ESI = *piVar2;
    *piVar2 = 0;
    piVar2[1] = 0;
    iVar1 = *unaff_ESI;
  }
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  iVar1 = unaff_ESI[2];
  while (iVar1 != 0) {
    piVar2 = (int *)unaff_ESI[2];
    unaff_ESI[2] = *piVar2;
    *piVar2 = 0;
    piVar2[1] = 0;
    iVar1 = unaff_ESI[2];
  }
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  FUN_000d0c20();
  puVar3 = (undefined4 *)unaff_ESI[5];
  if (0 < in_EAX) {
    do {
      *puVar3 = 0;
      if (puVar3[3] == 0) {
        if ((undefined4 *)unaff_ESI[3] == (undefined4 *)0x0) {
          puVar3[1] = 0;
          unaff_ESI[2] = (int)puVar3;
        }
        else {
          *(undefined4 *)unaff_ESI[3] = puVar3;
          puVar3[1] = unaff_ESI[3];
        }
        unaff_ESI[3] = (int)puVar3;
      }
      else if ((undefined4 *)unaff_ESI[1] == (undefined4 *)0x0) {
        puVar3[1] = 0;
        *unaff_ESI = (int)puVar3;
        unaff_ESI[1] = (int)puVar3;
      }
      else {
        *(undefined4 *)unaff_ESI[1] = puVar3;
        puVar3[1] = unaff_ESI[1];
        unaff_ESI[1] = (int)puVar3;
      }
      puVar3 = puVar3 + 4;
      in_EAX = in_EAX + -1;
    } while (in_EAX != 0);
  }
  return;
}
