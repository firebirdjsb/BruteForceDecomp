/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8EDD4079B4366CC4513C9A05B31C725EE66B08595640AA539ACC1B7749B643E3
 * Entry: 0x0037fbda, Ghidra index: 13508, label: FUN_0037fbda
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0037fbda(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = *param_1;
  uVar2 = *(uint *)(iVar1 + 4);
  if ((uVar2 & 0x100) == 0) {
    uVar3 = uVar2 >> 6 & 3;
    if ((uVar3 != 0) && (uVar3 != 2)) {
      *(uint *)(iVar1 + 4) = uVar2 & 0xffffff7f | 0x40;
      local_8 = 0xffffffff;
      local_c = 0xfffcf2c0;
      KeDelayExecutionThread(0,0,&local_c);
    }
  }
  else {
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 8;
    do {
    } while ((*(uint *)(*param_1 + 4) & 0x100) != 0);
  }
  return;
}
