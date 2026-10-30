/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 07596600B11A3366FEC84706147B1D52CF78A449D506A79B1EADB0D9065DC78D
 * Entry: 0x000f0050, Ghidra index: 2995, label: FUN_000f0050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
uint FUN_000f0050(void)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  int *unaff_ESI;
  
  if (unaff_ESI != (int *)0x0) {
    in_EAX = (**(code **)(*unaff_ESI + 4))();
    if (in_EAX == 3) {
      iVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1e4))();
      if (*(int *)(iVar1 + 8) == 0) {
        uVar2 = FUN_0010c7d0();
        return uVar2 & 0xffffff00;
      }
      in_EAX = FUN_0010c7d0();
    }
  }
  return in_EAX & 0xffffff00;
}
