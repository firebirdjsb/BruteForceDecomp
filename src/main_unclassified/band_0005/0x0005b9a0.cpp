/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EFDB2C20B29F776778ED8F5FBDC6364CBB68E2FDDA366E72B06C9501087C5A5F
 * Entry: 0x0005b9a0, Ghidra index: 927, label: FUN_0005b9a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea01d_allocator_guest32.h"
void FUN_0005b9a0(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 != 0) {
    uVar1 = 0;
    if (param_1[1] != 0) {
      do {
        if (uVar1 < param_1[1]) {
          iVar2 = *(int *)(param_1[2] + uVar1 * 4);
        }
        else {
          iVar2 = 0;
        }
        if (*(int *)(iVar2 + 4) == param_2) {
          if (uVar1 != 0xffffffff) {
            return;
          }
          break;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < param_1[1]);
    }
    iVar2 = FUN_002ea01d(0x24);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 4) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(undefined4 *)(iVar2 + 0x14) = 0;
      *(undefined4 *)(iVar2 + 0x18) = 0;
      *(undefined4 *)(iVar2 + 0x1c) = 0;
    }
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(byte *)(iVar2 + 0x20) = *(byte *)(iVar2 + 0x20) & 0xfe;
    if (*(int *)(iVar2 + 4) != param_2) {
      FUN_0008f6a0(param_2);
    }
    if (*param_1 <= param_1[1]) {
      FUN_0005dc80();
    }
    *(int *)(param_1[2] + param_1[1] * 4) = iVar2;
    param_1[1] = param_1[1] + 1;
    *(uint **)(param_2 + 0x59c) = param_1;
    (**(code **)(*(int *)(param_2 + 0x1b4) + 0xa0))(param_1[3]);
    FUN_0014cb60(param_1[5]);
    uVar1 = 0;
    if (param_1[1] != 0) {
      while (((param_1[1] <= uVar1 || (iVar2 = *(int *)(param_1[2] + uVar1 * 4), iVar2 == 0)) ||
             (*(int *)(iVar2 + 0x14) == 0))) {
        uVar1 = uVar1 + 1;
        if (param_1[1] <= uVar1) {
          return;
        }
      }
      FUN_0005bda0();
    }
  }
  return;
}
