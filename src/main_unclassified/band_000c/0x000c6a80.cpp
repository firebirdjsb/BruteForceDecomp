/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9DAA62A1F9F3AD9CD7810C84BF46B9B0F892E5AD1415D763DEAED42B040142A5
 * Entry: 0x000c6a80, Ghidra index: 2445, label: FUN_000c6a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0008f6e0(std::uint32_t guest_edx);

extern uint32_t PTR_DAT_00400864;
extern uint32_t PTR_FUN_0039f2f8;
extern uint32_t PTR_FUN_0039f8bc;
void FUN_000c6a80(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_0039f2f8;
  uVar2 = (uint)(*(ushort *)(unaff_ESI + 0x1d) >> 5);
  *(uint *)(PTR_DAT_00400864 + uVar2 * 4) =
       *(uint *)(PTR_DAT_00400864 + uVar2 * 4) &
       ~(1 << ((byte)*(ushort *)(unaff_ESI + 0x1d) & 0x1f));
  if (unaff_ESI[0x1c] != 0) {
    FUN_0008f6e0();
  }
  *unaff_ESI = &PTR_FUN_0039f8bc;
  piVar1 = (int *)unaff_ESI[8];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[8] = 0;
  }
  return;
}
