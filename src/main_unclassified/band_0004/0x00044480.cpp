/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C908F6F4A9445E580271310787AD54EEECEFE388101FD2B21372C2CB3D778885
 * Entry: 0x00044480, Ghidra index: 531, label: FUN_00044480
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00044480(void)

{
  char cVar1;
  int in_EAX;
  int local_50;
  int *local_4c;
  
  local_4c = (int *)FUN_000120f0();
  FUN_00042fa0();
  local_50 = 0;
  FUN_00044140(in_EAX,&local_50);
  if (*(int *)(in_EAX + 0x9b8) != local_50) {
    FUN_0008f6a0(local_50);
  }
  FUN_00043f00();
  FUN_00043f40(in_EAX);
  FUN_00044560(in_EAX);
  FUN_00044030(in_EAX);
  if ((*(uint *)(in_EAX + 0x3c4) & 0x100) == 0) {
    (**(code **)(*local_4c + 0x40))();
    cVar1 = FUN_00023630();
    if ((cVar1 == '\0') && ((*(uint *)(in_EAX + 0x3c4) & 0x800) == 0)) {
      FUN_00049ca0();
      FUN_00012320(0x54);
      FUN_0004dff0(in_EAX);
      FUN_00012440();
    }
  }
  FUN_00043cd0();
  FUN_00043860(in_EAX);
  return;
}
