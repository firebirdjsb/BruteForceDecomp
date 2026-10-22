/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B0742D96C9BAD38F86C2A86E5AA389F23BE4C3251F466FFA6AE2E7268D1AACE9
 * Entry: 0x000fa890, Ghidra index: 3129, label: FUN_000fa890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000fa890(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_4 [4];
  
  iVar2 = FUN_000fa560();
  if (iVar2 == 0) {
    return;
  }
  puVar1 = *(undefined4 **)(iVar2 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)*puVar1;
  }
  while( true ) {
    if (puVar4 == puVar1) {
      puVar1 = *(undefined4 **)(iVar2 + 4);
      if (puVar1 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *puVar1;
      }
      FUN_001298b0(local_4,uVar3,puVar1);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(iVar2 + 4));
    }
    puVar4[2] = 0;
    if (puVar4[3] != 0) break;
    puVar4 = (undefined4 *)*puVar4;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(puVar4[3]);
}
