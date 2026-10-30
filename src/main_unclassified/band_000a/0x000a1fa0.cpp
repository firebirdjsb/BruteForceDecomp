/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 884FF64DBF240402854421E01AB8D40D9A70857CC12CBAD54C9969AD069CC3FA
 * Entry: 0x000a1fa0, Ghidra index: 1917, label: FUN_000a1fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0025ae60(void);

extern uint32_t PTR_LAB_003a0bb0;
void FUN_000a1fa0(void)

{
  int iVar1;
  undefined4 in_ECX;
  undefined4 *unaff_EDI;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)in_ECX >> 0x18);
  *unaff_EDI = PTR_LAB_003a0bb0;
  *(undefined1 *)(unaff_EDI + 0x42) = local_1;
  iVar1 = FUN_0025ae60(unaff_EDI + 0x42);
  unaff_EDI[0x43] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(unaff_EDI[0x43] + 4) = unaff_EDI[0x43];
  *(undefined4 *)unaff_EDI[0x43] = unaff_EDI[0x43];
  *(undefined4 *)(unaff_EDI[0x43] + 8) = unaff_EDI[0x43];
  unaff_EDI[0x44] = 0;
  *(undefined1 *)(unaff_EDI + 1) = 0;
  *(byte *)(unaff_EDI + 0x46) = *(byte *)(unaff_EDI + 0x46) & 0xfe;
  unaff_EDI[0x45] = 0xffffffff;
  return;
}
