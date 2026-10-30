/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 98D119F0BB28B6322DCDD97858FEB1A9E2C6A2A09BDDEEA6CB326641BF15DD54
 * Entry: 0x00299fb0, Ghidra index: 9399, label: FUN_00299fb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s_code_size_overflow_004040f0[];
void FUN_00299fb0(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  int *unaff_ESI;
  
  iVar1 = FUN_00295460();
  unaff_ESI[1] = *(int *)(in_EAX + 8);
  puVar3 = DAT_00469888;
  *(int **)(in_EAX + 8) = unaff_ESI;
  *unaff_ESI = iVar1;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[8] = 0;
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  unaff_ESI[2] = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  unaff_ESI[7] = (puVar3[0xd] != 0) - 1;
  uVar2 = FUN_00294b10(1,s_code_size_overflow_004040f0);
  *(undefined4 *)(*unaff_ESI + 0x10) = uVar2;
  *(undefined1 *)(*(int *)(*unaff_ESI + 0x10) + unaff_ESI[2]) = 0;
  unaff_ESI[2] = unaff_ESI[2] + 1;
  uVar2 = FUN_00294b10(1,s_code_size_overflow_004040f0);
  *(undefined4 *)(*unaff_ESI + 0x10) = uVar2;
  *(undefined1 *)(*(int *)(*unaff_ESI + 0x10) + unaff_ESI[2]) = 0;
  puVar3 = DAT_00469888;
  unaff_ESI[2] = unaff_ESI[2] + 1;
  *(int *)(*puVar3 + 8) = iVar1;
  *(undefined4 *)*puVar3 = 0xfffffffc;
  if (puVar3[2] <= *puVar3) {
    FUN_0028a460();
    puVar3 = DAT_00469888;
  }
  *puVar3 = *puVar3 + 0x10;
  return;
}
