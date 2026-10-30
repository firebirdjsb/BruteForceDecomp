/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E399E9CE068BB12115AD48AC6CA5B23252AC4F3A7586A238C68F914611C362CE
 * Entry: 0x001489f0, Ghidra index: 4261, label: FUN_001489f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_DAT_0039b80c;
extern uint32_t PTR_DAT_0039be90;
void FUN_001489f0(void)

{
  int iVar1;
  undefined4 in_ECX;
  undefined4 *unaff_EDI;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)in_ECX >> 0x18);
  unaff_EDI[1] = 0;
  *unaff_EDI = PTR_DAT_0039b80c;
  *(undefined1 *)(unaff_EDI + 5) = local_1;
  iVar1 = FUN_00148fb0(unaff_EDI + 5);
  unaff_EDI[6] = iVar1;
  *(undefined1 *)(iVar1 + 0x25) = 1;
  *(undefined4 *)(unaff_EDI[6] + 4) = unaff_EDI[6];
  *(undefined4 *)unaff_EDI[6] = unaff_EDI[6];
  *(undefined4 *)(unaff_EDI[6] + 8) = unaff_EDI[6];
  unaff_EDI[7] = 0;
  unaff_EDI[8] = 0;
  unaff_EDI[9] = 0;
  *unaff_EDI = &PTR_DAT_0039be90;
  return;
}
