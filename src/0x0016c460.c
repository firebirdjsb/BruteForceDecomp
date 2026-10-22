/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 08D36E0AE3D5A80698D0647C4B40C800ED724F94E989EBB1A9FE22F5F55EB014
 * Entry: 0x0016c460, Ghidra index: 4781, label: FUN_0016c460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016c460(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  undefined4 *puVar3;
  undefined4 *unaff_ESI;
  
  puVar3 = (undefined4 *)FUN_002ea01d();
  puVar3[3] = param_1;
  uVar1 = unaff_ESI[2];
  uVar2 = unaff_ESI[1];
  *puVar3 = *unaff_ESI;
  puVar3[2] = uVar1;
  puVar3[1] = uVar2;
  FUN_001611d0();
  FUN_0016dd10(*(undefined4 *)(in_EAX + 0x10));
  return;
}
