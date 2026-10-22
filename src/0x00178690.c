/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 201C997F98EA4333F06FC0B42CC925633215DC0530132E0DBA7266111286BE1D
 * Entry: 0x00178690, Ghidra index: 4968, label: FUN_00178690
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00178690(void)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  char *unaff_ESI;
  undefined1 local_1c [4];
  undefined4 local_18;
  uint local_4;
  
  uVar2 = 0;
  if (unaff_ESI != (char *)0x0) {
    pcVar3 = unaff_ESI;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar4 = (int)pcVar3 - (int)(unaff_ESI + 1);
    if (iVar4 != 0) {
      FUN_0001fe90(unaff_ESI);
      FUN_000764c0(local_1c);
      if (0xf < local_4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(local_18,iVar4);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}
