/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7806D2144C409DA8C40A432F82CC7ED9B41210607FA198608EFB5727E8885E5D
 * Entry: 0x00296ea0, Ghidra index: 9339, label: FUN_00296ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_jump_context_opaque.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00404360;
extern uint32_t DAT_00469888;
extern char s___16g_00404958[];
extern char s__tostring__must_return_a_string_t_0040430c[];
extern char s_error_in__tostring__called_by__p_00404338[];
extern char s_exit_1___Unable_to_recover__00404a8c[];
void FUN_00296ea0(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 local_c8 [32];
  int aiStack_a8 [41];
  
  iVar7 = 0;
  iVar6 = DAT_00469888;
  for (iVar8 = 1;
      ((0 < iVar8 && (iVar8 <= *(int *)(iVar6 + 0x14))) &&
      (iVar9 = *(int *)(iVar6 + 0x10) + iVar8, iVar9 != 0)); iVar8 = iVar8 + 1) {
    if (0x28 < iVar8) {
      FUN_00295240();
      iVar6 = DAT_00469888;
    }
    aiStack_a8[iVar7] = iVar9;
    iVar7 = iVar7 + 1;
  }
  iVar6 = 0;
  if (0 < iVar7) {
    do {
      FUN_00289d80();
      FUN_0028a460();
      pcVar2 = (char *)&DAT_00404360;
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3 = pcVar3 + -0x404360;
      if (pcVar3 == (char *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = (int)((uint)DAT_00404360 * (int)pcVar3) % 0x1f;
      }
      FUN_00294640(&DAT_00404360,pcVar3,*(int *)(DAT_00469888 + 0x60) + iVar8 * 0xc);
      FUN_00292ba0();
      FUN_00289600();
      iVar9 = FUN_00289680();
      iVar8 = DAT_00469888;
      if (iVar9 != 0) {
        FUN_0028aa90(s_error_in__tostring__called_by__p_00404338);
        if (*(__jmp_buf_tag **)(DAT_00469888 + 0x18) == (__jmp_buf_tag *)0x0) goto LAB_00297055;
        _longjmp(*(__jmp_buf_tag **)(DAT_00469888 + 0x18),1);
LAB_00297033:
        FUN_0028aa90(s__tostring__must_return_a_string_t_0040430c);
        if (*(__jmp_buf_tag **)(DAT_00469888 + 0x18) != (__jmp_buf_tag *)0x0) {
          _longjmp(*(__jmp_buf_tag **)(DAT_00469888 + 0x18),1);
        }
LAB_00297055:
        FUN_0028aa90(s_exit_1___Unable_to_recover__00404a8c);
                    /* WARNING: Subroutine does not return */
        FUN_002eba1d(1);
      }
      if (*(int *)(DAT_00469888 + 0x14) < 1) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(DAT_00469888 + 0x10) + 1;
      }
      iVar4 = FUN_00289e20();
      if ((iVar4 != -2) && (iVar4 != -1)) goto LAB_00297033;
      if (*(uint *)(iVar8 + 0x74) <= *(uint *)(iVar8 + 0x78)) {
        FUN_002942f0(0);
        iVar8 = DAT_00469888;
      }
      if (iVar9 != 0) {
        iVar4 = *(int *)(*(int *)(iVar8 + 4) + -0x10 + iVar9 * 0x10);
        puVar1 = (undefined4 *)(*(int *)(iVar8 + 4) + -0x10 + iVar9 * 0x10);
        if ((iVar4 != -2) && (iVar4 == -1)) {
          FUN_002eaa86(local_c8,s___16g_00404958,puVar1[2],puVar1[3]);
          uVar5 = FUN_00294810();
          puVar1[2] = uVar5;
          *puVar1 = 0xfffffffe;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar7);
  }
  return;
}
