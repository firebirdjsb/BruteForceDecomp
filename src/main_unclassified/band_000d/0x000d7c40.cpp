/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 637972F8D3E34514F3C1EF54C11A0CE29C427938C998D64A0F6D5408B351C466
 * Entry: 0x000d7c40, Ghidra index: 2670, label: FUN_000d7c40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0001bd30(uint32_t unaff_ESI);

void FUN_000d7c40(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EBX;
  undefined1 local_4 [4];
  
  FUN_0001bd30();
  puVar1 = *(undefined4 **)(unaff_EBX + 0x30);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  FUN_001298b0(local_4,uVar2,puVar1);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_EBX + 0x30));
}
