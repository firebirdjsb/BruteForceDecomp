/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8CAF00376271B1373E2DD932426AAC6658E647AF06B4A09F265F9B8FEEB15554
 * Entry: 0x000d2760, Ghidra index: 2614, label: FUN_000d2760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000d29b0(undefined4 guest_out_word);

void FUN_000d2760(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int *unaff_EBX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_38 [6];
  undefined4 local_18 [6];
  
  iVar2 = -1;
  unaff_EBX[4] = 0;
  unaff_EBX[5] = 0;
  unaff_EBX[6] = 0;
  *unaff_EBX = 0;
  iVar1 = in_EAX;
  if (0 < in_EAX) {
    do {
      iVar1 = iVar1 >> 1;
      iVar2 = iVar2 + 1;
    } while (0 < iVar1);
    if (-1 < iVar2) {
      iVar1 = 1 << ((byte)iVar2 & 0x1f);
      if (in_EAX != iVar1) {
        iVar1 = iVar1 * 2;
      }
      puVar3 = local_18;
      puVar4 = auStack_38;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *unaff_EBX = iVar1;
      FUN_000d29b0();
    }
  }
  unaff_EBX[2] = -1;
  unaff_EBX[1] = -1;
  return;
}
