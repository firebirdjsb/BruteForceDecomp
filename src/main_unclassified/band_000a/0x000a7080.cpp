/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 04CA9808FF13B70913F4059685A9D43CB3660C00CA8200E2AA75F8EB773A36C1
 * Entry: 0x000a7080, Ghidra index: 1981, label: FUN_000a7080
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0025af60(void);

extern uint32_t PTR_LAB_003a0640;
void FUN_000a7080(void)

{
  int iVar1;
  undefined4 in_ECX;
  undefined4 *unaff_EDI;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)in_ECX >> 0x18);
  *unaff_EDI = PTR_LAB_003a0640;
  *(undefined1 *)(unaff_EDI + 0x42) = local_1;
  iVar1 = FUN_0025af60(unaff_EDI + 0x42);
  unaff_EDI[0x43] = iVar1;
  *(undefined1 *)(iVar1 + 0x19) = 1;
  *(undefined4 *)(unaff_EDI[0x43] + 4) = unaff_EDI[0x43];
  *(undefined4 *)unaff_EDI[0x43] = unaff_EDI[0x43];
  *(undefined4 *)(unaff_EDI[0x43] + 8) = unaff_EDI[0x43];
  unaff_EDI[0x44] = 0;
  *(undefined1 *)(unaff_EDI + 1) = 0;
  *(byte *)(unaff_EDI + 0x45) = *(byte *)(unaff_EDI + 0x45) & 0xfe;
  return;
}
