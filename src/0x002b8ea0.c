/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 628587D1D787DAE6430687CC0B800663910882D2E248C4553C93D098A4BDDEE0
 * Entry: 0x002b8ea0, Ghidra index: 9866, label: FUN_002b8ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00402794;
void FUN_002b8ea0(int param_1,float param_2)

{
  int iVar1;
  int *in_EAX;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = ((uint)(param_1 * 0x65) >> 8) + param_1 * 0x3e9 & *in_EAX - 1U;
  puVar2 = (undefined4 *)FUN_002ea01d(0x10);
  puVar2[2] = DAT_00402794;
  puVar2[3] = param_1;
  DAT_00402794 = DAT_00402794 + 1;
  *puVar2 = *(undefined4 *)(in_EAX[3] + uVar3 * 4);
  *(undefined4 **)(in_EAX[3] + uVar3 * 4) = puVar2;
  puVar2[1] = param_2;
  in_EAX[4] = in_EAX[4] + 1;
  iVar1 = *(int *)(in_EAX[2] + uVar3 * 4);
  if ((iVar1 == 0) || (param_2 < *(float *)(iVar1 + 4))) {
    FUN_002b8e50();
  }
  return;
}
