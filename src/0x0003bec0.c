/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DEC9CD3ED71DFF13409AEBE98847480BEA867BDADF1285075E3E05050407ECF9
 * Entry: 0x0003bec0, Ghidra index: 423, label: FUN_0003bec0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0003bec0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x10) & 1U) == 0) &&
     (*(uint *)(in_EAX + 8) <= *(int *)(in_EAX + 0x10) + 2U >> 1)) {
    FUN_00263d10();
  }
  uVar4 = *(int *)(in_EAX + 0xc) + *(int *)(in_EAX + 0x10);
  uVar3 = uVar4 >> 1;
  if (*(uint *)(in_EAX + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(in_EAX + 8);
  }
  if (*(int *)(*(int *)(in_EAX + 4) + uVar3 * 4) == 0) {
    uVar2 = FUN_002ea01d(0x10);
    *(undefined4 *)(*(int *)(in_EAX + 4) + uVar3 * 4) = uVar2;
  }
  puVar1 = (undefined4 *)(*(int *)(*(int *)(in_EAX + 4) + uVar3 * 4) + (uVar4 & 1) * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  *(int *)(in_EAX + 0x10) = *(int *)(in_EAX + 0x10) + 1;
  return;
}
