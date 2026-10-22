/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A53544FD27252CD5BF9F34B511C763CC3F40DF7017948AB3ED253B4E4151E2D
 * Entry: 0x00141b60, Ghidra index: 4108, label: FUN_00141b60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00141b60(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 local_4 [4];
  
  if (*(char *)(param_1 + 0x1d) == '\0') {
    FUN_00141b60(*(undefined4 *)(param_1 + 8));
    puVar1 = (undefined4 *)FUN_001417b0();
    puVar2 = (undefined4 *)FUN_00141bf0();
    FUN_00141cc0(local_4,*puVar2,*puVar1);
    FUN_00141df0(param_1 + 0x11,1);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(param_1);
  }
  return;
}
