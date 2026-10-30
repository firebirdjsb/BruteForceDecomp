/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 01690809759321C2358B73B7B60BC0CE834F65158A7333368083D777CC3B4E6E
 * Entry: 0x002818d0, Ghidra index: 9050, label: FUN_002818d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002818d0(void)

{
  int iVar1;
  undefined4 *in_EAX;
  
  if ((int)in_EAX[0xa0f] < (int)in_EAX[0xa0e]) {
    do {
      iVar1 = in_EAX[0xa04];
      if (iVar1 == 0) {
        in_EAX[0xa04] = 1;
      }
      else if (iVar1 == 1) {
        FUN_00281970();
      }
      else if (iVar1 == 2) {
        FUN_00281a70();
      }
    } while ((int)in_EAX[0xa0f] < (int)in_EAX[0xa0e]);
  }
  *(undefined2 *)(in_EAX + 0x101) = *(undefined2 *)(in_EAX + 0xa0c);
  *(undefined2 *)(in_EAX + 0x102) = *(undefined2 *)((int)in_EAX + 0x2836);
  *(undefined2 *)((int)in_EAX + 0x406) = *(undefined2 *)(in_EAX + 0xa0d);
  (*(code *)in_EAX[0xa07])(in_EAX + 0x101,in_EAX[0xa0c] << 1,*in_EAX);
  FUN_00281870();
  return;
}
