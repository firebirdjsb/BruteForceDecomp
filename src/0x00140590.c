/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8861B67AF9CDADB1A5521FC455876635126257D86822E7FE5DED237FE58C1EFC
 * Entry: 0x00140590, Ghidra index: 4079, label: FUN_00140590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041f2e0;
extern uint32_t *DAT_00469940;
extern uint32_t PTR_FUN_0039c308;
extern uint32_t PTR_FUN_0039c33c;
extern uint32_t PTR_FUN_0039db6c;
float10 FUN_00140590(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  float10 extraout_ST0;
  float10 fVar4;
  float fVar5;
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = &PTR_FUN_0039db6c;
  local_4 = 0;
  local_c = 0;
  local_8 = 100;
  cVar1 = FUN_00136fc0(&local_10);
  if (cVar1 == '\0') {
    return (float10)0.0;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0x2c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_0039c308;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 7) = 0;
    puVar2[8] = param_2;
    DAT_0041f2e0 = DAT_0041f2e0 + 1;
    *puVar2 = &PTR_FUN_0039c33c;
    puVar2[9] = 0;
  }
  puVar2[9] = local_4;
  puVar2[1] = 0;
  iVar3 = FUN_0017beb0(&local_4);
  fVar4 = extraout_ST0;
  if (iVar3 != 0) {
    fVar4 = (float10)(**(code **)(*DAT_00469940 + 100))(iVar3 + 4);
  }
  puVar2[2] = (float)fVar4;
  if ((float10)0.0 < fVar4) {
    puVar2[2] = (float)(fVar4 + (float10)0.2);
  }
  if (puVar2[4] != param_3) {
    FUN_0008f6a0(param_3);
  }
  *(byte *)(puVar2 + 10) = (byte)(*(uint *)(param_2 + 0x54) >> 1) & 1;
  if (puVar2[6] != param_4) {
    FUN_0008f6a0(param_4);
  }
  FUN_0013f7b0(puVar2);
  fVar5 = 0.0;
  if (0.0 <= (float)puVar2[2]) {
    fVar5 = (float)puVar2[2];
  }
  return (float10)fVar5;
}
