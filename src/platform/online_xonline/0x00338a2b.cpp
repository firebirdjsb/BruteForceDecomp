/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 713A9EA148F62C7898D9AA8D48807628EF78194B9F527A653C6A71DE0D81E49C
 * Entry: 0x00338a2b, Ghidra index: 12479, label: FUN_00338a2b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 * FUN_00338a2b(uint param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int local_c [2];
  
  uVar5 = param_1;
  iVar1 = param_1 + 100;
  iVar6 = FUN_00330c3e(iVar1);
  if (iVar6 == 0) {
    return (undefined1 *)0x0;
  }
  if ((iVar6 < 0) || (iVar6 = FUN_0033eec2(iVar1,&param_1,0,0), iVar6 < 0)) goto LAB_00338ba7;
  if (param_1 == 0) {
    if ((*(byte *)(uVar5 + 0x1a) & 0x80) == 0) {
      iVar6 = -0x7ff8d8ba;
    }
    else {
      *(undefined4 *)(uVar5 + 0xc0) = *(undefined4 *)(uVar5 + 200);
      *(undefined4 *)(uVar5 + 0xc4) = *(undefined4 *)(uVar5 + 0xcc);
    }
  }
  else {
    iVar6 = FUN_0033e5ee(uVar5,param_1,local_c);
    if (iVar6 < 0) goto LAB_00338ba7;
    if (local_c[0] == 0) {
      if ((*(byte *)(uVar5 + 0xe4) & 1) == 0) {
        puVar2 = (uint *)(uVar5 + 200);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 + param_1;
        *(int *)(uVar5 + 0xcc) = *(int *)(uVar5 + 0xcc) + (uint)CARRY4(uVar3,param_1);
        *(int *)(uVar5 + 0xe0) = *(int *)(uVar5 + 0xe0) + param_1;
      }
    }
    else {
      iVar6 = (**(code **)(uVar5 + 0xec))(uVar5);
      if (iVar6 < 0) goto LAB_00338ba7;
      puVar2 = (uint *)(uVar5 + 200);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 + *(uint *)(uVar5 + 0xe0);
      *(int *)(uVar5 + 0xcc) = *(int *)(uVar5 + 0xcc) + (uint)CARRY4(uVar3,*(uint *)(uVar5 + 0xe0));
    }
  }
  if (iVar6 < 0) goto LAB_00338ba7;
  if ((*(byte *)(uVar5 + 0xe4) & 1) != 0) {
LAB_00338b5f:
    *(int *)(uVar5 + 0xa0) = *(int *)(uVar5 + 0xa4) + *(int *)(uVar5 + 0xe0);
    *(int *)(uVar5 + 0x9c) = *(int *)(uVar5 + 0xa8) - *(int *)(uVar5 + 0xe0);
    FUN_0033f147(*(undefined4 *)(uVar5 + 0x74),(int *)(uVar5 + 0x9c),1,0,*(undefined4 *)(uVar5 + 8),
                 uVar5 + 100);
    iVar6 = FUN_0033f0ca(uVar5 + 100,0);
    if (-1 < iVar6) {
      *(byte *)(uVar5 + 0x1b) = *(byte *)(uVar5 + 0x1b) | 0x20;
      return (undefined1 *)0x0;
    }
LAB_00338ba7:
    *(int *)(uVar5 + 0xc) = iVar6;
    *(undefined4 *)(uVar5 + 0x14) = 8;
    return (undefined1 *)0x0;
  }
  uVar3 = *(uint *)(uVar5 + 0xcc);
  uVar4 = *(uint *)(uVar5 + 0xc4);
  if (uVar3 <= uVar4) {
    if (((uVar3 < uVar4) || (*(uint *)(uVar5 + 200) < *(uint *)(uVar5 + 0xc0))) &&
       (*(uint *)(uVar5 + 200) < *(uint *)(uVar5 + 0xa8))) goto LAB_00338b5f;
    if ((uVar3 < uVar4) || ((uVar3 == uVar4 && (*(uint *)(uVar5 + 200) < *(uint *)(uVar5 + 0xc0)))))
    goto LAB_00338b4d;
  }
  FUN_0034508f(*(undefined4 *)(uVar5 + 0x74),2);
LAB_00338b4d:
  *(byte *)(uVar5 + 0x1a) = *(byte *)(uVar5 + 0x1a) | 0x20;
  *(undefined4 *)(uVar5 + 0x14) = 6;
  return (uintptr_t)0x0015fffdU;
}
