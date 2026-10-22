/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7257DF76DFEB9C8A2018338A15710AA126C25F41BD358A6E7C0FC542FB858EFB
 * Entry: 0x000cd9c0, Ghidra index: 2536, label: FUN_000cd9c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_004a5b94;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_000cd9c0(void)

{
  int iVar1;
  int *piVar2;
  int *unaff_EBX;
  int *unaff_ESI;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    iVar1 = 0;
    piVar2 = unaff_ESI;
    if (0 < unaff_ESI[0xb0]) {
      do {
        if ((piVar2[1] == unaff_EDI) && (*piVar2 == *unaff_EBX)) {
          return unaff_ESI + iVar1 * 0xb;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 0xb;
      } while (iVar1 < unaff_ESI[0xb0]);
    }
  }
  _DAT_004a5b94 = _DAT_004a5b94 + 1;
  return (int *)0x0;
}
