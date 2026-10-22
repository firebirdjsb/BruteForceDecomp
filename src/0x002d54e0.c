/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD2616921DC0125EA1242E03D4EF0675199DFAE84942A259F09FEB30078E599A
 * Entry: 0x002d54e0, Ghidra index: 10222, label: FUN_002d54e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469f20;
undefined4 FUN_002d54e0(int *param_1)

{
  short *psVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float local_10;
  int local_c [3];
  
  iVar6 = 0;
  local_c[0] = *(ushort *)((int)param_1 + 0x22) - 1;
  local_c[2] = 0;
  local_10 = DAT_00469f20;
  if (-1 < local_c[0]) {
    do {
      iVar5 = *(int *)(param_1[9] + local_c[0] * 4);
      if ((((**(int **)(iVar5 + 0x30) << 0x1c) >> 0x1e |
           (int)*(char *)((int)*(int **)(iVar5 + 0x30) + 0x65)) &
          ((**(int **)(iVar5 + 0x2c) << 0x1c) >> 0x1e |
          (int)*(char *)((int)*(int **)(iVar5 + 0x2c) + 0x65))) == 0) {
        uVar4 = (uint)*(ushort *)(iVar5 + 2);
        while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
          iVar2 = *(int *)(*(int *)(iVar5 + 4) + uVar4 * 4);
          if (*(char *)(*(int *)(iVar2 + 0x40) + 0x4c) != '\x01') {
            *(int *)(*param_1 + 0x68) = *(int *)(*param_1 + 0x68) + 1;
            FUN_002d59c0();
          }
          if (*(float *)(*(int *)(iVar2 + 0x40) + 0x54) < local_10) {
            local_10 = *(float *)(*(int *)(iVar2 + 0x40) + 0x54);
            iVar6 = iVar2;
            local_c[2] = iVar5;
          }
        }
      }
      local_c[0] = local_c[0] + -1;
    } while (-1 < local_c[0]);
    if (iVar6 != 0) {
      iVar5 = 0x6c;
      do {
        iVar2 = *(int *)(iVar5 + *(int *)(iVar6 + 0x40));
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1cc) == 0)) {
          if (*(ushort *)(param_1 + 5) <= *(ushort *)((int)param_1 + 0x16)) {
            FUN_002ccf80();
          }
          *(int *)(param_1[6] + (uint)*(ushort *)((int)param_1 + 0x16) * 4) = iVar2;
          *(short *)((int)param_1 + 0x16) = *(short *)((int)param_1 + 0x16) + 1;
          if (*(char *)(iVar2 + 100) < '\b') {
            FUN_002bb290();
          }
        }
        iVar5 = iVar5 + -4;
      } while (0x67 < iVar5);
      psVar1 = (short *)(*(int *)(iVar6 + 0x40) + 0x4a);
      *psVar1 = *psVar1 + 1;
      FUN_002d4fe0(*(int *)(iVar6 + 0x40),local_c,*(undefined4 *)(*(int *)(iVar6 + 0x40) + 0x50),
                   iVar6);
      iVar6 = 1;
      do {
        pbVar3 = (byte *)local_c[iVar6];
        if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 0xc) == 0)) {
          if ((*(int *)(pbVar3 + 0x1cc) == 0) || (*(int *)(*(int *)(pbVar3 + 0x1cc) + 0x20) == 0)) {
            FUN_002d5420(pbVar3,local_c[2]);
          }
          else {
            FUN_002d5670();
          }
        }
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
      return 1;
    }
  }
  return 0;
}
