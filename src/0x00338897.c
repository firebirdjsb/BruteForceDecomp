/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C50AE970ACAAEBF5AA0E5B987B8FBE2310F8ECFE6702F73599FCD466890539F9
 * Entry: 0x00338897, Ghidra index: 12478, label: FUN_00338897
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00338897(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int local_8;
  
  uVar3 = param_1;
  iVar4 = FUN_00330c3e(param_1 + 100);
  if (iVar4 == 0) {
    return 0;
  }
  if ((-1 < iVar4) && (iVar4 = FUN_0033eec2(uVar3 + 100,&param_1,0,0), -1 < iVar4)) {
    if (param_1 == 0) {
      if ((*(byte *)(uVar3 + 0x1a) & 0x80) == 0) {
        iVar4 = -0x7ff8d8ba;
      }
      else {
        *(undefined4 *)(uVar3 + 0xc0) = *(undefined4 *)(uVar3 + 200);
        *(undefined4 *)(uVar3 + 0xc4) = *(undefined4 *)(uVar3 + 0xcc);
      }
    }
    else {
      iVar4 = FUN_0033e5ee(uVar3,param_1,&local_8);
      if (iVar4 < 0) goto LAB_00338a12;
      if (local_8 == 0) {
        if ((*(byte *)(uVar3 + 0xe4) & 1) == 0) {
          puVar1 = (uint *)(uVar3 + 200);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 + param_1;
          *(int *)(uVar3 + 0xcc) = *(int *)(uVar3 + 0xcc) + (uint)CARRY4(uVar2,param_1);
          *(int *)(uVar3 + 0xe0) = *(int *)(uVar3 + 0xe0) + param_1;
        }
      }
      else {
        iVar4 = (**(code **)(uVar3 + 0xec))(uVar3);
        if (iVar4 < 0) goto LAB_00338a12;
        puVar1 = (uint *)(uVar3 + 200);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + *(uint *)(uVar3 + 0xe0);
        *(int *)(uVar3 + 0xcc) =
             *(int *)(uVar3 + 0xcc) + (uint)CARRY4(uVar2,*(uint *)(uVar3 + 0xe0));
      }
    }
    if (-1 < iVar4) {
      if ((*(byte *)(uVar3 + 0xe4) & 1) == 0) {
        if ((*(uint *)(uVar3 + 0xc4) < *(uint *)(uVar3 + 0xcc)) ||
           (((*(uint *)(uVar3 + 0xc4) <= *(uint *)(uVar3 + 0xcc) &&
             (*(uint *)(uVar3 + 0xc0) <= *(uint *)(uVar3 + 200))) ||
            (*(uint *)(uVar3 + 0xa8) <= *(uint *)(uVar3 + 200))))) {
          FUN_0034508f(*(undefined4 *)(uVar3 + 0x74),2);
          if (*(int *)(uVar3 + 0x100) == 0) goto LAB_00338a15;
          if ((*(code **)(uVar3 + 0xf0) == (code *)0x0) ||
             (iVar4 = (**(code **)(uVar3 + 0xf0))(2,uVar3,*(int *)(uVar3 + 0x100)), -1 < iVar4)) {
            *(undefined4 *)(uVar3 + 0x14) = 7;
            return 0;
          }
          goto LAB_00338a12;
        }
      }
      *(int *)(uVar3 + 0xa0) = *(int *)(uVar3 + 0xa4) + *(int *)(uVar3 + 0xe0);
      *(int *)(uVar3 + 0x9c) = *(int *)(uVar3 + 0xa8) - *(int *)(uVar3 + 0xe0);
      FUN_0033f147(*(undefined4 *)(uVar3 + 0x74),(int *)(uVar3 + 0x9c),1,0,
                   *(undefined4 *)(uVar3 + 8),uVar3 + 100);
      iVar4 = FUN_0033f0ca(uVar3 + 100,0);
      if (-1 < iVar4) {
        *(byte *)(uVar3 + 0x1b) = *(byte *)(uVar3 + 0x1b) | 0x20;
        return 0;
      }
    }
  }
LAB_00338a12:
  *(int *)(uVar3 + 0xc) = iVar4;
LAB_00338a15:
  *(undefined4 *)(uVar3 + 0x14) = 8;
  return 0;
}
