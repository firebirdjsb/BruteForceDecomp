/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 947A9E8F81F24AF3E7EF373143E8BD7C8D987755979B597A9019F534C246922C
 * Entry: 0x00061fb0, Ghidra index: 1042, label: FUN_00061fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00061fb0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  uVar1 = in_ECX[8];
  uVar7 = in_ECX[3];
  uVar2 = in_ECX[5];
  uVar3 = in_ECX[2];
  uVar4 = in_ECX[7];
  uVar5 = in_ECX[4];
  uVar6 = in_ECX[1];
  uVar8 = *in_ECX;
  in_EAX[2] = in_ECX[6];
  *in_EAX = uVar8;
  in_EAX[1] = uVar7;
  in_EAX[3] = uVar6;
  in_EAX[4] = uVar5;
  in_EAX[5] = uVar4;
  in_EAX[6] = uVar3;
  in_EAX[7] = uVar2;
  in_EAX[8] = uVar1;
  return;
}
