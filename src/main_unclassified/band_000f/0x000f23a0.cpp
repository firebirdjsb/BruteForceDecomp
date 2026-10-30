/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 43F0E0A289ED53E79362D611AD627ECC2ED163A297B90E68538C5F2300C0467B
 * Entry: 0x000f23a0, Ghidra index: 3020, label: FUN_000f23a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
/* WARNING: Removing unreachable block (ram,0x000f23fa) */
/* WARNING: Removing unreachable block (ram,0x000f2400) */
/* WARNING: Removing unreachable block (ram,0x000f240d) */
/* WARNING: Removing unreachable block (ram,0x000f2404) */
/* WARNING: Removing unreachable block (ram,0x000f240b) */
/* WARNING: Removing unreachable block (ram,0x000f2432) */

int FUN_000f23a0(void)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    iVar1 = iVar1 + 1;
    pbVar2 = (byte *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x130))(iVar1);
    if (((pbVar2 != (byte *)0x0) && ((*pbVar2 & 1) != 0)) && ((*pbVar2 & 0x20) != 0)) {
      if (*(int *)(pbVar2 + 0x98) != 4) {
        FUN_001611d0();
      }
      iVar3 = iVar3 + 1;
    }
  } while (iVar1 < 8);
  return iVar3;
}
