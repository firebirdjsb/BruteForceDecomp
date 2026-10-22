/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8106259C52A87BA4757A7D878B6E91D9CE3978D18618B717FE560FA4466AC85E
 * Entry: 0x0012b440, Ghidra index: 3788, label: FUN_0012b440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039dbbc;
undefined4 FUN_0012b440(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined **local_120 [65];
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  fVar1 = *(float *)(*(int *)(param_1 + 0xc) + 0x1d4) * 0.95;
  fVar3 = 0.1;
  if (0.1 <= fVar1) {
    fVar3 = fVar1;
  }
  local_1c = 0;
  local_c = 0;
  local_8 = param_1;
  local_18 = 1;
  local_120[0] = &PTR_LAB_0039dbbc;
  local_4 = *(undefined4 *)(param_1 + 0x6c);
  local_10 = 0x15a0000;
  local_14 = 0xee;
  iVar2 = FUN_00153780(*(undefined4 *)(param_1 + 8),param_1,local_120,fVar3,
                       (*(float *)(*(int *)(param_1 + 0xc) + 0x1d8) + *(float *)(param_1 + 0x438)) -
                       ((*(float *)(*(int *)(param_1 + 0xc) + 0x1dc) - 0.1) +
                       *(float *)(param_1 + 0x468)));
  return CONCAT31((int3)((uint)-iVar2 >> 8),'\x01' - (iVar2 != 0));
}
