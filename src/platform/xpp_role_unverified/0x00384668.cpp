/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: ABFC572A29BB3F00D50A954C5A104810039B6CE64FA559223C61CA11D774FC23
 * Entry: 0x00384668, Ghidra index: 13649, label: FUN_00384668
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412808;
extern uint32_t DAT_00412809;
extern uint32_t DAT_0041280a;
extern uint32_t DAT_0041280c;
extern uint32_t DAT_0041280d;
extern uint32_t DAT_00412870;
extern char s_Vhp_A_003845ec[];
void FUN_00384668(undefined1 *param_1,undefined4 param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = FUN_00380fc4();
  KeCancelTimer(&DAT_00412870);
  if (-1 < *(int *)(param_1 + 4)) {
    uVar4 = 0;
    pbVar2 = &DAT_00412808;
    if ((DAT_0041280a < 0x31) && ((uint)DAT_0041280a <= *(uint *)(param_1 + 0x14))) {
      do {
        uVar4 = uVar4 + *pbVar2;
        if ((*pbVar2 == 0) || (DAT_0041280a <= uVar4)) goto LAB_0038477e;
        pbVar2 = &DAT_00412808 + uVar4;
      } while ((&DAT_00412809)[uVar4] != '\x05');
      if (*(ushort *)(&DAT_0041280c + uVar4) < 5) {
        *(undefined *)(iVar1 + 7) = (&DAT_0041280c)[uVar4];
      }
      else {
        *(undefined1 *)(iVar1 + 7) = 4;
      }
      *(undefined1 *)(iVar1 + 1) = *(undefined1 *)((int)&DAT_0041280a + uVar4);
      *param_1 = 0x20;
      param_1[1] = 2;
      *(undefined4 *)(param_1 + 8) = 0;
      param_1[0x15] = *(undefined1 *)((int)&DAT_0041280a + uVar4);
      param_1[0x16] = *(byte *)((int)&DAT_0041280a + uVar4 + 1) & 3;
      param_1[0x17] = 0x10;
      *(ushort *)(param_1 + 0x1c) = (ushort)*(byte *)(iVar1 + 7);
      iVar3 = FUN_00381379(param_1);
      if (-1 < iVar3) {
        *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x10);
        *param_1 = 0x30;
        param_1[1] = 0x40;
        *(char **)(param_1 + 8) = s_Vhp_A_003845ec;
        *(undefined4 *)(param_1 + 0xc) = param_2;
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        param_1[0x1e] = 0;
        param_1[0x28] = 0;
        param_1[0x29] = 9;
        *(ushort *)(param_1 + 0x2a) = (ushort)DAT_0041280d;
        *(undefined2 *)(param_1 + 0x2c) = 0;
        *(undefined2 *)(param_1 + 0x2e) = 0;
        FUN_00383ce1(0);
        FUN_00381379(param_1);
        return;
      }
    }
  }
LAB_0038477e:
  FUN_00383fdc(param_1,param_2);
  return;
}
