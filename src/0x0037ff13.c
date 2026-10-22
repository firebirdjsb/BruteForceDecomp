/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 07844FB09F6413FC17929C2057905CDD4F0705DEAFA292CD574D522456F703A7
 * Entry: 0x0037ff13, Ghidra index: 13521, label: FUN_0037ff13
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0037ff13(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_2 + 0xc);
  puVar1 = *(undefined4 **)(param_2 + 8);
  if ((uVar3 & 0x40000) == 0) {
    if ((uVar3 & 0x20000) == 0) {
      if ((uVar3 & 0x10000) == 0) {
        *(uint *)(param_2 + 0xc) = uVar3 & 0xfff7ffff;
        *(undefined4 *)(param_2 + 8) = 0;
        if ((uVar3 & 1) != 0) {
          puVar1[2] = 0;
          KeSetEvent(param_2 + 300,0,0);
          *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xfffffffe;
        }
        if ((*(byte *)(param_2 + 0xc) & 2) == 0) {
          return;
        }
        FUN_00382383();
        *puVar1 = 0;
        *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) & 0xfffffffd | 4;
        return;
      }
      *(undefined1 *)(param_2 + 0x111) = 0xc3;
      uVar3 = uVar3 & 0xfffeffff;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x20);
      *(undefined4 *)(param_2 + 0x20) = 0;
      *(undefined1 *)(param_2 + 0x111) = 0x43;
      *(undefined4 *)(param_2 + 0x120) = uVar2;
      uVar3 = uVar3 & 0xfffdffff;
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_2 + 0x24) = 0;
    *(undefined1 *)(param_2 + 0x111) = 0x43;
    *(undefined4 *)(param_2 + 0x120) = uVar2;
    uVar3 = uVar3 & 0xfffbffff;
  }
  *(undefined1 *)(param_2 + 0x110) = 0x1c;
  *(code **)(param_2 + 0x118) = FUN_0037ff13;
  *(int *)(param_2 + 0x11c) = param_2;
  *(uint *)(param_2 + 0xc) = uVar3;
  FUN_00381379((undefined1 *)(param_2 + 0x110));
  return;
}
