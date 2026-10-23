/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ACBF2AE29482F134BE1A201327E2CBD09231DD5284E2FFCE4C3687845E61C864
 * Entry: 0x0028a690, Ghidra index: 9165, label: FUN_0028a690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00404b30;
extern uint32_t *DAT_00469888;
extern char s__return__00404acc[];
int FUN_0028a690(code *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int in_EDX;
  int iVar10;
  
  piVar7 = DAT_00469888;
  piVar1 = DAT_00469888 + 3;
  iVar2 = *piVar1;
  iVar3 = DAT_00469888[4];
  iVar4 = DAT_00469888[5];
  iVar9 = (*DAT_00469888 - DAT_00469888[1] >> 4) - in_EDX;
  DAT_00469888[5] = iVar9;
  piVar7[4] = in_EDX;
  *piVar1 = iVar9 + in_EDX;
  if (piVar7[0xe] != 0) {
    iVar9 = *piVar1;
    iVar5 = piVar7[4];
    iVar6 = piVar7[5];
    iVar10 = *piVar7 - piVar7[1] >> 4;
    *piVar1 = iVar10;
    piVar7[4] = iVar10;
    piVar7[5] = 0;
    (*(code *)piVar7[0xe])((in_EDX * 0x10 + -0x10 >> 4) + 1,&DAT_00404b30,0xffffffff);
    piVar8 = DAT_00469888;
    *DAT_00469888 = iVar10 * 0x10 + DAT_00469888[1];
    piVar8[3] = iVar9;
    piVar8[4] = iVar5;
    piVar8[5] = iVar6;
  }
  (*param_1)();
  piVar8 = DAT_00469888;
  if (DAT_00469888[0xe] != 0) {
    iVar9 = DAT_00469888[3];
    iVar5 = DAT_00469888[4];
    iVar6 = DAT_00469888[5];
    iVar10 = *DAT_00469888 - DAT_00469888[1] >> 4;
    DAT_00469888[3] = iVar10;
    piVar8[4] = iVar10;
    piVar8[5] = 0;
    (*(code *)piVar8[0xe])(0,s__return__00404acc,0);
    piVar8 = DAT_00469888;
    *DAT_00469888 = iVar10 * 0x10 + DAT_00469888[1];
    piVar8[3] = iVar9;
    piVar8[4] = iVar5;
    piVar8[5] = iVar6;
  }
  iVar9 = *piVar1;
  *piVar1 = iVar2;
  piVar7[4] = iVar3;
  piVar7[5] = iVar4;
  return iVar9;
}
