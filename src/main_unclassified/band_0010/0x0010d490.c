/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A5CD8DE73ED419F010BE6A57B56384CCB5FFB100DD61AC21151FBA39E82C1EC4
 * Entry: 0x0010d490, Ghidra index: 3491, label: FUN_0010d490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0010d490(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined4 local_c;
  float local_8;
  float local_4;
  
  local_4 = *(float *)(unaff_ESI + 0xdc);
  local_c = *(undefined4 *)(unaff_ESI + 0xe0);
  fVar2 = (float10)FUN_0010ad90();
  local_4 = (float)(((float10)local_4 - fVar2) * (float10)0.5);
  fVar2 = (float10)FUN_0010ad90();
  local_8 = (float)fVar2;
  uVar4 = 0;
  uVar3 = 0xf83fc948;
  if (*(char *)(unaff_ESI + 0x90) != '\0') {
    local_10 = 200;
    local_f = 200;
    local_e = 0xff;
    local_d = 0xff;
    FUN_000ee6e0(unaff_ESI,local_4,0,local_8,local_c,&local_10,0xf83fc948,0);
    (**(code **)(*(int *)(unaff_ESI + 200) + 0xc))();
    return;
  }
  uVar1 = FUN_000b2110(unaff_ESI + 0x1c0,&local_10);
  FUN_000ee6e0(unaff_ESI,local_8 + local_4,0,0x40000000,local_c,uVar1,uVar3,uVar4);
  (**(code **)(*(int *)(unaff_ESI + 200) + 0xc))();
  return;
}
