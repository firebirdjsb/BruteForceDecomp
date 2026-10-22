/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 230631735C90185A5BCC0D2ACE4860A6182ED284241A7E2321F2D285BB4B8918
 * Entry: 0x0001d590, Ghidra index: 134, label: FUN_0001d590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
void FUN_0001d590(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *in_EDX;
  int *unaff_EDI;
  
  do {
    if (in_EDX == unaff_EDI) {
      return;
    }
    uVar1 = in_EDX[1];
    if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
      in_EDX[1] = 0;
      iVar2 = *(int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
      piVar4 = (int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
      while (iVar2 != 0) {
        piVar3 = (int *)*piVar4;
        if (piVar3 == in_EDX) {
          *piVar4 = *(int *)*piVar4;
          break;
        }
        piVar4 = piVar3;
        iVar2 = *piVar3;
      }
    }
    in_EDX = in_EDX + 2;
  } while( true );
}
