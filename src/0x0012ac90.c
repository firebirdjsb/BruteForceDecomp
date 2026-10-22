/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5BDC9AB61A6D5E7CBAA86F7F0C2D1299898AB7959E238397599F577F8EE8C88F
 * Entry: 0x0012ac90, Ghidra index: 3775, label: FUN_0012ac90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0012ac90(float param_1,undefined4 param_2,float param_3,float param_4,float param_5,
                 undefined4 param_6,char param_7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int *in_ECX;
  float local_54;
  float local_50;
  float local_4c [2];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_28;
  
  iVar1 = *(int *)(*(int *)(*in_ECX + 0x1c) + 0x204);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x3c);
    *(int *)(iVar1 + 0x3c) = iVar2 + 1;
    FUN_000d1420(in_ECX[4]);
joined_r0x0012acd3:
    if (local_28 != 0) {
      for (puVar3 = *(undefined4 **)(local_28 + 0x1c); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)*puVar3) {
        fVar4 = *(float *)((uint)*(ushort *)(puVar3 + 2) * 0x10 + 0xc + *(int *)(iVar1 + 0x14));
        if ((((fVar4 != 0.0) &&
             (iVar5 = *(int *)((int)fVar4 + 0x18), *(int *)((int)fVar4 + 0x18) = iVar2,
             iVar5 != iVar2)) &&
            (uVar7 = -(uint)((*(byte *)((int)fVar4 + 0x26) & 0x40) != 0) & (uint)fVar4, uVar7 != 0))
           && ((((*(byte *)(uVar7 + 0x70) & 0x20) != 0 && ((*(byte *)(uVar7 + 0x71) & 8) != 0)) &&
               ((*(int *)(*(int *)((int)fVar4 + 0xc) + 4) == 2 &&
                (cVar6 = FUN_00022bc0(local_4c), cVar6 != '\0')))))) {
          local_40 = param_5 - local_34;
          local_54 = param_4 - local_38;
          local_50 = local_40;
          local_44 = local_54;
          if ((param_3 - local_3c) * (param_3 - local_3c) +
              local_54 * local_54 + local_40 * local_40 <=
              (param_1 + local_4c[0]) * (param_1 + local_4c[0])) {
            local_50 = fVar4;
            FUN_0010af20();
          }
        }
      }
      do {
        cVar6 = FUN_000d14d0();
        if (cVar6 == '\0') {
          local_28 = 0;
          break;
        }
      } while (local_28 == 0);
      goto joined_r0x0012acd3;
    }
    if (param_7 != '\0') {
      local_28 = 0;
      for (puVar3 = *(undefined4 **)(iVar1 + 0x2c); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)*puVar3) {
        fVar4 = *(float *)((uint)*(ushort *)(puVar3 + 2) * 0x10 + 0xc + *(int *)(iVar1 + 0x14));
        if ((((fVar4 != 0.0) &&
             (iVar5 = *(int *)((int)fVar4 + 0x18), *(int *)((int)fVar4 + 0x18) = iVar2,
             iVar5 != iVar2)) &&
            ((uVar7 = -(uint)((*(byte *)((int)fVar4 + 0x26) & 0x40) != 0) & (uint)fVar4, uVar7 != 0
             && ((((*(byte *)(uVar7 + 0x70) & 0x20) != 0 && ((*(byte *)(uVar7 + 0x71) & 8) != 0)) &&
                 (*(int *)(*(int *)((int)fVar4 + 0xc) + 4) == 2)))))) &&
           (cVar6 = FUN_00022bc0(&local_54), cVar6 != '\0')) {
          local_50 = param_5 - local_34;
          local_44 = param_4 - local_38;
          local_4c[0] = local_44;
          local_40 = local_50;
          if ((param_3 - local_3c) * (param_3 - local_3c) +
              local_44 * local_44 + local_50 * local_50 <=
              (local_54 + param_1) * (local_54 + param_1)) {
            local_4c[0] = fVar4;
            FUN_0010af20();
          }
        }
      }
    }
  }
  return;
}
