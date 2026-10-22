/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A18B8C1DFE4DBB832E39D0BFC8CC9BCB9E630F96D134D36E06DB907002B357E1
 * Entry: 0x0038319a, Ghidra index: 13613, label: FUN_0038319a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Address-tied callee source: FUN_0038309d; callback ABI remains ABI_UNVERIFIED.
 * Provisional C11 declaration only; not a verified link/runtime contract. */
extern void FUN_0038309d(int param_1,int param_2);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f66c;
void FUN_0038319a(void)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 *in_ECX;
  uint uVar4;
  int in_EDX;
  undefined4 uVar5;
  undefined1 local_5;
  
  if ((*(byte *)(in_EDX + 0x37) & 3) == 1) {
    uVar5 = *(undefined4 *)(in_EDX + 0x20);
    local_5 = 2;
  }
  else {
    uVar5 = *(undefined4 *)(in_EDX + 0x24);
    local_5 = 1;
  }
  uVar1 = *(uint *)(in_EDX + 0x6c);
  if ((*(byte *)(in_EDX + 0x37) & 4) == 0) {
    iVar2 = *(int *)(in_EDX + 0x28);
  }
  else {
    uVar4 = *(uint *)(in_EDX + 0x38);
    if (uVar1 < uVar4) {
      puVar3 = &DAT_0040f66c + uVar1;
      goto LAB_003831f6;
    }
    if (*(uint *)(in_EDX + 0x3c) <= uVar1) {
      puVar3 = &DAT_0040f66c + uVar1 + (uVar4 - *(uint *)(in_EDX + 0x3c));
      goto LAB_003831f6;
    }
    iVar2 = *(int *)(in_EDX + 0x28) - uVar4;
  }
  puVar3 = (undefined *)(iVar2 + uVar1);
LAB_003831f6:
  uVar4 = *(int *)(in_EDX + 0x2c) - uVar1;
  if (0x400 < uVar4) {
    uVar4 = 0x400;
  }
  *(uint *)(in_EDX + 0x6c) = uVar1 + uVar4;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  *(undefined **)(in_ECX + 0x18) = puVar3;
  *(uint *)(in_ECX + 0x14) = uVar4;
  in_ECX[0x1c] = local_5;
  *in_ECX = 0x28;
  in_ECX[1] = 0x41;
  *(code **)(in_ECX + 8) = FUN_0038309d;
  *(int *)(in_ECX + 0xc) = in_EDX;
  *(undefined4 *)(in_ECX + 0x10) = uVar5;
  KeSetTimer(in_EDX + 0x70,0xffe91ca0,0xffffffff,in_EDX + 0x98);
  FUN_00381379(in_ECX);
  return;
}
