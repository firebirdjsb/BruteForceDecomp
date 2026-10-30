/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E56E027488E68FD67B3029295E9A6D4D3C7CBF1C0E73DD6500FEDFD7D61159C5
 * Entry: 0x0016a5f0, Ghidra index: 4766, label: FUN_0016a5f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414da0;
extern uint32_t PTR_FUN_0039a7c4;
extern uint32_t PTR_FUN_0039a808;
extern uint32_t PTR_LAB_0038e7a8;
extern uint32_t PTR_LAB_0039a7d0;
extern uint32_t PTR_LAB_0039a7ec;
extern uint32_t PTR_LAB_0039a7f8;
extern uint32_t PTR_LAB_0039a818;
void FUN_0016a5f0(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *unaff_ESI;
  
  unaff_ESI[-4] = PTR_LAB_0039a818;
  unaff_ESI[-3] = PTR_FUN_0039a808;
  unaff_ESI[-2] = PTR_LAB_0039a7f8;
  *unaff_ESI = PTR_LAB_0039a7ec;
  unaff_ESI[1] = PTR_LAB_0039a7d0;
  if ((*(byte *)(unaff_ESI + 4) & 1) != 0) {
    iVar6 = unaff_ESI[0x34];
    *(byte *)(unaff_ESI + 4) = *(byte *)(unaff_ESI + 4) & 0xfe;
    if (iVar6 != 0) {
      FUN_002b5050();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar6);
    }
    unaff_ESI[0x34] = 0;
  }
  iVar6 = 0x10;
  piVar5 = unaff_ESI + 0x30;
  do {
    uVar1 = piVar5[-1];
    if ((uVar1 != 0) && ((uVar1 & 1) == 0)) {
      piVar5[-1] = 0;
      iVar2 = *(int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
      piVar4 = (int *)(&DAT_00414da0 + (uVar1 * 0x19660d + 0x3c6ef35f >> 0x15) * 4);
      while (iVar2 != 0) {
        piVar3 = (int *)*piVar4;
        if (piVar3 == piVar5 + -2) {
          *piVar4 = *(int *)*piVar4;
          break;
        }
        piVar4 = piVar3;
        iVar2 = *piVar3;
      }
    }
    iVar6 = iVar6 + -1;
    piVar5 = piVar5 + -2;
    if (iVar6 == 0) {
      if (unaff_ESI[0xb] != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(unaff_ESI[0xb]);
      }
      unaff_ESI[0xb] = 0;
      unaff_ESI[0xc] = 0;
      unaff_ESI[0xd] = 0;
      if (unaff_ESI[7] != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(unaff_ESI[7]);
      }
      unaff_ESI[7] = 0;
      unaff_ESI[8] = 0;
      unaff_ESI[9] = 0;
      *(undefined ***)(-(uint)(unaff_ESI != (undefined4 *)0x10) & (uint)(unaff_ESI + 1)) =
           &PTR_LAB_0038e7a8;
      *(undefined ***)(-(uint)(unaff_ESI != (undefined4 *)0x10) & (uint)unaff_ESI) =
           &PTR_FUN_0039a7c4;
      return;
    }
  } while( true );
}
