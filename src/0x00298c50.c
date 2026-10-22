/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 777D2EE10CEABE4A2FE22127F637303CF4F7298693CB490B9BA00E97AC33ADDF
 * Entry: 0x00298c50, Ghidra index: 9366, label: FUN_00298c50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
bool FUN_00298c50(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  int in_EDX;
  
  piVar4 = DAT_00469888;
  if (in_EDX == 0) {
    puVar1 = (undefined4 *)*DAT_00469888;
    *puVar1 = *in_ECX;
    puVar1[1] = in_ECX[1];
    puVar1[2] = in_ECX[2];
    puVar1[3] = in_ECX[3];
    iVar3 = *piVar4;
    *(undefined4 *)(iVar3 + 0x10) = *in_EAX;
    *(undefined4 *)(iVar3 + 0x14) = in_EAX[1];
    *(undefined4 *)(iVar3 + 0x18) = in_EAX[2];
    *(undefined4 *)(iVar3 + 0x1c) = in_EAX[3];
    *piVar4 = *piVar4 + 0x20;
    FUN_00292f40(0xffffffff,0xfffffffa,0xfffffffa,0xb);
  }
  else {
    puVar1 = (undefined4 *)(DAT_00469888[1] + -0x10 + in_EDX * 0x10);
    puVar2 = (undefined4 *)*DAT_00469888;
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
    iVar3 = *piVar4;
    *(undefined4 *)(iVar3 + 0x10) = *in_ECX;
    *(undefined4 *)(iVar3 + 0x14) = in_ECX[1];
    *(undefined4 *)(iVar3 + 0x18) = in_ECX[2];
    *(undefined4 *)(iVar3 + 0x1c) = in_ECX[3];
    iVar3 = *piVar4;
    *(undefined4 *)(iVar3 + 0x20) = *in_EAX;
    *(undefined4 *)(iVar3 + 0x24) = in_EAX[1];
    *(undefined4 *)(iVar3 + 0x28) = in_EAX[2];
    *(undefined4 *)(iVar3 + 0x2c) = in_EAX[3];
    *piVar4 = *piVar4 + 0x30;
    FUN_0028a8b0(2,1);
  }
  iVar3 = *DAT_00469888;
  *DAT_00469888 = iVar3 + -0x10;
  return *(int *)(iVar3 + -0x10) != -6;
}
