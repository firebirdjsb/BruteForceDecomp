/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6DF66E219F2D47CA69E34F7A80E8FEF969FC677D7AC28102EEB41AFA2328BB5E
 * Entry: 0x0008b9e0, Ghidra index: 1686, label: FUN_0008b9e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469ab4;
undefined4 FUN_0008b9e0(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EDI;
  undefined4 local_4;
  
  piVar1 = DAT_00469ab4;
  local_4 = 0;
  iVar2 = (**(code **)(*DAT_00469ab4 + 0x10))(&local_4);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 0x68);
    if ((iVar2 != 0) && (iVar2 == unaff_EDI)) break;
    /* Original x86 0x0008b9e9: LEA ECX,[ESP+8] for the first call;
     * 0x0008ba0d: LEA EAX,[ESP+8] for this second call.  Both
     * address the same initialized four-byte local_4 slot. */
    iVar2 = (**(code **)(*piVar1 + 0x14))(&local_4);
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}
