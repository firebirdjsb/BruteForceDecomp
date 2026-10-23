/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3893E884011585F1237034A5DA7FCC1382D14D724E24AC68A20C2BCF3B8F32C2
 * Entry: 0x000e3d60, Ghidra index: 2832, label: FUN_000e3d60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000e3d60(int param_1)

{
  int in_EAX;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(in_EAX + 0xc) == 0) {
    if (*(int **)(in_EAX + 8) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int **)(in_EAX + 8);
    }
    iVar1 = FUN_000ff730(in_EAX + 4,iVar3,*(undefined4 *)(iVar3 + 4),&param_1);
    FUN_000b2a50();
    *(int *)(iVar3 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    return 1;
  }
  if (*(undefined4 **)(in_EAX + 8) == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)**(undefined4 **)(in_EAX + 8);
  }
  for (; puVar2 != *(undefined4 **)(in_EAX + 8); puVar2 = (undefined4 *)*puVar2) {
    if (*(float *)(param_1 + 0xc) < *(float *)(puVar2[2] + 0xc)) goto LAB_000e3ddc;
  }
  puVar2 = *(undefined4 **)(in_EAX + 8);
LAB_000e3ddc:
  iVar3 = FUN_000ff730(in_EAX + 4,puVar2,puVar2[1],&param_1);
  FUN_000b2a50();
  puVar2[1] = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  return 1;
}
