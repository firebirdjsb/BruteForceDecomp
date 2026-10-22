/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E8A5CF429C963BAB2CB20A3A1233AF76D5C942A6F152908CE2FC9B0967CBD9C
 * Entry: 0x003829eb, Ghidra index: 13605, label: FUN_003829eb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00412721;
extern uint32_t DAT_00412722;
extern uint32_t DAT_00412723;
extern uint32_t DAT_00412770;
extern uint32_t DAT_0041279b;
extern uint32_t DAT_004127ac;
extern uint32_t DAT_004127b0;
extern uint32_t *DAT_004127fc;
void FUN_003829eb(int param_1,undefined1 *param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  KeCancelTimer(&DAT_00412770);
  uVar3 = 0;
  DAT_00412723 = 6;
  if ((*(int *)(param_1 + 4) < 0) || (DAT_00412721 != '\0')) {
LAB_00382b26:
    FUN_003826ea(param_1,param_2);
  }
  else {
    *(undefined4 *)(param_2 + 0x18) = 0;
    pbVar1 = &DAT_004127ac;
    do {
      pbVar1 = pbVar1 + *pbVar1;
      if (((byte *)0x4127fb < pbVar1) || (*pbVar1 == 0)) {
        DAT_00412722 = 0;
        *(undefined4 *)(param_1 + 4) = 0x80000400;
        goto LAB_00382b26;
      }
    } while (pbVar1[1] != 4);
    DAT_004127fc = pbVar1;
    if ((DAT_004127b0 == 1) || (DAT_0041279b == 0)) {
      *param_2 = 3;
    }
    else {
      *param_2 = 4;
      param_2[2] = 0x80;
      if (DAT_004127b0 != 0) {
        do {
          if ((DAT_0041279b <= uVar3) ||
             (puVar2 = (undefined1 *)FUN_00380e8a(), puVar2 == (undefined1 *)0x0)) break;
          *puVar2 = 5;
          puVar2[4] = param_2[4] & 0x80 | (char)uVar3 + 1U;
          puVar2[5] = param_2[5];
          *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_2 + 8);
          *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)(param_2 + 0xc);
          puVar2[6] = param_2[6];
          *(undefined4 *)(puVar2 + 0x18) = *(undefined4 *)(param_2 + 0x18);
          FUN_00381260(puVar2);
          uVar3 = uVar3 + 1;
        } while (uVar3 < DAT_004127b0);
      }
      *(undefined4 *)(param_2 + 8) = 0;
      param_2 = (undefined1 *)FUN_00380f83();
    }
    param_2[2] = DAT_004127fc[2];
    param_2 = (undefined1 *)CONCAT31(*(undefined3 *)(DAT_004127fc + 5),0x82);
    FUN_003828dc(param_2);
  }
  return;
}
