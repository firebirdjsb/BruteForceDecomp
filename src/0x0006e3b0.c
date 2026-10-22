/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 08E8B9B94E8A2F48F8CE4EE489AB316A3FA0323DD84BDF3CEDCBA2C7657038EF
 * Entry: 0x0006e3b0, Ghidra index: 1237, label: FUN_0006e3b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0006e3b0(void)

{
  int iVar1;
  float fVar2;
  int in_EAX;
  undefined4 *puVar3;
  int *unaff_EDI;
  
  if (unaff_EDI == (int *)0x0) {
    FUN_0006ab30();
  }
  else {
    fVar2 = (float)(unaff_EDI[3] - unaff_EDI[1]);
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      fVar2 = (float)(unaff_EDI[2] - *unaff_EDI) / fVar2;
    }
    else {
      fVar2 = 1.0;
    }
    iVar1 = *(int *)(in_EAX + 0x50);
    if (fVar2 != *(float *)(iVar1 + 0x2c)) {
      *(float *)(iVar1 + 0x2c) = fVar2;
      *(float *)(iVar1 + 0x28) = *(float *)(iVar1 + 0x24) / fVar2;
      FUN_0006ad90();
    }
  }
  FUN_0006ab30();
  puVar3 = (undefined4 *)(**(code **)(**(int **)(in_EAX + 0x50) + 0x18))();
  *(undefined4 *)(in_EAX + 0xb8) = *puVar3;
  *(undefined4 *)(in_EAX + 0xbc) = puVar3[1];
  *(undefined4 *)(in_EAX + 0xc0) = puVar3[2];
  *(undefined4 *)(in_EAX + 0xc4) = puVar3[3];
  return 0;
}
