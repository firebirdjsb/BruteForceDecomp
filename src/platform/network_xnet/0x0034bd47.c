/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FBA8DA494E65B869D42F6BB90D71D1BFFA3330D9F6068ED85E2029896E957D73
 * Entry: 0x0034bd47, Ghidra index: 12949, label: FUN_0034bd47
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034bd47(undefined4 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int in_ECX;
  uint uVar11;
  uint uVar12;
  int iVar13;
  char local_10;
  
  puVar7 = param_1;
  if (0x13 < *(ushort *)(param_1 + 1)) {
    pbVar3 = (byte *)*param_1;
    iVar13 = *(int *)(pbVar3 + 0x10);
    uVar6 = *(ushort *)(pbVar3 + 2) >> 8 | *(ushort *)(pbVar3 + 2) << 8;
    uVar12 = (uint)uVar6;
    iVar4 = *(int *)(pbVar3 + 0xc);
    if ((*pbVar3 & 0xf0) == 0x40) {
      uVar8 = *pbVar3 & 0xf;
      uVar9 = uVar8 * 4;
      if ((((0x13 < uVar9) && (uVar9 <= uVar12)) && (uVar12 <= *(ushort *)(param_1 + 1))) &&
         (((param_1[2] & 0x80000) == 0 || (iVar13 == *(int *)(in_ECX + 0x268))))) {
        *(ushort *)(param_1 + 1) = uVar6;
        if (0x14 < uVar9) {
          param_1[2] = (uVar9 - 0x14) * 0x40000 | param_1[2] & 0xff0fffff;
        }
        iVar10 = FUN_0035628c(0,pbVar3,uVar9);
        if ((iVar10 == 0xffff) && (iVar13 != 0)) {
          uVar5 = param_1[2];
          uVar11 = uVar5 >> 0x18 & 1;
          if ((((uVar11 == 0) || (iVar13 == -1)) && (iVar4 != -1)) &&
             (((uVar5 & 0x2000000) != 0 ||
              ((((/* 0x34bd8a stores the full value at EBP+8; 0x34be3c
                    * compares its low byte, without modifying the saved pointer. */
                  (uint8_t)iVar13 != UINT8_C(0x7f) &&
                 (local_10 = (char)iVar4, local_10 != '\x7f')) &&
                ((iVar4 != *(int *)(in_ECX + 0x268) || (iVar4 == 0)))) &&
               ((((uVar11 != 0 || (iVar13 == -1)) || (*(int *)(in_ECX + 0x268) == iVar13)) ||
                ((((pbVar3[9] == 0x11 && (uVar9 + 8 <= uVar12)) &&
                  (*(short *)(pbVar3 + uVar9 + 2) == 0x4400)) ||
                 ((iVar13 == 0x1000000 && (pbVar3[9] == 0x11)))))))))))) {
            if ((*(ushort *)(pbVar3 + 6) & 0xff3f) == 0) {
              iVar13 = uVar12 + uVar8 * -4;
              pbVar1 = pbVar3 + uVar9;
              bVar2 = pbVar3[9];
              if (bVar2 == 0x11) {
                puVar7[2] = uVar5 & 0xfffffffb | 3;
                FUN_0034bc19(puVar7,pbVar3,pbVar1,iVar13);
              }
              else if (bVar2 == 6) {
                puVar7[2] = uVar5 & 0xfffffffa | 2;
                FUN_00347f01(puVar7,pbVar3,pbVar1,iVar13);
              }
              else if (bVar2 == 1) {
                FUN_003563c8(puVar7,pbVar3,pbVar1,iVar13);
              }
            }
            else if ((uVar5 & 0x3000000) == 0) {
              FUN_0034bf1f(puVar7,pbVar3,uVar9,uVar12);
            }
          }
        }
      }
    }
  }
  return;
}
