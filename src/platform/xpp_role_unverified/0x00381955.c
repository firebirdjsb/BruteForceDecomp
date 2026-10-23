/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CEC70F4FFF28835F7CAEC122ADAB52FD942CE044F6FAA4DBA3458C1692D38A9B
 * Entry: 0x00381955, Ghidra index: 13575, label: FUN_00381955
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0040f664;
extern uint32_t DAT_0040f66c;
void FUN_00381955(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  iVar5 = param_1[4];
  uVar7 = param_1[3] & 0xf0000000;
  iVar1 = *(int *)(iVar5 + 0x5c);
  if (param_2 < 0) {
    if (((uVar7 == 0x20000000) || (uVar7 == 0x40000000)) && (param_2 == -0x3fffffc2)) {
      FUN_003815c9();
      param_2 = 0;
      uVar7 = uVar7 + 0x10000000;
      goto LAB_003819a6;
    }
  }
  else {
    uVar7 = uVar7 + 0x10000000;
    if (uVar7 == 0x20000000) {
      if ((*(byte *)((int)param_1 + 0xf) & 2) != 0) goto LAB_003819a6;
      uVar7 = 0x40000000;
    }
    if ((uVar7 != 0x40000000) || ((*(byte *)((int)param_1 + 0xf) & 4) != 0)) goto LAB_003819a6;
  }
  uVar7 = 0x60000000;
LAB_003819a6:
  uVar2 = param_1[3];
  param_1[3] = uVar2 & 0xfffffff | uVar7;
  if (uVar7 == 0x20000000) {
    param_1[10] = &DAT_0040f66c;
    *(undefined1 *)((int)param_1 + 0x37) = 1;
    param_1[0xb] = param_1[0x5a] - param_1[6];
    *(undefined1 *)((int)param_1 + 0x4f) = 0x28;
    uVar7 = *(int *)(iVar1 + 0xc) - param_1[0xb];
  }
  else if (uVar7 == 0x30000000) {
    param_1[0xe] = param_1[0xb];
    *(undefined1 *)((int)param_1 + 0x37) = 6;
    param_1[0xf] = param_1[0x5a];
    param_1[10] = *(undefined4 *)(iVar1 + 8);
    param_1[0xb] = param_1[0x5a];
    *(undefined1 *)((int)param_1 + 0x4f) = 0x2a;
    uVar7 = *(int *)(iVar1 + 0xc) - param_1[0xe];
  }
  else {
    if (uVar7 == 0x40000000) {
      param_1[10] = &DAT_0040f66c;
      *(undefined1 *)((int)param_1 + 0x37) = 1;
      param_1[0xb] = param_1[0x5a] - param_1[7];
      *(undefined1 *)((int)param_1 + 0x4f) = 0x28;
      iVar5 = *(int *)(iVar1 + 0xc);
    }
    else {
      if (uVar7 != 0x50000000) {
        if (uVar7 != 0x60000000) {
          return;
        }
        param_1[3] = uVar2 & 0xfffffff;
        iVar3 = *DAT_0040f664;
        piVar4 = (int *)DAT_0040f664[1];
        *piVar4 = iVar3;
        *(int **)(iVar3 + 4) = piVar4;
        *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(iVar1 + 4);
        *(int *)(iVar5 + 0x10) = param_2;
        IofCompleteRequest();
        FUN_003815ad();
        IoStartNextPacket(*param_1);
        return;
      }
      param_1[0xe] = 0;
      *(undefined1 *)((int)param_1 + 0x37) = 6;
      param_1[0xf] = param_1[7];
      *(undefined1 *)((int)param_1 + 0x4f) = 0x2a;
      param_1[10] = (*(int *)(iVar1 + 8) - param_1[7]) + *(int *)(iVar1 + 4);
      param_1[0xb] = param_1[0x5a];
      iVar5 = *(int *)(iVar1 + 0xc) - param_1[7];
    }
    uVar7 = iVar5 + *(int *)(iVar1 + 4);
  }
  uVar6 = FUN_003814f3(uVar7 >> ((byte)param_1[0x56] & 0x1f));
  *(undefined4 *)((int)param_1 + 0x51) = uVar6;
  uVar7 = (uint)param_1[0xb] >> ((byte)param_1[0x56] & 0x1f);
  *(ushort *)((int)param_1 + 0x56) = CONCAT11((char)uVar7,(char)(uVar7 >> 8));
  FUN_00383571();
  return;
}
