/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C9C2B17804C6DC1FF019C9F822DC5C4A832CF365A07F0CE1BBE594F47986A7D9
 * Entry: 0x002b1f40, Ghidra index: 9746, label: FUN_002b1f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_002b208a_default[];
undefined4 FUN_002b1f40(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int *unaff_EBX;
  int *piVar9;
  undefined4 local_8;
  int local_4;
  
  iVar4 = param_3;
  iVar3 = param_1;
  if (param_3 == -0xab10d6a) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 8);
  if (iVar2 < 0x105) {
    if (iVar2 == 0x104) {
      (**(code **)(**(int **)(param_1 + 8) + 0x34))(*(int **)(param_1 + 8),param_2,&param_2);
      (**(code **)(**(int **)(iVar3 + 0x10) + 0x38))(*(int **)(iVar3 + 0x10),iVar4,&local_4);
      return 0;
    }
    if (3 < iVar2) {
      if (iVar2 != 0x103) {
        return 0;
      }
      (**(code **)(**(int **)(param_1 + 8) + 0x48))(*(int **)(param_1 + 8),param_2,&param_1);
      (**(code **)(**(int **)(iVar3 + 0x10) + 0x4c))(*(int **)(iVar3 + 0x10),iVar4,local_8);
      return 0;
    }
    if (iVar2 == 3) {
      (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),param_2,&param_1);
      (**(code **)(**(int **)(iVar3 + 0x10) + 0x30))(*(int **)(iVar3 + 0x10),iVar4,local_8);
      return 0;
    }
    if (iVar2 != 1) {
      if (iVar2 != 2) {
        return 0;
      }
      (**(code **)(**(int **)(param_1 + 8) + 0x24))(*(int **)(param_1 + 8),param_2,&param_1);
      (**(code **)(**(int **)(iVar3 + 0x10) + 0x28))(*(int **)(iVar3 + 0x10),iVar4,local_8);
      return 0;
    }
    (**(code **)(**(int **)(param_1 + 8) + 0x1c))(*(int **)(param_1 + 8),param_2,&param_1);
    (**(code **)(**(int **)(iVar3 + 0x10) + 0x20))(*(int **)(iVar3 + 0x10),iVar4,local_8);
    return 0;
  }
  switch(iVar2) {
  case 0x105:
    puVar1 = (undefined4 *)(param_1 + 8);
    param_1 = 0;
    local_4 = *(int *)*puVar1;
    piVar7 = (int *)FUN_00076fe0();
    piVar9 = param_2;
    (**(code **)(local_4 + 0x18))(*(undefined4 *)(iVar3 + 8));
    local_4 = **(int **)(iVar3 + 0x10);
    piVar6 = (int *)FUN_00076fe0();
    (**(code **)(local_4 + 0x18))(*(undefined4 *)(iVar3 + 0x10),iVar4);
    (**(code **)(*unaff_EBX + 0x10))(unaff_EBX);
    (**(code **)(*piVar7 + 0x30))(piVar7);
    goto LAB_002b2329;
  case 0x106:
  case 0x107:
  case 0x108:
  case 0x109:
  case 0x10a:
  case 0x10b:
  case 0x10c:
  case 0x10d:
  case 0x10e:
  case 0x10f:
  case 0x110:
  case 0x111:
  case 0x112:
  case 0x113:
  case 0x114:
  case 0x115:
  case 0x116:
  case 0x117:
  case 0x118:
  case 0x119:
  case 0x11a:
  case 0x11b:
  case 0x11c:
  case 0x11d:
  case 0x11e:
  case 0x11f:
  case 0x120:
  case 0x121:
  case 0x122:
  case 0x123:
  case 0x124:
  case 0x125:
  case 0x126:
  case 0x127:
  case 0x128:
  case 0x129:
  case 0x12a:
  case 299:
  case 300:
  case 0x12d:
  case 0x12e:
  case 0x12f:
  case 0x130:
  case 0x131:
  case 0x132:
  case 0x133:
  case 0x134:
  case 0x135:
  case 0x136:
  case 0x137:
  case 0x138:
  case 0x139:
  case 0x13a:
  case 0x13b:
  case 0x13c:
  case 0x13d:
  case 0x13e:
  case 0x13f:
  case 0x140:
  case 0x141:
  case 0x142:
  case 0x143:
  case 0x144:
  case 0x145:
  case 0x146:
  case 0x147:
  case 0x148:
  case 0x149:
  case 0x14a:
  case 0x14b:
  case 0x14c:
  case 0x14d:
  case 0x14e:
  case 0x14f:
  case 0x150:
  case 0x151:
  case 0x152:
  case 0x153:
  case 0x154:
  case 0x155:
  case 0x156:
  case 0x157:
  case 0x158:
  case 0x159:
  case 0x15a:
  case 0x15b:
  case 0x15c:
  case 0x15d:
  case 0x15e:
  case 0x15f:
  case 0x160:
  case 0x161:
  case 0x162:
  case 0x163:
  case 0x164:
  case 0x165:
  case 0x166:
  case 0x167:
  case 0x168:
  case 0x169:
  case 0x16a:
  case 0x16b:
  case 0x16c:
  case 0x16d:
  case 0x16e:
  case 0x16f:
  case 0x170:
  case 0x171:
  case 0x172:
  case 0x173:
  case 0x174:
  case 0x175:
  case 0x176:
  case 0x177:
  case 0x178:
  case 0x179:
  case 0x17a:
  case 0x17b:
  case 0x17c:
  case 0x17d:
  case 0x17e:
  case 0x17f:
  case 0x180:
  case 0x181:
  case 0x182:
  case 0x183:
  case 0x184:
  case 0x185:
  case 0x186:
  case 0x187:
  case 0x188:
  case 0x189:
  case 0x18a:
  case 0x18b:
  case 0x18c:
  case 0x18d:
  case 0x18e:
  case 399:
  case 400:
  case 0x191:
  case 0x192:
  case 0x193:
  case 0x194:
  case 0x195:
  case 0x196:
  case 0x197:
  case 0x198:
  case 0x199:
  case 0x19a:
  case 0x19b:
  case 0x19c:
  case 0x19d:
  case 0x19e:
  case 0x19f:
  case 0x1a0:
  case 0x1a1:
  case 0x1a2:
  case 0x1a3:
  case 0x1a4:
  case 0x1a5:
  case 0x1a6:
  case 0x1a7:
  case 0x1a8:
  case 0x1a9:
  case 0x1aa:
  case 0x1ab:
  case 0x1ac:
  case 0x1ad:
  case 0x1ae:
  case 0x1af:
  case 0x1b0:
  case 0x1b1:
  case 0x1b2:
  case 0x1b3:
  case 0x1b4:
  case 0x1b5:
  case 0x1b6:
  case 0x1b7:
  case 0x1b8:
  case 0x1b9:
  case 0x1ba:
  case 0x1bb:
  case 0x1bc:
  case 0x1bd:
  case 0x1be:
  case 0x1bf:
  case 0x1c0:
  case 0x1c1:
  case 0x1c2:
  case 0x1c3:
  case 0x1c4:
  case 0x1c5:
  case 0x1c6:
  case 0x1c7:
  case 0x1c8:
  case 0x1c9:
  case 0x1ca:
  case 0x1cb:
  case 0x1cc:
  case 0x1cd:
  case 0x1ce:
  case 0x1cf:
  case 0x1d0:
  case 0x1d1:
  case 0x1d2:
  case 0x1d3:
  case 0x1d4:
  case 0x1d5:
  case 0x1d6:
  case 0x1d7:
  case 0x1d8:
  case 0x1d9:
  case 0x1da:
  case 0x1db:
  case 0x1dc:
  case 0x1dd:
  case 0x1de:
  case 0x1df:
  case 0x1e0:
  case 0x1e1:
  case 0x1e2:
  case 0x1e3:
  case 0x1e4:
  case 0x1e5:
  case 0x1e6:
  case 0x1e7:
  case 0x1e8:
  case 0x1e9:
  case 0x1ea:
  case 0x1eb:
  case 0x1ec:
  case 0x1ed:
  case 0x1ee:
  case 0x1ef:
  case 0x1f0:
  case 0x1f1:
  case 0x1f2:
  case 499:
  case 500:
  case 0x1f5:
  case 0x1f6:
  case 0x1f7:
  case 0x1f8:
  case 0x1f9:
  case 0x1fa:
  case 0x1fb:
  case 0x1fc:
  case 0x1fd:
  case 0x1fe:
  case 0x1ff:
    break;
  case 0x200:
    puVar1 = (undefined4 *)(param_1 + 8);
    param_1 = 0;
    local_4 = *(int *)*puVar1;
    piVar5 = (int *)FUN_00076fe0();
    piVar9 = param_2;
    (**(code **)(local_4 + 0x58))(*(undefined4 *)(iVar3 + 8));
    iVar2 = **(int **)(iVar3 + 0x10);
    piVar6 = (int *)FUN_00076fe0();
    (**(code **)(iVar2 + 0x58))(*(undefined4 *)(iVar3 + 0x10),iVar4);
    (**(code **)(*unaff_EBX + 0x10))(unaff_EBX);
    piVar7 = piVar5;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    FUN_00076fe0();
    FUN_0029dda0();
    (**(code **)(**(int **)(iVar3 + 0x10) + 0x5c))(*(int **)(iVar3 + 0x10),unaff_EBX,piVar7);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
LAB_002b2329:
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
    }
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 8))(piVar9);
    }
    break;
  case 0x201:
    puVar1 = (undefined4 *)(param_1 + 8);
    param_1 = 0;
    local_4 = *(int *)*puVar1;
    piVar5 = (int *)FUN_00076fe0();
    piVar9 = param_2;
    (**(code **)(local_4 + 0x50))(*(undefined4 *)(iVar3 + 8));
    iVar2 = **(int **)(iVar3 + 0x10);
    piVar6 = (int *)FUN_00076fe0();
    (**(code **)(iVar2 + 0x50))(*(undefined4 *)(iVar3 + 0x10),iVar4);
    (**(code **)(*unaff_EBX + 0x10))(unaff_EBX);
    piVar7 = piVar5;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    FUN_00076fe0();
    FUN_0029de40();
    (**(code **)(**(int **)(iVar3 + 0x10) + 0x54))(*(int **)(iVar3 + 0x10),unaff_EBX,piVar7);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
    }
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 8))(piVar9);
      return 0;
    }
    break;
  case 0x202:
    puVar1 = (undefined4 *)(param_1 + 8);
    param_1 = 0;
    local_4 = *(int *)*puVar1;
    piVar7 = (int *)FUN_00076fe0();
    piVar9 = param_2;
    (**(code **)(local_4 + 0x60))(*(undefined4 *)(iVar3 + 8),param_2);
    local_4 = **(int **)(iVar3 + 0x10);
    uVar8 = FUN_00076fe0();
    (**(code **)(local_4 + 0x60))(*(undefined4 *)(iVar3 + 0x10),iVar4,uVar8);
    (**(code **)(*unaff_EBX + 0x10))(unaff_EBX,piVar9);
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    FUN_00076fe0();
    FUN_0029df00();
    (**(code **)(**(int **)(iVar3 + 0x10) + 100))(*(int **)(iVar3 + 0x10),iVar4,piVar7);
    FUN_00076fc0();
    FUN_00076fc0();
    FUN_00076fc0();
    return 0;
  default:
    goto switchD_002b208a_default;
  }
switchD_002b208a_default:
  return 0;
}
