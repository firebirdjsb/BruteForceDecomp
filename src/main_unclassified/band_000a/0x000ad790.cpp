/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 10AC0C44EF0DF1C3F6D0CCD0BC91CD61234978518C84988DBC0DCA8AE485A7DE
 * Entry: 0x000ad790, Ghidra index: 2076, label: FUN_000ad790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000bbea0(float param_1);
extern void FUN_000bb9d0(int *param_1);

void FUN_000ad790(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int in_EAX;
  undefined4 uVar4;
  undefined1 *puVar5;
  int in_ECX;
  int *in_EDX;
  
  if (in_EAX == in_EDX[0x1a]) {
    in_EDX[0x1b] = in_EDX[0x1b] + in_ECX;
  }
  else {
    in_EDX[0x1b] = in_ECX;
    in_EDX[0x1a] = in_EAX;
  }
  iVar3 = in_EDX[0x1b];
  if ((0 < in_ECX) || (iVar3 == 0)) {
    FUN_000bbea0(0x3dcccccd);
    in_EDX[0x18] = in_EDX[0x19];
    if (iVar3 == 0) {
      iVar3 = *in_EDX;
      uVar4 = FUN_001e97c0();
      FUN_001e97c0(uVar4);
      (**(code **)(iVar3 + 0x2c))();
      puVar5 = (undefined1 *)FUN_000b8820();
      goto LAB_000ad839;
    }
  }
  if ((uint)in_EDX[0x1b] < 2) {
    FUN_000bb9d0(in_EDX);
  }
  else {
    iVar3 = *in_EDX;
    FUN_001e97c0();
    (**(code **)(iVar3 + 0x2c))();
  }
  puVar5 = (undefined1 *)FUN_000b87a0();
LAB_000ad839:
  uVar1 = puVar5[2];
  uVar2 = puVar5[1];
  iVar3 = in_EDX[0xb];
  *(undefined1 *)(iVar3 + 0x38) = *puVar5;
  *(undefined1 *)(iVar3 + 0x3a) = uVar2;
  *(undefined1 *)(iVar3 + 0x39) = uVar1;
  return;
}
