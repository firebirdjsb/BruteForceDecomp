/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 246F88F0B3D4A4651782CFB93BA7D52FC3D1F883E53D7DAEF1825EA6E2E716DB
 * Entry: 0x0026e880, Ghidra index: 8776, label: FUN_0026e880
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00405b6c;
extern uint32_t DAT_00469888;
extern char s_count_to_root_004059cc[];
extern char s_damping_004059c4[];
extern char s_end_effector_004059e4[];
extern char s_front_00405b64[];
extern char s_ik_id_004059dc[];
extern char s_target_part_00405b50[];
extern char s_target_type_00405b44[];
extern char s_transition_duration_0040599c[];
undefined4 FUN_0026e880(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EDI;
  float10 fVar3;
  
  iVar1 = FUN_0026b210(s_end_effector_004059e4);
  if ((iVar1 == 0) || (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar1 * 0x10) != -6)) {
    uVar2 = FUN_00289a40();
    *(undefined4 *)(unaff_EDI + 0x44) = uVar2;
  }
  iVar1 = FUN_0026b210(s_target_part_00405b50);
  if ((iVar1 == 0) || (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar1 * 0x10) != -6)) {
    uVar2 = FUN_00289a40();
    *(undefined4 *)(unaff_EDI + 0x48) = uVar2;
  }
  iVar1 = FUN_0026b210(s_target_type_00405b44);
  if ((iVar1 == 0) || (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar1 * 0x10) != -6)) {
    FUN_002899f0();
    uVar2 = FUN_002ebf10();
    *(undefined4 *)(unaff_EDI + 0x4c) = uVar2;
  }
  iVar1 = FUN_0026b210(s_ik_id_004059dc);
  if ((iVar1 == 0) || (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar1 * 0x10) != -6)) {
    FUN_002899f0();
    uVar2 = FUN_002ebf10();
    *(undefined4 *)(unaff_EDI + 0x28) = uVar2;
  }
  iVar1 = FUN_0026b210(s_count_to_root_004059cc);
  if ((iVar1 == 0) || (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar1 * 0x10) != -6)) {
    FUN_002899f0();
    uVar2 = FUN_002ebf10();
    *(undefined4 *)(unaff_EDI + 0x2c) = uVar2;
  }
  iVar1 = FUN_0026b210(s_damping_004059c4);
  if ((iVar1 == 0) || (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar1 * 0x10) != -6)) {
    fVar3 = (float10)FUN_002899f0();
    *(float *)(unaff_EDI + 0x38) = (float)fVar3;
  }
  uVar2 = *(undefined4 *)(unaff_EDI + 0x30);
  iVar1 = FUN_0026b210(&DAT_00405b6c);
  if ((iVar1 == 0) || (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar1 * 0x10) != -6)) {
    FUN_002899f0();
    uVar2 = FUN_002ebf10();
  }
  *(undefined4 *)(unaff_EDI + 0x30) = uVar2;
  uVar2 = *(undefined4 *)(unaff_EDI + 0x34);
  iVar1 = FUN_0026b210(s_front_00405b64);
  if ((iVar1 == 0) || (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar1 * 0x10) != -6)) {
    FUN_002899f0();
    uVar2 = FUN_002ebf10();
  }
  *(undefined4 *)(unaff_EDI + 0x34) = uVar2;
  FUN_0026b6e0(unaff_EDI + 0x3c);
  FUN_0026b6e0(unaff_EDI + 0x3d);
  iVar1 = FUN_0026b210(s_transition_duration_0040599c);
  if ((iVar1 == 0) || (*(int *)(*(int *)(DAT_00469888 + 4) + -0x10 + iVar1 * 0x10) != -6)) {
    fVar3 = (float10)FUN_002899f0();
    *(float *)(unaff_EDI + 0x40) = (float)fVar3;
  }
  return 0;
}
