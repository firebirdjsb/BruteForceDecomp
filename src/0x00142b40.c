/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8AAE84D40261F5BA7159B7568B8A9E0192558F667F43C3BDFC92EE933B00AAB2
 * Entry: 0x00142b40, Ghidra index: 4132, label: FUN_00142b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00142b40(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  puVar1 = *(undefined4 **)(in_EAX + 4);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_001298b0(local_4,uVar2,puVar1);
  uVar2 = 0;
  if (*(undefined4 **)(in_EAX + 4) != (undefined4 *)0x0) {
    uVar2 = **(undefined4 **)(in_EAX + 4);
  }
  FUN_00142c20(in_EAX,uVar2,param_1,param_2,param_2);
  return;
}
