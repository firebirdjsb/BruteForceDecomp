/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 418E2FCBDBB048914B5F8F5B691B5113F82A507D7C4B200B9F2BFA9352C3FFF1
 * Entry: 0x002381e0, Ghidra index: 7867, label: FUN_002381e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002381e0(void)

{
  undefined4 *in_EAX;
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_EBX;
  uint unaff_EDI;
  
  FUN_00238160();
  uVar1 = 2;
  iVar4 = 1;
  in_EAX[5] = 1;
  if (2 < unaff_EDI) {
    do {
      uVar1 = uVar1 << 1;
      iVar4 = iVar4 + 1;
    } while (uVar1 < unaff_EDI);
    in_EAX[5] = iVar4;
  }
  if (uVar1 != unaff_EDI) {
    in_EAX[5] = 0;
  }
  in_EAX[2] = unaff_EDI;
  in_EAX[3] = unaff_EBX;
  in_EAX[4] = unaff_EBX;
  if (unaff_EBX != 0) {
    uVar2 = thunk_FUN_002ea01d(unaff_EBX * unaff_EDI);
    *in_EAX = uVar2;
    uVar2 = thunk_FUN_002ea01d(unaff_EBX * 8);
    in_EAX[1] = uVar2;
  }
  puVar3 = (undefined4 *)in_EAX[1];
  uVar1 = 0;
  if (in_EAX[3] != 0) {
    do {
      *puVar3 = 0;
      if ((undefined4 *)in_EAX[9] == (undefined4 *)0x0) {
        puVar3[1] = 0;
        in_EAX[8] = puVar3;
      }
      else {
        *(undefined4 *)in_EAX[9] = puVar3;
        puVar3[1] = in_EAX[9];
      }
      in_EAX[9] = puVar3;
      uVar1 = uVar1 + 1;
      puVar3 = puVar3 + 2;
    } while (uVar1 < (uint)in_EAX[3]);
  }
  return;
}
