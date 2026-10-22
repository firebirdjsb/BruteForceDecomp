/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9020BF9FB8171B7DF8D31E306A6F038AEC4F53CF660D752E2D0156B680093A3F
 * Entry: 0x00104490, Ghidra index: 3317, label: FUN_00104490
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00104490(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  int in_EAX;
  
  if ((*(byte *)(in_EAX + 0x114) & 1) == 0) {
    if ((*(byte *)(in_EAX + 0x114) & 2) != 0) {
      piVar1 = *(int **)(in_EAX + 0x118);
      if ((piVar1 != (int *)0x0) && ((*(byte *)(piVar1 + 10) & 4) != 0)) {
        *(byte *)(piVar1 + 10) = *(byte *)(piVar1 + 10) & 0xfb;
        (**(code **)(*piVar1 + 0x28))();
      }
      FUN_00104bd0();
      cVar2 = FUN_00104a50(in_EAX,param_1);
      if (cVar2 != '\0') {
        *(byte *)(in_EAX + 0x114) = *(byte *)(in_EAX + 0x114) & 0xfd;
        *(undefined4 *)(in_EAX + 0x110) = 0;
      }
    }
  }
  else {
    cVar2 = FUN_00104940(param_1);
    if (cVar2 != '\0') {
      *(byte *)(in_EAX + 0x114) = *(byte *)(in_EAX + 0x114) & 0xfe | 2;
      *(undefined4 *)(in_EAX + 0x110) = 0;
      return;
    }
  }
  return;
}
