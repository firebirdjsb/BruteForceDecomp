/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 11B9A0FBF3512B0459C8A91C3CABA91D13D409A0F9609585B11A769BEFE171E8
 * Entry: 0x000337f0, Ghidra index: 335, label: FUN_000337f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a4f68;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_000337f0(undefined4 param_1,float param_2)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  int unaff_retaddr;
  float fStack_40;
  float local_3c;
  float fStack_38;
  float fStack_34;
  undefined8 uStack_30;
  float fStack_28;
  float local_24;
  float fStack_20;
  undefined **ppuStack_1c;
  int iStack_8;
  
  piVar1 = (int *)FUN_000120f0();
  FUN_0004c530(&local_3c);
  pfVar2 = (float *)(**(code **)(piVar1[0x6d] + 0x30))(&local_24);
  if (param_2 < fStack_40 * *pfVar2 + fStack_38 * pfVar2[2] + local_3c * pfVar2[1]) {
    return 0;
  }
  *(undefined4 *)(unaff_retaddr + 0x8a0) = 0x3f800000;
  *(undefined1 *)(unaff_retaddr + 0x89d) = 0;
  *(float *)(unaff_retaddr + 0x67c) = param_2;
  *(undefined4 *)(unaff_retaddr + 0x490) = 0;
  *(undefined4 *)(unaff_retaddr + 0x48c) = 0;
  *(undefined4 *)(unaff_retaddr + 0x488) = 0;
  *(float *)(unaff_retaddr + 0x664) = fStack_40;
  *(float *)(unaff_retaddr + 0x668) = local_3c;
  *(float *)(unaff_retaddr + 0x66c) = fStack_38;
  *(undefined1 *)(piVar1 + 0x19c) = 0;
  FUN_0004e8f0();
  fStack_34 = fStack_40 * 10.0;
  local_24 = local_3c * 10.0;
  fStack_20 = fStack_38 * 10.0;
  uStack_30 = CONCAT44(fStack_20,local_24);
  fStack_28 = fStack_34;
  iVar3 = (**(code **)(*piVar1 + 0x40))();
  fStack_20 = fStack_20 + *(float *)(iVar3 + 0x2c);
  local_24 = local_24 + *(float *)(iVar3 + 0x28);
  fStack_28 = fStack_28 + *(float *)(iVar3 + 0x24);
  FUN_00022d70();
  FUN_00038320();
  ppuStack_1c = &PTR_FUN_003a4f68;
  if (iStack_8 != 0) {
    FUN_0008f6e0();
  }
  FUN_00025730(unaff_retaddr + 0x684,1,1);
  return 1;
}
