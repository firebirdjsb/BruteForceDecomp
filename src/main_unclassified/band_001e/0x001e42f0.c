/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C094FF2527C6D9FEDE74FA9CB3E1D60ADF1806190065AF0FD30B3E9CE2B2ABCD
 * Entry: 0x001e42f0, Ghidra index: 6775, label: FUN_001e42f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00407584;
extern uint32_t *DAT_00469908;
void FUN_001e42f0(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined4 ***pppuVar4;
  undefined4 unaff_EBX;
  int *unaff_EDI;
  int *piVar5;
  int local_24 [3];
  undefined4 **local_18;
  uint uStack_14;
  undefined4 local_8;
  uint local_4;
  
  local_4 = 0xf;
  local_8 = 0;
  local_18 = (undefined4 **)((uint)local_18 & 0xffffff00);
  pcVar1 = &DAT_00407584;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_0001fed0(&DAT_00407584,pcVar2 + -0x407584);
  FUN_000784c0(0);
  local_24[0] = 0;
  local_24[1] = 0;
  pppuVar4 = (undefined4 ***)local_18;
  if (local_4 < 0x10) {
    pppuVar4 = &local_18;
  }
  piVar5 = local_24;
  iVar3 = (**(code **)(*DAT_00469908 + 0xc))(DAT_00469908,pppuVar4,0x80000000);
  if (-1 < iVar3) {
    /* XBE 0x001E436F: LEA EAX,[ESP+0x10] after the preceding
     * interface call. The same frame uses [ESP+0x0C] as the first
     * output word; the next DWORD is local_24[1]. ABI_UNVERIFIED. */
    iVar3 = FUN_0018d3b0(&local_24[1]);
    if (-1 < iVar3) {
      FUN_0023a790(0xf07ead84,1);
    }
    if (unaff_EDI != (int *)0x0) {
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
  }
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(unaff_EBX);
  }
  return;
}
