/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B32B250BCB2E9436D121C063A45DD643F6CC3DEC688ACDE1C773E7778144164
 * Entry: 0x00048940, Ghidra index: 577, label: FUN_00048940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000428c0(int param_1);

void FUN_00048940(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *unaff_ESI;
  
  uVar1 = in_EAX[2];
  uVar2 = in_EAX[1];
  *unaff_ESI = *in_EAX;
  unaff_ESI[1] = uVar2;
  unaff_ESI[2] = uVar1;
  uVar1 = in_EAX[4];
  uVar2 = in_EAX[5];
  unaff_ESI[3] = in_EAX[3];
  unaff_ESI[4] = uVar1;
  unaff_ESI[5] = uVar2;
  unaff_ESI[6] = in_EAX[6];
  unaff_ESI[7] = in_EAX[7];
  FUN_000428c0(in_EAX + 8);
  unaff_ESI[0xc] = in_EAX[0xc];
  unaff_ESI[0xd] = in_EAX[0xd];
  unaff_ESI[0xe] = in_EAX[0xe];
  unaff_ESI[0xf] = in_EAX[0xf];
  *(undefined1 *)(unaff_ESI + 0x10) = *(undefined1 *)(in_EAX + 0x10);
  unaff_ESI[0x11] = in_EAX[0x11];
  return;
}
