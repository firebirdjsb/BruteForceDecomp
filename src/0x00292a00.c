/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0E7B883A66CAFB3F182AD3C379094AC98157B98E18041ADFE8927DC0E80AC2C
 * Entry: 0x00292a00, Ghidra index: 9258, label: FUN_00292a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
extern char s_indexed_expression_not_a_table_00404934[];
void FUN_00292a00(void)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  uint *in_EAX;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  piVar3 = DAT_00469888;
  uVar4 = *in_EAX;
  if (uVar4 == 0xfffffffd) {
    iVar5 = DAT_00469888[0x19] + *(int *)(in_EAX[2] + 0x14) * -0x120;
    puVar6 = (undefined4 *)(iVar5 + 0x10);
    if (*(int *)(iVar5 + 0x10) == -6) {
      FUN_00293f40();
      *piVar3 = *piVar3 + -0x10;
      return;
    }
  }
  else {
    if (uVar4 == 0xfffffff9) {
      uVar4 = *(uint *)(in_EAX[2] + 0x10);
    }
    else if (uVar4 == 0) {
      uVar4 = (-1 < (int)*(uint *)(in_EAX[2] + 0x10)) - 1 & *(uint *)(in_EAX[2] + 0x10);
    }
    iVar5 = DAT_00469888[0x19] + uVar4 * -0x120;
    puVar6 = (undefined4 *)(iVar5 + 0x10);
    if (*(int *)(iVar5 + 0x10) == -6) {
      FUN_0028ab50(s_indexed_expression_not_a_table_00404934);
    }
  }
  iVar5 = *DAT_00469888;
  iVar1 = *piVar3;
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar5 + -0x10);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar5 + -0xc);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar5 + -8);
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar5 + -4);
  puVar2 = (uint *)*piVar3;
  *puVar2 = in_EAX[4];
  puVar2[1] = in_EAX[5];
  puVar2[2] = in_EAX[6];
  puVar2[3] = in_EAX[7];
  iVar5 = *piVar3;
  *(uint *)(iVar5 + -0x10) = *in_EAX;
  *(uint *)(iVar5 + -0xc) = in_EAX[1];
  *(uint *)(iVar5 + -8) = in_EAX[2];
  *(uint *)(iVar5 + -4) = in_EAX[3];
  *piVar3 = *piVar3 + 0x20;
  FUN_0028a540(3);
  iVar5 = *DAT_00469888;
  *(undefined4 *)(iVar5 + -0x40) = *puVar6;
  *(undefined4 *)(iVar5 + -0x3c) = puVar6[1];
  *(undefined4 *)(iVar5 + -0x38) = puVar6[2];
  *(undefined4 *)(iVar5 + -0x34) = puVar6[3];
  FUN_0028a8b0(3,0);
  return;
}
