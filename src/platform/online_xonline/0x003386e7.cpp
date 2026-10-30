/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A9048EE64F0383B0DD90DBB798D6022DDB80A94425FA4CBC4BEE61F00ADA0E3
 * Entry: 0x003386e7, Ghidra index: 12477, label: FUN_003386e7
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003386e7(uint param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = param_1;
  iVar1 = param_1 + 100;
  iVar5 = FUN_00330c3e(iVar1);
  if (iVar5 == 0) {
    return 0;
  }
  if ((-1 < iVar5) && (iVar5 = FUN_0033eec2(iVar1,&param_1,0,0), -1 < iVar5)) {
    uVar6 = param_1;
    if ((*(uint *)(uVar4 + 0x18) & 2) != 0) {
      uVar6 = param_1 - *(int *)(uVar4 + 0xe4);
      *(int *)(uVar4 + 0xe4) = 0;
      *(uint *)(uVar4 + 0x18) = *(uint *)(uVar4 + 0x18) & 0xfffffffd;
    }
    puVar2 = (uint *)(uVar4 + 0xd0);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 + uVar6;
    *(int *)(uVar4 + 0xd4) = *(int *)(uVar4 + 0xd4) + (uint)CARRY4(uVar3,uVar6);
    iVar5 = (**(code **)(uVar4 + 0xe8))(uVar4);
    if (-1 < iVar5) {
      if (iVar5 == 0) {
        if ((*(byte *)(uVar4 + 0x1a) & 0x10) != 0) {
          FUN_0034508f(*(undefined4 *)(uVar4 + 0x74),1);
        }
        *(undefined4 *)(uVar4 + 0xa0) = *(undefined4 *)(uVar4 + 0xa4);
        *(undefined4 *)(uVar4 + 0x9c) = *(undefined4 *)(uVar4 + 0xa8);
        FUN_0033f147(*(undefined4 *)(uVar4 + 0x74),(undefined4 *)(uVar4 + 0x9c),1,0,
                     *(undefined4 *)(uVar4 + 8),uVar4 + 100);
        iVar5 = FUN_0033f0ca(uVar4 + 100,0);
        if (-1 < iVar5) {
          *(byte *)(uVar4 + 0x1b) = *(byte *)(uVar4 + 0x1b) | 0x20;
          *(undefined4 *)(uVar4 + 200) = 0;
          *(undefined4 *)(uVar4 + 0xcc) = 0;
          *(undefined4 *)(uVar4 + 0xc4) = 0;
          if ((*(uint *)(uVar4 + 0x18) & 0x800000) == 0) {
            *(undefined4 *)(uVar4 + 0xc0) = 0;
          }
          else {
            *(undefined4 *)(uVar4 + 0xc0) = *(undefined4 *)(uVar4 + 0xa8);
          }
          *(undefined4 *)(uVar4 + 0xe0) = 0;
          *(undefined4 *)(uVar4 + 0xe4) = 1;
          *(uint *)(uVar4 + 0x14) = (*(uint *)(uVar4 + 0x18) & 0x400000 | 0x1000000) >> 0x16;
          return 0;
        }
      }
      else {
        puVar2 = (uint *)(uVar4 + 0x9c);
        if (param_1 < *puVar2) {
          *(int *)(uVar4 + 0xa0) = *(int *)(uVar4 + 0xa0) + param_1;
          *puVar2 = *puVar2 - param_1;
          FUN_0033f147(*(undefined4 *)(uVar4 + 0x74),puVar2,1,0,*(undefined4 *)(uVar4 + 8),iVar1);
          iVar5 = FUN_0033f0ca(uVar4 + 100,1);
          if (-1 < iVar5) {
            *(byte *)(uVar4 + 0x1b) = *(byte *)(uVar4 + 0x1b) | 0x20;
            return 0;
          }
        }
        else {
          *(undefined4 *)(uVar4 + 0xa0) = *(undefined4 *)(uVar4 + 0xa4);
          *puVar2 = 0;
          if ((*(code **)(uVar4 + 0xf0) == (code *)0x0) ||
             (iVar5 = (**(code **)(uVar4 + 0xf0))(1,uVar4,*(undefined4 *)(uVar4 + 0xfc)), -1 < iVar5
             )) {
            *(undefined4 *)(uVar4 + 0x14) = 2;
            return 0;
          }
        }
      }
    }
  }
  *(int *)(uVar4 + 0xc) = iVar5;
  *(undefined4 *)(uVar4 + 0x14) = 8;
  return 0;
}
