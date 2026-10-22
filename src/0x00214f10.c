/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6D01B6EC15D9B2224CD84613B22F5697103633914D693121F6DAC355A2E16E6
 * Entry: 0x00214f10, Ghidra index: 7454, label: FUN_00214f10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00214f10(void)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  puVar1 = *(undefined4 **)(in_EAX + 0xc);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_001298b0(local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(in_EAX + 0xc));
}
