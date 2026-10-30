/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F9C4C09BB5A3156BDD187749B3984CD8C116D5EECEA916FA005AC49661F6B718
 * Entry: 0x002b9980, Ghidra index: 9874, label: FUN_002b9980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0038e7d0;
void FUN_002b9980(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_EAX;
  int in_EDX;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = &PTR_LAB_0038e7d0;
  unaff_EDI[4] = 0;
  unaff_EDI[0xc] = 0;
  unaff_EDI[0x10] = 0;
  unaff_EDI[3] = 0;
  unaff_EDI[2] = 0;
  unaff_EDI[1] = 0;
  unaff_EDI[8] = 0;
  unaff_EDI[7] = 0;
  unaff_EDI[6] = 0;
  unaff_EDI[5] = 0;
  uVar1 = in_EAX[5];
  uVar2 = in_EAX[6];
  unaff_EDI[9] = in_EAX[4];
  unaff_EDI[10] = uVar1;
  unaff_EDI[0xb] = uVar2;
  uVar1 = in_EAX[8];
  uVar2 = in_EAX[8];
  unaff_EDI[0xd] = in_EAX[8];
  unaff_EDI[0xe] = uVar2;
  unaff_EDI[0xf] = uVar1;
  unaff_EDI[0x11] = *in_EAX;
  unaff_EDI[0x12] = in_EAX[1];
  unaff_EDI[0x13] = in_EAX[2];
  unaff_EDI[0x14] = in_EAX[3];
  unaff_EDI[0x15] = *(undefined4 *)(in_EDX + 0x14);
  iVar3 = *(int *)(in_EDX + 0x90);
  unaff_EDI[0x17] = iVar3;
  unaff_EDI[0x16] = in_EDX;
  if (*(ushort *)(iVar3 + 0x160) <= *(ushort *)(iVar3 + 0x162)) {
    FUN_002ccf80();
  }
  *(undefined4 **)(*(int *)(iVar3 + 0x164) + (uint)*(ushort *)(iVar3 + 0x162) * 4) = unaff_EDI;
  *(short *)(iVar3 + 0x162) = *(short *)(iVar3 + 0x162) + 1;
  FUN_002be010(iVar3);
  return;
}
