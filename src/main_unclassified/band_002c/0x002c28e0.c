/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 44437DCF43C27DB5D54106721DA4AD20AE68A3521E4F0BA4BC6C6019AF23BFBC
 * Entry: 0x002c28e0, Ghidra index: 10042, label: FUN_002c28e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469f24;
void FUN_002c28e0(void)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_EAX;
  int iVar5;
  int iVar6;
  int unaff_ESI;
  float10 fVar7;
  undefined1 local_10 [12];
  undefined4 local_4;
  
  iVar5 = (*(uint *)(in_EAX + 0x14) >> 8 & 3) * 0x1c;
  iVar3 = *(int *)(iVar5 + 0x28 + in_EAX);
  uVar2 = *(undefined2 *)(iVar5 + 0x32 + in_EAX);
  uVar4 = *(undefined4 *)(iVar5 + 0x2c + in_EAX);
  piVar1 = (int *)(unaff_ESI + 8);
  *(int *)(unaff_ESI + 0x10) = iVar3;
  *(short *)(unaff_ESI + 0x14) = (short)unaff_ESI - (short)piVar1;
  iVar5 = *(int *)(iVar3 + 0x24);
  *piVar1 = iVar5;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  if (iVar5 != 0) {
    *(int **)(iVar5 + 4) = piVar1;
  }
  *(int **)(iVar3 + 0x24) = piVar1;
  *(undefined4 *)(unaff_ESI + 0x18) = uVar4;
  *(char *)(unaff_ESI + 0x16) = (char)uVar2;
  iVar6 = ((*(uint *)(in_EAX + 0x14) ^ 0x100) >> 8 & 3) * 0x1c;
  uVar4 = *(undefined4 *)(iVar6 + 0x2c + in_EAX);
  iVar3 = *(int *)(iVar6 + 0x28 + in_EAX);
  uVar2 = *(undefined2 *)(iVar6 + 0x32 + in_EAX);
  piVar1 = (int *)(unaff_ESI + 0x1c);
  *(int *)(unaff_ESI + 0x24) = iVar3;
  *(short *)(unaff_ESI + 0x28) = (short)unaff_ESI - (short)piVar1;
  iVar5 = *(int *)(iVar3 + 0x24);
  *piVar1 = iVar5;
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  if (iVar5 != 0) {
    *(int **)(iVar5 + 4) = piVar1;
  }
  *(int **)(iVar3 + 0x24) = piVar1;
  *(char *)(unaff_ESI + 0x2a) = (char)uVar2;
  *(undefined4 *)(unaff_ESI + 0x2c) = uVar4;
  iVar3 = *(int *)(*(int *)(in_EAX + 0x28) + 0x14);
  *(undefined4 *)(unaff_ESI + 0x68) = *(undefined4 *)(iVar3 + 0x108);
  *(undefined4 *)(unaff_ESI + 0x6c) = *(undefined4 *)(iVar3 + 0x10c);
  if (*(short *)(iVar6 + in_EAX + 0x32) == 2) {
    local_4 = 0;
    FUN_002cdc50(local_10);
    fVar7 = (float10)FUN_002b67e0(local_10);
    *(float *)(unaff_ESI + 0x4c) = (float)((float10)1.0 / fVar7);
  }
  *(undefined4 *)(unaff_ESI + 0x50) = 0;
  *(undefined4 *)(unaff_ESI + 0x54) = 0;
  *(undefined4 *)(unaff_ESI + 0x48) = 0;
  *(undefined4 *)(unaff_ESI + 0x38) = 0;
  *(undefined4 *)(unaff_ESI + 0x3c) = 0;
  *(undefined1 *)(unaff_ESI + 0x60) = 1;
  uVar4 = DAT_00469f24;
  *(undefined4 *)(unaff_ESI + 100) = 0;
  *(undefined4 *)(unaff_ESI + 0x70) = 0;
  *(undefined4 *)(unaff_ESI + 0x58) = uVar4;
  *(undefined2 *)(unaff_ESI + 0x5c) = 0x14;
  *(undefined1 *)(unaff_ESI + 0x34) = 0;
  return;
}
