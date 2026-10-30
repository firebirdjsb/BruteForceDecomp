/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C688478A52286D0A903DD19A47162AC425171B7140005004D16A13F173167C27
 * Entry: 0x00297070, Ghidra index: 9340, label: FUN_00297070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6c30;
extern uint32_t *DAT_00469888;
extern uint32_t *PTR_DAT_003b6c3c;
void FUN_00297070(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  float10 fVar5;
  byte *local_10;
  long local_c;
  
  if ((1 < (int)DAT_00469888[5]) && (DAT_00469888[4] + 2 != 0)) {
    if ((*(int *)((DAT_00469888[1] - 0x10) + (DAT_00469888[4] + 2) * 0x10) != -1) &&
       (iVar1 = FUN_00292690(), iVar1 != 0)) {
      FUN_00295240();
    }
    FUN_002899f0();
  }
  puVar4 = DAT_00469888;
  iVar1 = FUN_002ebf10();
  if (iVar1 == 10) {
    if ((((int)puVar4[5] < 1) || (puVar4[4] + 1 == 0)) ||
       ((*(int *)((puVar4[1] - 0x10) + (puVar4[4] + 1) * 0x10) != -1 &&
        (iVar1 = FUN_00292690(), puVar4 = DAT_00469888, iVar1 != 0)))) {
      *(undefined4 *)*puVar4 = 0xfffffffa;
      if (puVar4[2] <= *puVar4) {
        FUN_0028a460();
        puVar4 = DAT_00469888;
      }
      *puVar4 = *puVar4 + 0x10;
      return;
    }
    fVar5 = (float10)FUN_002899f0();
  }
  else {
    iVar2 = FUN_00289e20();
    if ((iVar2 != -2) && (iVar2 != -1)) {
      FUN_00295240();
    }
    local_10 = (byte *)FUN_00289a40();
    if ((iVar1 < 0) || (0x24 < iVar1)) {
      FUN_00295240();
    }
    local_c = _strtol((char *)local_10,(char **)&local_10,iVar1);
    while( true ) {
      if (DAT_003b6c30 < 2) {
        uVar3 = (byte)PTR_DAT_003b6c3c[(uint)*local_10 * 2] & 8;
      }
      else {
        uVar3 = FUN_002eba73(*local_10,8);
      }
      puVar4 = DAT_00469888;
      if (uVar3 == 0) break;
      local_10 = local_10 + 1;
    }
    if (*local_10 != 0) {
      *(undefined4 *)*DAT_00469888 = 0xfffffffa;
      if (puVar4[2] <= *puVar4) {
        FUN_0028a460();
        puVar4 = DAT_00469888;
      }
      *puVar4 = *puVar4 + 0x10;
      return;
    }
    fVar5 = (float10)local_c;
  }
  FUN_00289b00((double)fVar5);
  return;
}
