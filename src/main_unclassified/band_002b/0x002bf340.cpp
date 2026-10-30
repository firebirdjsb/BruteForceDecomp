/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 69D2C1F4740B1A67910298A08A3DF1EEB387E51072816850208ED5DAD40DB3C6
 * Entry: 0x002bf340, Ghidra index: 9997, label: FUN_002bf340
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e6d4;
extern uint32_t PTR_FUN_0038e6f8;
extern uint32_t PTR_LAB_0038e70c;
extern uint32_t PTR_LAB_0038e720;
void FUN_002bf340(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int iVar3;
  
  *in_ECX = &PTR_FUN_0038e6d4;
  iVar3 = *(int *)(in_ECX[10] + 0x14);
  *(int *)(iVar3 + 0x74) = *(int *)(iVar3 + 0x74) + -1;
  *(int *)(iVar3 + 0x7c) = *(int *)(iVar3 + 0x7c) + 1;
  uVar1 = *(undefined4 *)(iVar3 + 0x10);
  if ((in_ECX[5] & 0xc00) != 0) {
    in_ECX[5] = in_ECX[5] & 0xfffcf3ff;
    if (*(int *)(in_ECX[10] + 0x18) != 0) {
      FUN_002b5c20(in_ECX);
    }
    if (*(int *)(in_ECX[0x11] + 0x18) != 0) {
      FUN_002b5c20(in_ECX);
    }
  }
  switch((int)(in_ECX[5] << 10) >> 0x1c) {
  case 2:
    FUN_002c0c30(uVar1);
    break;
  case 3:
    FUN_002c0b70();
    break;
  case 4:
  case 5:
    FUN_002d5de0();
    FUN_002d5de0();
  }
  (**(code **)(**(int **)(in_ECX[10] + 0x7c) + 0x20))
            ((uint *)(in_ECX[0xb] & 0xfffffff0) +
             ((*(uint *)(in_ECX[0xb] & 0xfffffff0) & 0xfff) + 1) * -4);
  (**(code **)(**(int **)(in_ECX[0x11] + 0x7c) + 0x20))
            ((uint *)(in_ECX[0x12] & 0xfffffff0) +
             ((*(uint *)(in_ECX[0x12] & 0xfffffff0) & 0xfff) + 1) * -4);
  (*(code *)**(undefined4 **)in_ECX[2])();
  *in_ECX = &PTR_LAB_0038e720;
  puVar2 = in_ECX + 0x14;
  iVar3 = 2;
  do {
    puVar2 = puVar2 + -7;
    iVar3 = iVar3 + -1;
    *puVar2 = &PTR_FUN_0038e6f8;
  } while (iVar3 != 0);
  *in_ECX = &PTR_LAB_0038e70c;
  return;
}
