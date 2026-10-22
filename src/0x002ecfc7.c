/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FA7237BD9FCBEF0679463E1B40E1D896853C24EA4E38CF943BA5580CBF534546
 * Entry: 0x002ecfc7, Ghidra index: 10682, label: FUN_002ecfc7
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6e40;
extern uint32_t DAT_003b6e48;
extern uint32_t DAT_0040f50c;
extern uint32_t DAT_0040f528;
extern uint32_t DAT_004a8d5c;
extern uint32_t DAT_004a8d60;
extern uint32_t DAT_004a8e64;
extern uint32_t DAT_004a8e80;
extern uint32_t _DAT_004a8d58;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002ecfc7(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  bool bVar11;
  uint local_8;
  
  bVar11 = param_1 == -4;
  if (bVar11) {
    param_1 = DAT_0040f528;
  }
  DAT_0040f50c = (uint)bVar11;
  if (param_1 != DAT_004a8e64) {
    if (param_1 != 0) {
      iVar6 = 0;
      uVar4 = 0;
      do {
        if (*(int *)((int)&DAT_003b6e48 + uVar4) == param_1) {
          puVar8 = &DAT_004a8d60;
          for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          *(undefined1 *)puVar8 = 0;
          local_8 = 0;
          pbVar9 = (byte *)(iVar6 * 0x3c + 0x3b6e64);
          do {
            bVar3 = *pbVar9;
            pbVar7 = pbVar9;
            while ((bVar3 != 0 && (bVar2 = pbVar7[1], bVar2 != 0))) {
              uVar4 = (uint)bVar3;
              if (uVar4 <= bVar2) {
                bVar3 = (&DAT_003b6e40)[local_8];
                do {
                  pbVar1 = (byte *)((int)&DAT_004a8d60 + uVar4 + 1);
                  *pbVar1 = *pbVar1 | bVar3;
                  uVar4 = uVar4 + 1;
                } while (uVar4 <= bVar2);
              }
              pbVar7 = pbVar7 + 2;
              bVar3 = *pbVar7;
            }
            local_8 = local_8 + 1;
            pbVar9 = pbVar9 + 8;
          } while (local_8 < 4);
          DAT_004a8e64 = param_1;
          DAT_004a8d5c = 1;
          if (param_1 == 0x3a4) {
            _DAT_004a8d58 = 0x411;
          }
          else if (param_1 == 0x3a8) {
            _DAT_004a8d58 = 0x804;
          }
          else if (param_1 == 0x3b5) {
            _DAT_004a8d58 = 0x412;
          }
          else if (param_1 == 0x3b6) {
            _DAT_004a8d58 = 0x404;
          }
          else {
            _DAT_004a8d58 = 0;
          }
          puVar8 = (undefined4 *)(iVar6 * 0x3c + 0x3b6e4c);
          puVar10 = &DAT_004a8e80;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          return 0;
        }
        uVar4 = uVar4 + 0x3c;
        iVar6 = iVar6 + 1;
      } while (uVar4 < 300);
      if (DAT_0040f50c == 0) {
        return 0xffffffff;
      }
    }
    FUN_002ecf9c();
  }
  return 0;
}
