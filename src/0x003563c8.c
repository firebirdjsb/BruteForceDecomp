/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 92A5942E19A4863A406A138CB584578D3A2C32063AD735D98C63B10E6F75153E
 * Entry: 0x003563c8, Ghidra index: 13140, label: FUN_003563c8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003563c8(int param_1,byte *param_2,char *param_3,uint param_4)

{
  char cVar1;
  byte *pbVar2;
  ushort uVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  if (((7 < param_4) && (iVar4 = FUN_0035628c(0,param_3,param_4), iVar4 == 0xffff)) &&
     ((*(byte *)(param_1 + 0xb) & 3) == 0)) {
    if (((*param_3 == '\x05') && (*(char *)(in_ECX + 0x8c0) != '\x16')) &&
       (((cVar1 = param_3[1], cVar1 == '\0' || ((cVar1 == '\x01' || (cVar1 == '\x02')))) ||
        (cVar1 == '\x03')))) {
      if (0x13 < param_4 - 8) {
        if ((param_3[8] & 0xf0U) == 0x40) {
          iVar4 = ((byte)param_3[8] & 0xf) << 2;
        }
        else {
          iVar4 = 0;
        }
        if (((iVar4 != 0) && (iVar4 + 8U <= param_4 - 8)) && (iVar4 == 0x14)) {
          FUN_00348242(*(undefined4 *)(param_3 + 0x18),*(undefined4 *)(param_2 + 0xc),
                       *(undefined4 *)(param_3 + 4));
        }
      }
    }
    else if ((*param_3 == '\b') && ((*(byte *)(in_ECX + 0x8c4) & 2) != 0)) {
      iVar4 = FUN_0034cc6e();
      if ((iVar4 != 0) &&
         ((((*param_2 & 0xf) == 5 && (param_4 < 0x49)) &&
          (puVar5 = (undefined4 *)FUN_0034cb5a(0x6b54454e,0x10040001,param_4,0,0,0),
          puVar5 != (undefined4 *)0x0)))) {
        pbVar2 = (byte *)*puVar5;
        pbVar7 = param_2;
        pbVar8 = pbVar2;
        for (uVar6 = param_4 + 0x14 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pbVar8 = *(undefined4 *)pbVar7;
          pbVar7 = pbVar7 + 4;
          pbVar8 = pbVar8 + 4;
        }
        for (uVar6 = param_4 + 0x14 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pbVar8 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          pbVar8 = pbVar8 + 1;
        }
        pbVar2[0x14] = 0;
        pbVar2[0x16] = 0;
        pbVar2[0x17] = 0;
        uVar3 = FUN_0035628c(0,pbVar2 + 0x14,param_4);
        *(ushort *)(pbVar2 + 0x16) = ~uVar3;
        FUN_0034a7ce(puVar5,*(undefined4 *)(param_2 + 0xc),1,0);
      }
    }
  }
  return;
}
