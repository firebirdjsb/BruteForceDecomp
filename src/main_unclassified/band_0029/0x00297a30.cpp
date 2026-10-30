/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 05C791F0E50FC1511F044FC2CD562D195B5D4671C3AD2DD6D0343D6FC81BC317
 * Entry: 0x00297a30, Ghidra index: 9354, label: FUN_00297a30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
void FUN_00297a30(void)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  
  if ((0 < (int)DAT_00469888[5]) && (DAT_00469888[4] + 1 != 0)) {
    if ((*(int *)((DAT_00469888[1] - 0x10) + (DAT_00469888[4] + 1) * 0x10) != -1) &&
       (iVar2 = FUN_00292690(), iVar2 != 0)) {
      FUN_00295240();
    }
    FUN_002899f0();
  }
  uVar1 = FUN_002ebf10();
  iVar2 = FUN_002942f0(uVar1);
  puVar3 = DAT_00469888;
  *(undefined4 *)*DAT_00469888 = 0xffffffff;
  *(double *)(*puVar3 + 8) = (double)iVar2;
  if (puVar3[2] <= *puVar3) {
    FUN_0028a460();
    puVar3 = DAT_00469888;
  }
  *puVar3 = *puVar3 + 0x10;
  return;
}
