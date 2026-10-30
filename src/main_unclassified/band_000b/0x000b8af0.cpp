/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3C50A39B58F0656191AB8A4B75C2E55E3DEA540D860B5C3FC2AFC02E675248B8
 * Entry: 0x000b8af0, Ghidra index: 2231, label: FUN_000b8af0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041ada0;
extern uint32_t *DAT_00469b54;
void FUN_000b8af0(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = (**(code **)(*DAT_00469b54 + 0x48))();
  *(undefined4 *)(unaff_ESI + 0x1378) = *(undefined4 *)(iVar1 + 300);
  *(undefined4 *)(unaff_ESI + 0x1374) = *(undefined4 *)(iVar1 + 0x128);
  DAT_0041ada0 = *(undefined1 *)(iVar1 + 0x124);
  *(undefined1 *)(unaff_ESI + 0x1370) = *(undefined1 *)(iVar1 + 0x130);
  *(byte *)(unaff_ESI + 4) =
       *(byte *)(unaff_ESI + 4) ^ (*(char *)(iVar1 + 0x131) << 1 ^ *(byte *)(unaff_ESI + 4)) & 2;
  return;
}
