/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F4D58571E53F961CD63912D3CAD33BFA9A9CF0D1984BF30913659A7352062ACC
 * Entry: 0x00381b3b, Ghidra index: 13576, label: FUN_00381b3b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0040f664;
extern uint32_t DAT_0040f66c;
void FUN_00381b3b(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  
  iVar1 = param_1[4];
  iVar2 = *(int *)(iVar1 + 0x5c);
  uVar7 = param_1[3] & 0xf0000000;
  if (param_2 < 0) {
    if (((uVar7 == 0x20000000) || (uVar7 == 0x30000000)) && (param_2 == -0x3fffffc2)) {
      FUN_003815c9();
      param_2 = 0;
      uVar7 = uVar7 + 0x10000000;
    }
    else {
      uVar7 = 0x50000000;
    }
  }
  else {
    uVar7 = uVar7 + 0x10000000;
  }
  uVar3 = param_1[3];
  param_1[3] = uVar3 & 0xfffffff | uVar7;
  if (uVar7 == 0x20000000) {
    *(undefined1 *)((int)param_1 + 0x37) = 1;
    *(undefined1 *)((int)param_1 + 0x4f) = 0x28;
    param_1[10] = &DAT_0040f66c;
    param_1[0xb] = param_1[0x5a] - param_1[6];
    uVar7 = *(int *)(iVar2 + 0xc) - (param_1[0x5a] - param_1[6]);
  }
  else if (uVar7 == 0x30000000) {
    param_1[10] = &DAT_0040f66c + param_1[0xb];
    param_1[0xb] = param_1[7];
    uVar7 = *(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 4);
  }
  else {
    if (uVar7 != 0x40000000) {
      if (uVar7 != 0x50000000) {
        return;
      }
      param_1[3] = uVar3 & 0xfffffff;
      iVar4 = *DAT_0040f664;
      piVar5 = (int *)DAT_0040f664[1];
      *piVar5 = iVar4;
      *(int **)(iVar4 + 4) = piVar5;
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar2 + 4);
      *(int *)(iVar1 + 0x10) = param_2;
      IofCompleteRequest();
      FUN_003815ad();
      IoStartNextPacket(*param_1);
      return;
    }
    *(undefined1 *)((int)param_1 + 0x4f) = 0x2a;
    *(undefined1 *)((int)param_1 + 0x37) = 6;
    param_1[0xe] = param_1[0x5a] - param_1[6];
    param_1[0xf] = param_1[0x5a] - param_1[7];
    param_1[10] = *(undefined4 *)(iVar2 + 8);
    param_1[0xb] = param_1[0x5a];
    uVar7 = *(int *)(iVar2 + 0xc) - param_1[0xe];
  }
  uVar6 = FUN_003814f3(uVar7 >> ((byte)param_1[0x56] & 0x1f));
  *(undefined4 *)((int)param_1 + 0x51) = uVar6;
  uVar7 = (uint)param_1[0xb] >> ((byte)param_1[0x56] & 0x1f);
  *(ushort *)((int)param_1 + 0x56) = CONCAT11((char)uVar7,(char)(uVar7 >> 8));
  FUN_00383571();
  return;
}
