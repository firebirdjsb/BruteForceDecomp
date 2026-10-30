/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8FAC2717697899D36CF955C75EE897FC99205C452B315826A6FC0D9B9D98DB0
 * Entry: 0x002481a0, Ghidra index: 8113, label: FUN_002481a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002481a0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = *in_EAX;
  uVar1 = in_EAX[3];
  uVar2 = in_EAX[2];
  unaff_ESI[1] = in_EAX[1];
  unaff_ESI[2] = uVar2;
  unaff_ESI[3] = uVar1;
  uVar1 = in_EAX[5];
  uVar2 = in_EAX[6];
  unaff_ESI[4] = in_EAX[4];
  unaff_ESI[6] = uVar2;
  unaff_ESI[5] = uVar1;
  uVar1 = in_EAX[9];
  uVar2 = in_EAX[10];
  uVar3 = in_EAX[8];
  unaff_ESI[7] = in_EAX[7];
  unaff_ESI[8] = uVar3;
  unaff_ESI[9] = uVar1;
  unaff_ESI[10] = uVar2;
  uVar1 = in_EAX[0xd];
  uVar2 = in_EAX[0xc];
  unaff_ESI[0xb] = in_EAX[0xb];
  unaff_ESI[0xc] = uVar2;
  unaff_ESI[0xd] = uVar1;
  FUN_001cca00(unaff_ESI + 0xe);
  return;
}
