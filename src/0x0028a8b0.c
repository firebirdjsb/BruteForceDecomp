/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 97B73AA213A006049267D84DFA9D166AEE1E3328725C33D1A02A5A63CFFBE330
 * Entry: 0x0028a8b0, Ghidra index: 9168, label: FUN_0028a8b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
extern char s_call_expression_not_a_function_00404aac[];
void FUN_0028a8b0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  param_1 = (*DAT_00469888 - DAT_00469888[1] >> 4) - param_1;
  piVar1 = (int *)(param_1 * 0x10 + -0x10 + DAT_00469888[1]);
  iVar3 = *piVar1;
  piVar2 = DAT_00469888;
  do {
    if (iVar3 == -7) {
      iVar3 = piVar1[2];
      *piVar1 = -8;
      if (*(int *)(iVar3 + 0x10) == -5) {
        iVar3 = FUN_0028a7c0(iVar3,*(undefined4 *)(iVar3 + 0x18));
      }
      else {
LAB_0028a9c4:
        iVar3 = FUN_002930e0(iVar3,param_1);
      }
LAB_0028a9cc:
      if (param_2 == 0xff) {
        param_2 = (*piVar2 - piVar2[1] >> 4) - iVar3;
      }
      else {
        FUN_0028a4f0();
      }
      if (0 < param_2) {
        iVar5 = (param_1 + -1) * 0x10;
        iVar7 = iVar3 << 4;
        do {
          puVar4 = (undefined4 *)(iVar7 + piVar2[1]);
          puVar6 = (undefined4 *)(piVar2[1] + iVar5);
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
          puVar6[2] = puVar4[2];
          puVar6[3] = puVar4[3];
          iVar7 = iVar7 + 0x10;
          iVar5 = iVar5 + 0x10;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
      *piVar2 = *piVar2 + ((param_1 + -1) - iVar3) * 0x10;
      return;
    }
    if (iVar3 == -5) {
      *piVar1 = -10;
      iVar3 = FUN_0028a690(piVar1[2]);
      goto LAB_0028a9cc;
    }
    if (iVar3 == -4) {
      *piVar1 = -9;
      iVar3 = 0;
      goto LAB_0028a9c4;
    }
    iVar3 = FUN_00294fd0();
    iVar3 = piVar2[0x19] + iVar3 * -0x120;
    if (*(int *)(iVar3 + 0x110) == -6) {
      FUN_0028ab50(s_call_expression_not_a_function_00404aac);
    }
    param_1 = (*piVar2 - piVar2[1] >> 4) - param_1;
    iVar7 = param_1 + 1;
    FUN_0028a540(iVar7);
    piVar2 = DAT_00469888;
    puVar4 = (undefined4 *)(*DAT_00469888 + (param_1 + 2) * -0x10);
    *puVar4 = *(undefined4 *)(iVar3 + 0x110);
    puVar4[1] = *(undefined4 *)(iVar3 + 0x114);
    puVar4[2] = *(undefined4 *)(iVar3 + 0x118);
    puVar4[3] = *(undefined4 *)(iVar3 + 0x11c);
    param_1 = (*piVar2 - piVar2[1] >> 4) - iVar7;
    piVar1 = (int *)(param_1 * 0x10 + -0x10 + piVar2[1]);
    iVar3 = *piVar1;
  } while( true );
}
