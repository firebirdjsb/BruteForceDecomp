/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF09C212CA577D122409C8DC3A4B7BF1D32C5A2F637B7A1D3FA30386BCF9A09F
 * Entry: 0x0006e850, Ghidra index: 1244, label: FUN_0006e850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_0006e6b0(int param_1,code *param_2,undefined4 param_3);

extern uint32_t DAT_003f7f1c;
extern uint32_t DAT_004a5c1c;
uint FUN_0006e850(uint param_1)

{
  byte bVar1;
  ushort uVar2;
  int in_EAX;
  uint uVar3;
  int *piVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  int local_4;
  
  bVar1 = *(char *)(in_EAX + 0x124) << 1;
  uVar3 = (uint)bVar1;
  if (-1 < (char)bVar1) {
    uVar3 = param_1 & 0xff;
    if ((char)param_1 != '\0') {
      iVar7 = 0;
      do {
        puVar5 = (ushort *)(*(int *)(in_EAX + 0x120) + iVar7);
        if ((*puVar5 & 0xfff) != 0) {
          uVar2 = FUN_0006e6b0(DAT_003f7f1c,0,0);
          if ((uVar2 | 2) == 0) {
            *puVar5 = 0x1000;
          }
          else {
            *puVar5 = *puVar5 & 0xbfff | 0x1000;
          }
          uVar3 = 0;
          puVar5[2] = 0;
          puVar5[1] = 0;
        }
        iVar7 = iVar7 + 6;
      } while (iVar7 < 0x6c00);
      return uVar3;
    }
    local_4 = DAT_004a5c1c + 0xb;
    param_1 = 0x1200;
    piVar4 = (int *)&param_1;
    if (DAT_004a5c1c + 0xb < 0x1201) {
      piVar4 = &local_4;
    }
    iVar7 = *piVar4;
    for (iVar6 = DAT_004a5c1c; iVar6 < iVar7; iVar6 = iVar6 + 1) {
      FUN_0006e6b0(DAT_003f7f1c,0,0);
    }
    uVar3 = (DAT_004a5c1c + 0xb) / 0x1200;
    DAT_004a5c1c = (DAT_004a5c1c + 0xb) % 0x1200;
  }
  return uVar3;
}
